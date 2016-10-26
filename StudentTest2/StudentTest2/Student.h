#ifndef Student_H
#define Student_H

#include <iostream>
#include <string>
#include "Course.h"

using namespace std;

const int MAXNUM = 20;

class Student
{
public:
	Student(string nm, string no);

	string GetStuName();

	string GetStuNumber();

	void AssignGrade(string co, int gr);

	int GetGrade(string co);

	float FindAveGrade();

private:
	string name;
	string number;
	Course course_grades[MAXNUM];
	int no_of_courses;

};


#endif 
