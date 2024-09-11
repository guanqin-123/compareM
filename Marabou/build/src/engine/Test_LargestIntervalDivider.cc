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
#include "/home/guanqin/compareM/Marabou/src/engine/tests/Test_LargestIntervalDivider.h"

static LargestIntervalDividerTestSuite suite_LargestIntervalDividerTestSuite;

static CxxTest::List Tests_LargestIntervalDividerTestSuite = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_LargestIntervalDividerTestSuite( "/home/guanqin/compareM/Marabou/src/engine/tests/Test_LargestIntervalDivider.h", 24, "LargestIntervalDividerTestSuite", suite_LargestIntervalDividerTestSuite, Tests_LargestIntervalDividerTestSuite );

static class TestDescription_LargestIntervalDividerTestSuite_test_create_subqueries : public CxxTest::RealTestDescription {
public:
 TestDescription_LargestIntervalDividerTestSuite_test_create_subqueries() : CxxTest::RealTestDescription( Tests_LargestIntervalDividerTestSuite, suiteDescription_LargestIntervalDividerTestSuite, 49, "test_create_subqueries" ) {}
 void runTest() { suite_LargestIntervalDividerTestSuite.test_create_subqueries(); }
} testDescription_LargestIntervalDividerTestSuite_test_create_subqueries;

#include <cxxtest/Root.cpp>
