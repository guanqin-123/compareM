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
#include "/home/guanqin/compareM/Marabou/src/system_tests/Test_AbsoluteValue.h"

static AbsoluteValueTestSuite suite_AbsoluteValueTestSuite;

static CxxTest::List Tests_AbsoluteValueTestSuite = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_AbsoluteValueTestSuite( "/home/guanqin/compareM/Marabou/src/system_tests/Test_AbsoluteValue.h", 24, "AbsoluteValueTestSuite", suite_AbsoluteValueTestSuite, Tests_AbsoluteValueTestSuite );

static class TestDescription_AbsoluteValueTestSuite_test_absoluate_value_unsat : public CxxTest::RealTestDescription {
public:
 TestDescription_AbsoluteValueTestSuite_test_absoluate_value_unsat() : CxxTest::RealTestDescription( Tests_AbsoluteValueTestSuite, suiteDescription_AbsoluteValueTestSuite, 35, "test_absoluate_value_unsat" ) {}
 void runTest() { suite_AbsoluteValueTestSuite.test_absoluate_value_unsat(); }
} testDescription_AbsoluteValueTestSuite_test_absoluate_value_unsat;

static class TestDescription_AbsoluteValueTestSuite_test_absoluate_value_sat : public CxxTest::RealTestDescription {
public:
 TestDescription_AbsoluteValueTestSuite_test_absoluate_value_sat() : CxxTest::RealTestDescription( Tests_AbsoluteValueTestSuite, suiteDescription_AbsoluteValueTestSuite, 81, "test_absoluate_value_sat" ) {}
 void runTest() { suite_AbsoluteValueTestSuite.test_absoluate_value_sat(); }
} testDescription_AbsoluteValueTestSuite_test_absoluate_value_sat;

static class TestDescription_AbsoluteValueTestSuite_test_absoluate_value_on_acas : public CxxTest::RealTestDescription {
public:
 TestDescription_AbsoluteValueTestSuite_test_absoluate_value_on_acas() : CxxTest::RealTestDescription( Tests_AbsoluteValueTestSuite, suiteDescription_AbsoluteValueTestSuite, 142, "test_absoluate_value_on_acas" ) {}
 void runTest() { suite_AbsoluteValueTestSuite.test_absoluate_value_on_acas(); }
} testDescription_AbsoluteValueTestSuite_test_absoluate_value_on_acas;

#include <cxxtest/Root.cpp>
