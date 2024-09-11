/* Generated file, do not edit */

#ifndef CXXTEST_RUNNING
#define CXXTEST_RUNNING
#endif

#define _CXXTEST_HAVE_STD
#define _CXXTEST_HAVE_EH
#include <cxxtest/TestListener.h>
#include <cxxtest/TestTracker.h>
#include <cxxtest/TestRunner.h>
#include <cxxtest/RealDescriptions.h>
#include <cxxtest/ErrorPrinter.h>

int main() {
 return CxxTest::ErrorPrinter().run();
}
#include "/home/guanqin/compareM/Marabou/src/common/tests/Test_Stack.h"

static StackTestSuite suite_StackTestSuite;

static CxxTest::List Tests_StackTestSuite = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_StackTestSuite( "/home/guanqin/compareM/Marabou/src/common/tests/Test_Stack.h", 23, "StackTestSuite", suite_StackTestSuite, Tests_StackTestSuite );

static class TestDescription_StackTestSuite_test_basic_stack : public CxxTest::RealTestDescription {
public:
 TestDescription_StackTestSuite_test_basic_stack() : CxxTest::RealTestDescription( Tests_StackTestSuite, suiteDescription_StackTestSuite, 38, "test_basic_stack" ) {}
 void runTest() { suite_StackTestSuite.test_basic_stack(); }
} testDescription_StackTestSuite_test_basic_stack;

static class TestDescription_StackTestSuite_test_clear_and_throw : public CxxTest::RealTestDescription {
public:
 TestDescription_StackTestSuite_test_clear_and_throw() : CxxTest::RealTestDescription( Tests_StackTestSuite, suiteDescription_StackTestSuite, 63, "test_clear_and_throw" ) {}
 void runTest() { suite_StackTestSuite.test_clear_and_throw(); }
} testDescription_StackTestSuite_test_clear_and_throw;

#include <cxxtest/Root.cpp>
