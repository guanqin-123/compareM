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
#include "/home/guanqin/compareM/Marabou/src/common/tests/Test_Error.h"

static ErrorTestSuite suite_ErrorTestSuite;

static CxxTest::List Tests_ErrorTestSuite = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_ErrorTestSuite( "/home/guanqin/compareM/Marabou/src/common/tests/Test_Error.h", 23, "ErrorTestSuite", suite_ErrorTestSuite, Tests_ErrorTestSuite );

static class TestDescription_ErrorTestSuite_test_code_and_errno : public CxxTest::RealTestDescription {
public:
 TestDescription_ErrorTestSuite_test_code_and_errno() : CxxTest::RealTestDescription( Tests_ErrorTestSuite, suiteDescription_ErrorTestSuite, 26, "test_code_and_errno" ) {}
 void runTest() { suite_ErrorTestSuite.test_code_and_errno(); }
} testDescription_ErrorTestSuite_test_code_and_errno;

#include <cxxtest/Root.cpp>
