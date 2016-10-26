#ifndef TestStudent_H
#define TestStudent_H

#include <cppunit\extensions\HelperMacros.h>

class TestStudent2 : public CPPUNIT_NS::TestFixture
{
	CPPUNIT_TEST_SUITE(TestStudent2);
	CPPUNIT_TEST_SUITE_END();

public:
	void SetUp();
	void TearDown();
};

#endif 

