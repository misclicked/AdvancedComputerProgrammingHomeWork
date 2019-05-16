/*
 * Student.cpp
 *
 *  Created on: 2019¦~3¤ë14¤é
 *      Author: misclicked
 */

#include <bits/stdc++.h>
#include "Student.h"
using namespace std;

Student::Student(){
}

Student::Student(double GPA){
	if(GPA<0.0){
		throw invalid_argument("GPA must be at least 0.0");
	}
	this->GPA=GPA;
}

Student::~Student(){}

void Student::setFirstName(string name){
	this->firstName = name;
}

string Student::getFirstName() const{
	return this->firstName;

}

void Student::setLastName(string name){
	this->lastName = name;
}

string Student::getLastName() const{
	return this->lastName;

}

void Student::printFirstName() const{
	cout<<"First Name: "<<this->firstName<<endl;
}

void Student::printLastName() const{
	cout<<"Last Name: "<<this->lastName<<endl;
}

void Student::computeGPA(int numberOfAs, int numberOfBs,
		int numberOfCs, int numberOfDs, int numberOfFs){
	if(numberOfAs<0 or numberOfBs<0 or numberOfCs<0 or numberOfDs<0 or numberOfFs<0){
		throw invalid_argument("number of grades must be positive number");
	}
	GPA = (4.0*numberOfAs+3.0*numberOfBs+2.0*numberOfCs+1.0*numberOfDs)/
			(numberOfAs+numberOfBs+numberOfCs+numberOfDs);
}

double Student::getGPA() const{
	return GPA;
}
void Student::printGPA() const{
	cout<<"GPA: "<<this->GPA<<endl;
}
bool Student::operator<(const Student& stu){
	return this->GPA<stu.GPA;
}
ostream &operator<<(ostream& output, const Student &stu){
	output<<stu.getFirstName()<<" "<<stu.getLastName();
	return output;
}
