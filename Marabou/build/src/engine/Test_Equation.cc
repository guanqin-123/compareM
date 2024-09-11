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
#include "/home/guanqin/compareM/Marabou/src/engine/tests/Test_Equation.h"

static EquationTestSuite suite_EquationTestSuite;

static CxxTest::List Tests_EquationTestSuite = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_EquationTestSuite( "/home/guanqin/compareM/Marabou/src/engine/tests/Test_Equation.h", 20, "EquationTestSuite", suite_EquationTestSuite, Tests_EquationTestSuite );

static class TestDescription_EquationTestSuite_test_remove_redundant_addends : public CxxTest::RealTestDescription {
public:
 TestDescription_EquationTestSuite_test_remove_redundant_addends() : CxxTest::RealTestDescription( Tests_EquationTestSuite, suiteDescription_EquationTestSuite, 23, "test_remove_redundant_addends" ) {}
 void runTest() { suite_EquationTestSuite.test_remove_redundant_addends(); }
} testDescription_EquationTestSuite_test_remove_redundant_addends;

#include <cxxtest/Root.cpp>
