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
#include "/home/guanqin/compareM/Marabou/src/nlr/tests/Test_WsLayerElimination.h"

static NetworkLevelReasonerTestSuite suite_NetworkLevelReasonerTestSuite;

static CxxTest::List Tests_NetworkLevelReasonerTestSuite = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_NetworkLevelReasonerTestSuite( "/home/guanqin/compareM/Marabou/src/nlr/tests/Test_WsLayerElimination.h", 30, "NetworkLevelReasonerTestSuite", suite_NetworkLevelReasonerTestSuite, Tests_NetworkLevelReasonerTestSuite );

static class TestDescription_NetworkLevelReasonerTestSuite_test_no_elimination : public CxxTest::RealTestDescription {
public:
 TestDescription_NetworkLevelReasonerTestSuite_test_no_elimination() : CxxTest::RealTestDescription( Tests_NetworkLevelReasonerTestSuite, suiteDescription_NetworkLevelReasonerTestSuite, 118, "test_no_elimination" ) {}
 void runTest() { suite_NetworkLevelReasonerTestSuite.test_no_elimination(); }
} testDescription_NetworkLevelReasonerTestSuite_test_no_elimination;

static class TestDescription_NetworkLevelReasonerTestSuite_test_eliminate_one_pair : public CxxTest::RealTestDescription {
public:
 TestDescription_NetworkLevelReasonerTestSuite_test_eliminate_one_pair() : CxxTest::RealTestDescription( Tests_NetworkLevelReasonerTestSuite, suiteDescription_NetworkLevelReasonerTestSuite, 322, "test_eliminate_one_pair" ) {}
 void runTest() { suite_NetworkLevelReasonerTestSuite.test_eliminate_one_pair(); }
} testDescription_NetworkLevelReasonerTestSuite_test_eliminate_one_pair;

static class TestDescription_NetworkLevelReasonerTestSuite_test_eliminate_one_pair_with_many_inputs : public CxxTest::RealTestDescription {
public:
 TestDescription_NetworkLevelReasonerTestSuite_test_eliminate_one_pair_with_many_inputs() : CxxTest::RealTestDescription( Tests_NetworkLevelReasonerTestSuite, suiteDescription_NetworkLevelReasonerTestSuite, 604, "test_eliminate_one_pair_with_many_inputs" ) {}
 void runTest() { suite_NetworkLevelReasonerTestSuite.test_eliminate_one_pair_with_many_inputs(); }
} testDescription_NetworkLevelReasonerTestSuite_test_eliminate_one_pair_with_many_inputs;

static class TestDescription_NetworkLevelReasonerTestSuite_test_eliminate_two_pairs1 : public CxxTest::RealTestDescription {
public:
 TestDescription_NetworkLevelReasonerTestSuite_test_eliminate_two_pairs1() : CxxTest::RealTestDescription( Tests_NetworkLevelReasonerTestSuite, suiteDescription_NetworkLevelReasonerTestSuite, 835, "test_eliminate_two_pairs1" ) {}
 void runTest() { suite_NetworkLevelReasonerTestSuite.test_eliminate_two_pairs1(); }
} testDescription_NetworkLevelReasonerTestSuite_test_eliminate_two_pairs1;

static class TestDescription_NetworkLevelReasonerTestSuite_test_eliminate_two_pairs2 : public CxxTest::RealTestDescription {
public:
 TestDescription_NetworkLevelReasonerTestSuite_test_eliminate_two_pairs2() : CxxTest::RealTestDescription( Tests_NetworkLevelReasonerTestSuite, suiteDescription_NetworkLevelReasonerTestSuite, 904, "test_eliminate_two_pairs2" ) {}
 void runTest() { suite_NetworkLevelReasonerTestSuite.test_eliminate_two_pairs2(); }
} testDescription_NetworkLevelReasonerTestSuite_test_eliminate_two_pairs2;

static class TestDescription_NetworkLevelReasonerTestSuite_test_not_eliminate_two_pairs1 : public CxxTest::RealTestDescription {
public:
 TestDescription_NetworkLevelReasonerTestSuite_test_not_eliminate_two_pairs1() : CxxTest::RealTestDescription( Tests_NetworkLevelReasonerTestSuite, suiteDescription_NetworkLevelReasonerTestSuite, 979, "test_not_eliminate_two_pairs1" ) {}
 void runTest() { suite_NetworkLevelReasonerTestSuite.test_not_eliminate_two_pairs1(); }
} testDescription_NetworkLevelReasonerTestSuite_test_not_eliminate_two_pairs1;

static class TestDescription_NetworkLevelReasonerTestSuite_test_not_eliminate_two_pairs2 : public CxxTest::RealTestDescription {
public:
 TestDescription_NetworkLevelReasonerTestSuite_test_not_eliminate_two_pairs2() : CxxTest::RealTestDescription( Tests_NetworkLevelReasonerTestSuite, suiteDescription_NetworkLevelReasonerTestSuite, 1025, "test_not_eliminate_two_pairs2" ) {}
 void runTest() { suite_NetworkLevelReasonerTestSuite.test_not_eliminate_two_pairs2(); }
} testDescription_NetworkLevelReasonerTestSuite_test_not_eliminate_two_pairs2;

#include <cxxtest/Root.cpp>
