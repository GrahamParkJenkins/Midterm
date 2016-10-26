#include "Course.h"

Course::Course()
{
	course_name = "";
	grade = -1;
}

Course::Course(string nm, int gr)
{
	grade = gr;
	course_name = nm;
}

string Course::GetCourseName(){return course_name;}

int Course::GetCourseGrade(){return grade;}