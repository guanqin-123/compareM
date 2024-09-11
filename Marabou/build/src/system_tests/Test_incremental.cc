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
#include "/home/guanqin/compareM/Marabou/src/system_tests/Test_incremental.h"

static IncrementalTestSuite suite_IncrementalTestSuite;

static CxxTest::List Tests_IncrementalTestSuite = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_IncrementalTestSuite( "/home/guanqin/compareM/Marabou/src/system_tests/Test_incremental.h", 22, "IncrementalTestSuite", suite_IncrementalTestSuite, Tests_IncrementalTestSuite );

static class TestDescription_IncrementalTestSuite_test_incremental_solving : public CxxTest::RealTestDescription {
public:
 TestDescription_IncrementalTestSuite_test_incremental_solving() : CxxTest::RealTestDescription( Tests_IncrementalTestSuite, suiteDescription_IncrementalTestSuite, 34, "test_incremental_solving" ) {}
 void runTest() { suite_IncrementalTestSuite.test_incremental_solving(); }
} testDescription_IncrementalTestSuite_test_incremental_solving;

#include <cxxtest/Root.cpp>
