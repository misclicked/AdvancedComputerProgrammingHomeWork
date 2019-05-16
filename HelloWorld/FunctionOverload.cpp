/*
 * FunctionOverload.cpp
 *
 *  Created on: 2019¦~3¤ë7¤é
 *      Author: misclicked
 */

int Pow(int x,int y){
	int out=1;
	while(y){
		if(y&1)out*=x;
		x*=x;
		y>>=1;
	}
	return out;
}

double Pow(double x,int y){
	double out=1.0;
	while(y){
		if(y&1)out*=x;
		x*=x;
		y>>=1;
	}
	return out;
}



