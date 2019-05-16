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
	friend std::ostream &operator<<(std::ostream&, const Student&);
public:
	explicit Student(double GPA = 0.0);
	~Student();
	void setFirstName(std::string name);
	std::string getFirstName() const;
	void printFirstName() const;
	void setLastName(std::string name);
	std::string getLastName() const;
	void printLastName() const;
	void computeGPA(int numberOfAs, int numberOfBs,
			int numberOfCs, int numberOfDs, int numberOfFs);
	double getGPA() const;
	void printGPA() const;
	bool operator<(const Student&);
private:
	std::string firstName;
	std::string lastName;
	double GPA;
};



#endif /* STUDENT_H_ */
