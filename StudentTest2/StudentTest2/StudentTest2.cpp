#include <cppunit\CompilerOutputter.h>
#include <cppunit\extensions\TestFactoryRegistry.h>
#include <cppunit\ui\text\TestRunner.h>
#include <cppunit\XmlOutputter.h>

#include <iostream>

using namespace std;

int main()
{

	CPPUNIT_NS::Test *suite = CPPUNIT_NS::TestFactoryRegistry::getRegistry().makeTest();
	CppUnit::TextUi::TestRunner runner;

	ofstream fs("Result.xml");
	CppUnit::XmlOutputter* outputter = new CppUnit::XmlOutputter(&runner.result(), fs);
	runner.setOutputter(outputter);

	runner.addTest(suite);
	bool wasSucessful = runner.run();

    return wasSucessful ? 0 : 1;
}

