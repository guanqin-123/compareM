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
#include "/home/guanqin/compareM/Marabou/src/system_tests/Test_lp.h"

static LpTestSuite suite_LpTestSuite;

static CxxTest::List Tests_LpTestSuite = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_LpTestSuite( "/home/guanqin/compareM/Marabou/src/system_tests/Test_lp.h", 23, "LpTestSuite", suite_LpTestSuite, Tests_LpTestSuite );

static class TestDescription_LpTestSuite_test_optimize_for_heuristic_cost : public CxxTest::RealTestDescription {
public:
 TestDescription_LpTestSuite_test_optimize_for_heuristic_cost() : CxxTest::RealTestDescription( Tests_LpTestSuite, suiteDescription_LpTestSuite, 34, "test_optimize_for_heuristic_cost" ) {}
 void runTest() { suite_LpTestSuite.test_optimize_for_heuristic_cost(); }
} testDescription_LpTestSuite_test_optimize_for_heuristic_cost;

static class TestDescription_LpTestSuite_test_fesiablbe : public CxxTest::RealTestDescription {
public:
 TestDescription_LpTestSuite_test_fesiablbe() : CxxTest::RealTestDescription( Tests_LpTestSuite, suiteDescription_LpTestSuite, 111, "test_fesiablbe" ) {}
 void runTest() { suite_LpTestSuite.test_fesiablbe(); }
} testDescription_LpTestSuite_test_fesiablbe;

static class TestDescription_LpTestSuite_test_infesiable : public CxxTest::RealTestDescription {
public:
 TestDescription_LpTestSuite_test_infesiable() : CxxTest::RealTestDescription( Tests_LpTestSuite, suiteDescription_LpTestSuite, 167, "test_infesiable" ) {}
 void runTest() { suite_LpTestSuite.test_infesiable(); }
} testDescription_LpTestSuite_test_infesiable;

#include <cxxtest/Root.cpp>
