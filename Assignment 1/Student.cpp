/*
 * Student.cpp
 *
 *  Created on: 2019�~3��14��
 *      Author: misclicked
 */

#include <bits/stdc++.h>
#include "Student.h"
using namespace std;

void Student::setFirstName(string name){
	this->firstName = name;
}

string Student::getFirstName() const{
	return this->firstName;
}

void Student::printFirstName() const{
	cout<<"First Name: "<<this->firstName<<endl;
}
