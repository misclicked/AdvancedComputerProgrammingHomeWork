/*
 * main.cpp
 *
 *  Created on: 2019¦~3¤ë14¤é
 *      Author: misclicked
 */
#include <bits/stdc++.h>
#include "Student.h"

using namespace std;
int main(){
	vector<Student> students(10);
	string input;
	for(size_t i=0;i<students.size();i++){
		cout<<"Input name of "<<i<<"th Student: ";
		cin>>input;
		students[i].setFirstName(input);
		cout<<students[i].getFirstName()<<" confirmed"<<endl;
	}
	cout<<"Student List: "<<endl;
	for(size_t i=0;i<students.size();i++){
		cout<<i<<": ";
		students[i].printFirstName();
	}
}
