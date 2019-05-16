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
	vector<Student> students;
	string input;
	int gradeAs,gradeBs,gradeCs,gradeDs,gradeFs;
	double GPA;
	int n;
	cout<<"Input number of students: ";
	cin>>n;
	for(int i=0;i<n;i++){
		cout<<"Input GPA "<<i<<"th Student:";
		cin>>GPA;
		try{
			Student temp(GPA);
			students.push_back(temp);
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
		cout<<"GPA of "<<students[i].getFirstName()<<
				" "<<students[i].getLastName()<<" is:"<<students[i].getGPA()<<endl;
	}
}
