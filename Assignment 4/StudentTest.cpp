/*
 * main.cpp
 *
 *  Created on: 2019¦~3¤ë14¤é
 *      Author: misclicked
 */
#include <bits/stdc++.h>
#include "Student.h"
#include "CEStudent.h"

using namespace std;
int main(){
	CEStudent s1;
	s1.setFirstName("Yu-Zhe");
	s1.setLastName("Wang");
	s1.setCPE(true);
	cout<<s1.getCPE()<<endl;
	s1.printCPE();
	CEStudent s2;
	s2.setFirstName("Jin-Ping");
	s2.setLastName("XI");
	s2.setCPE(false);
	cout<<s2.getCPE()<<endl;
	s2.printCPE();
}
