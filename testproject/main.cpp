#include <cstdio>
#include <cstdlib> 
#include "Protocol.h" 
#include "MyAI.h"
int main(int argc , char **argv)
{
	Protocol protocol;  
	switch(argc){
	case 3:  
		if(!protocol.init_protocol(argv[1], atoi(argv[2]))) return 0;
		break; 
	} 
	
	MyAI myai; 
	char current_position[32], move[6];
	int  piece_count[14];
	PROTO_CLR color;
	History history;
	bool turn;  
	int time; //表示剩餘時間 單位為毫秒(ms)

	if(argc==3)
	{  
		protocol.init_board(piece_count, current_position, history,time);

		if(history.number_of_moves != 0)
		{
			puts("-----------Record-----------");
			for(int i=0;i<history.number_of_moves;i++)
			{
				printf("%d:%s\n",i,history.move[i]);
			}	
		} 

		myai.initBoardState(piece_count, current_position);   
		protocol.get_turn(turn, color);
		myai.color(color);  
		if(turn)                           // my turn is First
		{
			myai.generateMove(move);
			protocol.send(move);           // my flip = "b6-b6" or move = "a2-a3"
			protocol.recv(move,time);	   // my flip = "b6(K)" or move = "a2-a3";			time = 剩餘時間(ms)		
			if(color == PCLR_UNKNOW)       // all pieces are unrevealed/hidden
			{
				color = protocol.get_color(move);
				myai.color(color); 
			}
			myai.MakeMove(move);	
			protocol.recv(move,time);      // opponent flip = "c8(g)" or move = "c4-c5";	time = 剩餘時間(ms)		
			myai.MakeMove(move);
		}
		else                               // my turn is Second
		{ 
			protocol.recv(move,time);      // opponent flip = "c8(g)" or move = "c4-c5"		time = 剩餘時間(ms)		
			if(color == PCLR_UNKNOW)       // all pieces are unrevealed/hidden
			{ 
				color = (protocol.get_color(move)==PCLR_BLACK)?PCLR_RED:PCLR_BLACK; 
				myai.color(color);
			}
			myai.MakeMove(move);
		}

		while(1)
		{  
			myai.generateMove(move);   
			protocol.send(move);           // my flip = "b6-b6" or move = "a2-a3"
			protocol.recv(move,time);      // my flip = "b6(K)" or move = "a2-a3"			time = 剩餘時間(ms)		
			myai.MakeMove(move);           // ponder 
			protocol.recv(move,time);	   //												time = 剩餘時間(ms)		
			myai.MakeMove(move);           // opponent flip = "c8(g)" or move = "c4-c5"
		}  
	} 
	return 0;
} // end main(int argc , char **argv)

