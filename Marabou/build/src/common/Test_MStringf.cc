/* Generated file, do not edit */

#ifndef CXXTEST_RUNNING
#define CXXTEST_RUNNING
#endif

#define _CXXTEST_HAVE_STD
#include <cxxtest/TestListener.h>
#include <cxxtest/TestTracker.h>
#include <cxxtest/TestRunner.h>
#include <cxxtest/RealDescriptions.h>
#include <cxxtest/ErrorPrinter.h>

int main() {
 return CxxTest::ErrorPrinter().run();
}
#include "/home/guanqin/compareM/Marabou/src/common/tests/Test_MStringf.h"

static StringfTestSuite suite_StringfTestSuite;

static CxxTest::List Tests_StringfTestSuite = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_StringfTestSuite( "/home/guanqin/compareM/Marabou/src/common/tests/Test_MStringf.h", 21, "StringfTestSuite", suite_StringfTestSuite, Tests_StringfTestSuite );

static class TestDescription_StringfTestSuite_test_constructor : public CxxTest::RealTestDescription {
public:
 TestDescription_StringfTestSuite_test_constructor() : CxxTest::RealTestDescription( Tests_StringfTestSuite, suiteDescription_StringfTestSuite, 24, "test_constructor" ) {}
 void runTest() { suite_StringfTestSuite.test_constructor(); }
} testDescription_StringfTestSuite_test_constructor;

#include <cxxtest/Root.cpp>
