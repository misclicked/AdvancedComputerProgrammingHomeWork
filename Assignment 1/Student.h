/*
 * Student.h
 *
 *  Created on: 2019¦~3¤ë14¤é
 *      Author: misclicked
 */

#ifndef STUDENT_H_
#define STUDENT_H_
#include<string>
class Student{
public:
	void setFirstName(std::string name);
	std::string getFirstName() const;
	void printFirstName() const;
private:
	std::string firstName;
};



#endif /* STUDENT_H_ */
