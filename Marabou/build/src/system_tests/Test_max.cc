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
#include "/home/guanqin/compareM/Marabou/src/system_tests/Test_max.h"

static MaxTestSuite suite_MaxTestSuite;

static CxxTest::List Tests_MaxTestSuite = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_MaxTestSuite( "/home/guanqin/compareM/Marabou/src/system_tests/Test_max.h", 23, "MaxTestSuite", suite_MaxTestSuite, Tests_MaxTestSuite );

static class TestDescription_MaxTestSuite_test_max_infeasible : public CxxTest::RealTestDescription {
public:
 TestDescription_MaxTestSuite_test_max_infeasible() : CxxTest::RealTestDescription( Tests_MaxTestSuite, suiteDescription_MaxTestSuite, 34, "test_max_infeasible" ) {}
 void runTest() { suite_MaxTestSuite.test_max_infeasible(); }
} testDescription_MaxTestSuite_test_max_infeasible;

static class TestDescription_MaxTestSuite_test_max_fesible : public CxxTest::RealTestDescription {
public:
 TestDescription_MaxTestSuite_test_max_fesible() : CxxTest::RealTestDescription( Tests_MaxTestSuite, suiteDescription_MaxTestSuite, 107, "test_max_fesible" ) {}
 void runTest() { suite_MaxTestSuite.test_max_fesible(); }
} testDescription_MaxTestSuite_test_max_fesible;

#include <cxxtest/Root.cpp>
