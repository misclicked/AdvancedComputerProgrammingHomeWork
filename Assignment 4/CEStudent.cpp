/*
 * CEStudent.cpp
 *
 *  Created on: 2019¦~4¤ë11¤é
 *      Author: misclicked
 */
#include<bits/stdc++.h>
#include "CEStudent.h"
using namespace std;
void CEStudent::setCPE(bool CPE){
	this->CPE = CPE;
}

bool CEStudent::getCPE() const{
	return this->CPE;
}

void CEStudent::printCPE() const{
	cout<<*this<<"'s CPE has ";
	if(this->CPE){
		cout<<"passed";
	}else{
		cout<<"failed";
	}
	cout<<endl;
}

