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
#include "/home/guanqin/compareM/Marabou/src/engine/tests/Test_DegradationChecker.h"

static DegradationCheckerTestSuite suite_DegradationCheckerTestSuite;

static CxxTest::List Tests_DegradationCheckerTestSuite = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_DegradationCheckerTestSuite( "/home/guanqin/compareM/Marabou/src/engine/tests/Test_DegradationChecker.h", 28, "DegradationCheckerTestSuite", suite_DegradationCheckerTestSuite, Tests_DegradationCheckerTestSuite );

static class TestDescription_DegradationCheckerTestSuite_test_single_equation : public CxxTest::RealTestDescription {
public:
 TestDescription_DegradationCheckerTestSuite_test_single_equation() : CxxTest::RealTestDescription( Tests_DegradationCheckerTestSuite, suiteDescription_DegradationCheckerTestSuite, 46, "test_single_equation" ) {}
 void runTest() { suite_DegradationCheckerTestSuite.test_single_equation(); }
} testDescription_DegradationCheckerTestSuite_test_single_equation;

static class TestDescription_DegradationCheckerTestSuite_test_two_equation : public CxxTest::RealTestDescription {
public:
 TestDescription_DegradationCheckerTestSuite_test_two_equation() : CxxTest::RealTestDescription( Tests_DegradationCheckerTestSuite, suiteDescription_DegradationCheckerTestSuite, 76, "test_two_equation" ) {}
 void runTest() { suite_DegradationCheckerTestSuite.test_two_equation(); }
} testDescription_DegradationCheckerTestSuite_test_two_equation;

#include <cxxtest/Root.cpp>
