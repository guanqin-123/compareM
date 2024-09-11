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
#include "/home/guanqin/compareM/Marabou/src/cegar/tests/Test_IncrementalLinearization.h"

static IncrementalLinearizationTestSuite suite_IncrementalLinearizationTestSuite;

static CxxTest::List Tests_IncrementalLinearizationTestSuite = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_IncrementalLinearizationTestSuite( "/home/guanqin/compareM/Marabou/src/cegar/tests/Test_IncrementalLinearization.h", 28, "IncrementalLinearizationTestSuite", suite_IncrementalLinearizationTestSuite, Tests_IncrementalLinearizationTestSuite );

static class TestDescription_IncrementalLinearizationTestSuite_test_incremental_linearization_sigmoid_sat : public CxxTest::RealTestDescription {
public:
 TestDescription_IncrementalLinearizationTestSuite_test_incremental_linearization_sigmoid_sat() : CxxTest::RealTestDescription( Tests_IncrementalLinearizationTestSuite, suiteDescription_IncrementalLinearizationTestSuite, 144, "test_incremental_linearization_sigmoid_sat" ) {}
 void runTest() { suite_IncrementalLinearizationTestSuite.test_incremental_linearization_sigmoid_sat(); }
} testDescription_IncrementalLinearizationTestSuite_test_incremental_linearization_sigmoid_sat;

#include <cxxtest/Root.cpp>
