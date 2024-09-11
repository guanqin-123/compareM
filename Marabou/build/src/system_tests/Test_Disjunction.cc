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
#include "/home/guanqin/compareM/Marabou/src/system_tests/Test_Disjunction.h"

static DisjunctionTestSuite suite_DisjunctionTestSuite;

static CxxTest::List Tests_DisjunctionTestSuite = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_DisjunctionTestSuite( "/home/guanqin/compareM/Marabou/src/system_tests/Test_Disjunction.h", 23, "DisjunctionTestSuite", suite_DisjunctionTestSuite, Tests_DisjunctionTestSuite );

static class TestDescription_DisjunctionTestSuite_test_disjunction_1 : public CxxTest::RealTestDescription {
public:
 TestDescription_DisjunctionTestSuite_test_disjunction_1() : CxxTest::RealTestDescription( Tests_DisjunctionTestSuite, suiteDescription_DisjunctionTestSuite, 34, "test_disjunction_1" ) {}
 void runTest() { suite_DisjunctionTestSuite.test_disjunction_1(); }
} testDescription_DisjunctionTestSuite_test_disjunction_1;

static class TestDescription_DisjunctionTestSuite_test_disjunction_2 : public CxxTest::RealTestDescription {
public:
 TestDescription_DisjunctionTestSuite_test_disjunction_2() : CxxTest::RealTestDescription( Tests_DisjunctionTestSuite, suiteDescription_DisjunctionTestSuite, 180, "test_disjunction_2" ) {}
 void runTest() { suite_DisjunctionTestSuite.test_disjunction_2(); }
} testDescription_DisjunctionTestSuite_test_disjunction_2;

#include <cxxtest/Root.cpp>
