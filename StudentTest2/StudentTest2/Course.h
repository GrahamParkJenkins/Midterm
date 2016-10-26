#ifndef Course_H
#define Course_H

#include <iostream>
#include <string>

using namespace std;

class Course
{
public:
	Course();

	Course(string nm, int gr);

	string GetCourseName();

	int GetCourseGrade();

private:
	string course_name;
	int grade;

};

#endif
