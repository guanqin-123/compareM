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
#include "/home/guanqin/compareM/Marabou/src/system_tests/Test_acas.h"

static AcasTestSuite suite_AcasTestSuite;

static CxxTest::List Tests_AcasTestSuite = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_AcasTestSuite( "/home/guanqin/compareM/Marabou/src/system_tests/Test_acas.h", 26, "AcasTestSuite", suite_AcasTestSuite, Tests_AcasTestSuite );

static class TestDescription_AcasTestSuite_test_acas_1_1 : public CxxTest::RealTestDescription {
public:
 TestDescription_AcasTestSuite_test_acas_1_1() : CxxTest::RealTestDescription( Tests_AcasTestSuite, suiteDescription_AcasTestSuite, 37, "test_acas_1_1" ) {}
 void runTest() { suite_AcasTestSuite.test_acas_1_1(); }
} testDescription_AcasTestSuite_test_acas_1_1;

static class TestDescription_AcasTestSuite_test_acas_2_2_fixed_input : public CxxTest::RealTestDescription {
public:
 TestDescription_AcasTestSuite_test_acas_2_2_fixed_input() : CxxTest::RealTestDescription( Tests_AcasTestSuite, suiteDescription_AcasTestSuite, 73, "test_acas_2_2_fixed_input" ) {}
 void runTest() { suite_AcasTestSuite.test_acas_2_2_fixed_input(); }
} testDescription_AcasTestSuite_test_acas_2_2_fixed_input;

static class TestDescription_AcasTestSuite_test_acas_1_1_fixed_input : public CxxTest::RealTestDescription {
public:
 TestDescription_AcasTestSuite_test_acas_1_1_fixed_input() : CxxTest::RealTestDescription( Tests_AcasTestSuite, suiteDescription_AcasTestSuite, 118, "test_acas_1_1_fixed_input" ) {}
 void runTest() { suite_AcasTestSuite.test_acas_1_1_fixed_input(); }
} testDescription_AcasTestSuite_test_acas_1_1_fixed_input;

#include <cxxtest/Root.cpp>
