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
#include "/home/guanqin/compareM/Marabou/src/nlr/tests/Test_ParallelSolver.h"

static NetworkLevelReasonerTestSuite suite_NetworkLevelReasonerTestSuite;

static CxxTest::List Tests_NetworkLevelReasonerTestSuite = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_NetworkLevelReasonerTestSuite( "/home/guanqin/compareM/Marabou/src/nlr/tests/Test_ParallelSolver.h", 28, "NetworkLevelReasonerTestSuite", suite_NetworkLevelReasonerTestSuite, Tests_NetworkLevelReasonerTestSuite );

static class TestDescription_NetworkLevelReasonerTestSuite_test_enqueueSolver : public CxxTest::RealTestDescription {
public:
 TestDescription_NetworkLevelReasonerTestSuite_test_enqueueSolver() : CxxTest::RealTestDescription( Tests_NetworkLevelReasonerTestSuite, suiteDescription_NetworkLevelReasonerTestSuite, 39, "test_enqueueSolver" ) {}
 void runTest() { suite_NetworkLevelReasonerTestSuite.test_enqueueSolver(); }
} testDescription_NetworkLevelReasonerTestSuite_test_enqueueSolver;

static class TestDescription_NetworkLevelReasonerTestSuite_test_clear_solver_queue : public CxxTest::RealTestDescription {
public:
 TestDescription_NetworkLevelReasonerTestSuite_test_clear_solver_queue() : CxxTest::RealTestDescription( Tests_NetworkLevelReasonerTestSuite, suiteDescription_NetworkLevelReasonerTestSuite, 54, "test_clear_solver_queue" ) {}
 void runTest() { suite_NetworkLevelReasonerTestSuite.test_clear_solver_queue(); }
} testDescription_NetworkLevelReasonerTestSuite_test_clear_solver_queue;

#include <cxxtest/Root.cpp>
