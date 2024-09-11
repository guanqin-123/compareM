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
#include "/home/guanqin/compareM/Marabou/src/engine/tests/Test_PolarityBasedDivider.h"

static PolarityBasedDividerTestSuite suite_PolarityBasedDividerTestSuite;

static CxxTest::List Tests_PolarityBasedDividerTestSuite = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_PolarityBasedDividerTestSuite( "/home/guanqin/compareM/Marabou/src/engine/tests/Test_PolarityBasedDivider.h", 28, "PolarityBasedDividerTestSuite", suite_PolarityBasedDividerTestSuite, Tests_PolarityBasedDividerTestSuite );

static class TestDescription_PolarityBasedDividerTestSuite_test_create_subqueries : public CxxTest::RealTestDescription {
public:
 TestDescription_PolarityBasedDividerTestSuite_test_create_subqueries() : CxxTest::RealTestDescription( Tests_PolarityBasedDividerTestSuite, suiteDescription_PolarityBasedDividerTestSuite, 46, "test_create_subqueries" ) {}
 void runTest() { suite_PolarityBasedDividerTestSuite.test_create_subqueries(); }
} testDescription_PolarityBasedDividerTestSuite_test_create_subqueries;

#include <cxxtest/Root.cpp>
