/*
 * PassByRef.cpp
 *
 *  Created on: 2019¦~3¤ë7¤é
 *      Author: misclicked
 */
#include<bits/stdc++.h>
using namespace std;
void squareByValue(int x){
	x=x*x;
}
void squareByRef(int &x){
	x=x*x;
}
void TestRef(){
	int n;
	cout<<"Input a value to square:";
	cin>>n;
	squareByValue(n);
	cout<<"Pass by Value: "<<n<<endl;
	squareByRef(n);
	cout<<"Pass by Ref: "<<n<<endl;
}



