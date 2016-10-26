#include <cppunit\config\SourcePrefix.h>
#include "Student.h"
#include "StudentTest.h"

#include <iostream>
#include <string>

using namespace std;

void StudentTest::SetUp()
{

}

void StudentTest::TearDown()
{

}

void StudentTest::TestConstructor()
{
	Student stu("jim", "94-111000-49");

	string student_name = stu.GetStuName();
	CPPUNIT_ASSERT(student_name == "jim");

	string student_number = stu.GetStuNumber();
	CPPUNIT_ASSERT(student_number == "94-111000-49");

	

	return;
}


void StudentTest::TestAssignmentAndRetrieveGrades()
{
	Student studentOne("jim","110");
	Student studentTwo("jom", "112");
	Student studentThree("jem", "114");

	studentOne.AssignGrade("Math", 20);
	studentTwo.AssignGrade("Science", 40);
	studentThree.AssignGrade("SelfWorth", 0);

	int stGrade1 = studentOne.GetGrade("Math");
	int stGrade2 = studentTwo.GetGrade("Science");
	int stGrade3 = studentThree.GetGrade("SelfWorth");

	CPPUNIT_ASSERT(stGrade1 == 20);

}

void StudentTest::TestFindAverageGrade()
{
	Student stu("Jimmy", "11223344");

	stu.AssignGrade("vgp2001", 60);
	stu.AssignGrade("vgp2002", 70);
	stu.AssignGrade("vgp2003", 70);
	stu.AssignGrade("vgp2004", 100);

	float average = stu.FindAveGrade();

	CPPUNIT_ASSERT_EQUAL((float)75, average);

}

CPPUNIT_TEST_SUITE_REGISTRATION(StudentTest);
