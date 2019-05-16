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
	int n=2;
	Student *students = new Student[2]();
	string input;
	int gradeAs,gradeBs,gradeCs,gradeDs,gradeFs;
	double GPA;
	for(int i=0;i<n;i++){
		cout<<"Input GPA of "<<i<<"th Student:";
		cin>>GPA;
		try{
			students[i] = *(new Student(GPA));
		}catch(invalid_argument &e){
			cout<<"Exception: "<<e.what()<<endl;
			i--;
			continue;
		}
		cout<<"Input grade of "<<i<<"th Student from A~F:";
		cin>>gradeAs>>gradeBs>>gradeCs>>gradeDs>>gradeFs;
		try{
			students[i].computeGPA(gradeAs,gradeBs,gradeCs,gradeDs,gradeFs);
		}catch(invalid_argument &e){
			cout<<"Exception: "<<e.what()<<endl;
			i--;
			continue;
		}
		students[i].printGPA();
		cout<<"Input first name of "<<i<<"th Student: ";
		cin>>input;
		students[i].setFirstName(input);
		cout<<"Input last name of "<<i<<"th Student: ";
		cin>>input;
		students[i].setLastName(input);
	}
	cout<<"Student GPA List: "<<endl;
	for(int i=0;i<n;i++){
		cout<<"GPA of "<<students[i]<<" is:"<<students[i].getGPA()<<endl;
	}
	if(students[0]<students[1]){
		cout<<students[1]<<endl;
	}else if(students[1]<students[0]){
		cout<<students[0]<<endl;
	}else{
		cout<<"Same GPA!"<<endl;
	}
	delete []students;
}
