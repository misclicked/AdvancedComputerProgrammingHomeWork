/*
 * CEStudent.h
 *
 *  Created on: 2019¦~4¤ë11¤é
 *      Author: misclicked
 */

#ifndef CESTUDENT_H_
#define CESTUDENT_H_
#include "Student.h"
class CEStudent : public Student{
private:
	bool CPE;
public:
	virtual ~CEStudent() override;
	void setCPE(bool);
	bool getCPE() const;
	void printCPE() const;
	virtual void print() const override;
};


#endif /* CESTUDENT_H_ */
