#include "Student.h"

Student::Student(string nm, string no)
	:name(nm),number(no)
{
	no_of_courses = 0;
}

string Student::GetStuName()
{
	return name;
}

string Student::GetStuNumber()
{
	return number;
}

void Student::AssignGrade(string co, int gr)
{
	if (no_of_courses == MAXNUM)
	{
		cout << "You have exceeded the maximum number of courses" << endl;
		return;
	}

	Course c(co, gr);
	course_grades[no_of_courses++] = c;
}

int Student::GetGrade(string co)
{
	int i = 0;
	while (i < no_of_courses)
	{
		if (course_grades[i].GetCourseName() == co)
		{
			return (course_grades[i].GetCourseGrade());
		}
		i++;
	}

	return(-1);
}

float Student::FindAveGrade()
{
	int i = 0;
	
	float total = 0;
	float average = -1;

	while (i < no_of_courses)
	{
		total += course_grades[i].GetCourseGrade();
		i++;
	}
	average = total / no_of_courses;

	return average;

}