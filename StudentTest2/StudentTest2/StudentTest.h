#ifndef TestStudent_H
#define TestStudent_H

#include <cppunit\extensions\HelperMacros.h>

class StudentTest : public CPPUNIT_NS::TestFixture
{
	CPPUNIT_TEST_SUITE(StudentTest);
	CPPUNIT_TEST(TestConstructor);
	CPPUNIT_TEST(TestAssignmentAndRetrieveGrades);
	CPPUNIT_TEST(TestFindAverageGrade);
	CPPUNIT_TEST_SUITE_END();

public:
	void SetUp();
	void TearDown();

	void TestConstructor();
	void TestAssignmentAndRetrieveGrades();
	void TestFindAverageGrade();
};

#endif 

