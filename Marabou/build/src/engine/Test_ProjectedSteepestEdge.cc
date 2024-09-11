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
#include "/home/guanqin/compareM/Marabou/src/engine/tests/Test_ProjectedSteepestEdge.h"

static ProjectedSteepestEdgeTestSuite suite_ProjectedSteepestEdgeTestSuite;

static CxxTest::List Tests_ProjectedSteepestEdgeTestSuite = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_ProjectedSteepestEdgeTestSuite( "/home/guanqin/compareM/Marabou/src/engine/tests/Test_ProjectedSteepestEdge.h", 26, "ProjectedSteepestEdgeTestSuite", suite_ProjectedSteepestEdgeTestSuite, Tests_ProjectedSteepestEdgeTestSuite );

static class TestDescription_ProjectedSteepestEdgeTestSuite_test_variable_selection : public CxxTest::RealTestDescription {
public:
 TestDescription_ProjectedSteepestEdgeTestSuite_test_variable_selection() : CxxTest::RealTestDescription( Tests_ProjectedSteepestEdgeTestSuite, suiteDescription_ProjectedSteepestEdgeTestSuite, 41, "test_variable_selection" ) {}
 void runTest() { suite_ProjectedSteepestEdgeTestSuite.test_variable_selection(); }
} testDescription_ProjectedSteepestEdgeTestSuite_test_variable_selection;

static class TestDescription_ProjectedSteepestEdgeTestSuite_test_todo : public CxxTest::RealTestDescription {
public:
 TestDescription_ProjectedSteepestEdgeTestSuite_test_todo() : CxxTest::RealTestDescription( Tests_ProjectedSteepestEdgeTestSuite, suiteDescription_ProjectedSteepestEdgeTestSuite, 214, "test_todo" ) {}
 void runTest() { suite_ProjectedSteepestEdgeTestSuite.test_todo(); }
} testDescription_ProjectedSteepestEdgeTestSuite_test_todo;

#include <cxxtest/Root.cpp>
