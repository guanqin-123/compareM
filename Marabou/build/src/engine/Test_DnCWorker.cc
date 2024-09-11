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
#include "/home/guanqin/compareM/Marabou/src/engine/tests/Test_DnCWorker.h"

static DnCWorkerTestSuite suite_DnCWorkerTestSuite;

static CxxTest::List Tests_DnCWorkerTestSuite = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_DnCWorkerTestSuite( "/home/guanqin/compareM/Marabou/src/engine/tests/Test_DnCWorker.h", 22, "DnCWorkerTestSuite", suite_DnCWorkerTestSuite, Tests_DnCWorkerTestSuite );

static class TestDescription_DnCWorkerTestSuite_test_pop_one_sub_query_and_solve : public CxxTest::RealTestDescription {
public:
 TestDescription_DnCWorkerTestSuite_test_pop_one_sub_query_and_solve() : CxxTest::RealTestDescription( Tests_DnCWorkerTestSuite, suiteDescription_DnCWorkerTestSuite, 101, "test_pop_one_sub_query_and_solve" ) {}
 void runTest() { suite_DnCWorkerTestSuite.test_pop_one_sub_query_and_solve(); }
} testDescription_DnCWorkerTestSuite_test_pop_one_sub_query_and_solve;

#include <cxxtest/Root.cpp>
