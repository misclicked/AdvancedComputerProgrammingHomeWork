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
	Student s2;
	Student* studentPtr = &s1;

	s1.setFirstName("Yu-Zhe");
	s1.setLastName("Wang");
	s1.setCPE(true);
	s1.computeGPA(23,4,2,5,6);

	s2.setFirstName("Jin-Ping");
	s2.setLastName("XI");
	s2.computeGPA(4,45,22,5,6);

	studentPtr->print();
	delete studentPtr;

	studentPtr = &s2;
	studentPtr->print();
	delete studentPtr;
}
