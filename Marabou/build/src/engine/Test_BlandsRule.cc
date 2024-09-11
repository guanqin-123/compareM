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
#include "/home/guanqin/compareM/Marabou/src/engine/tests/Test_BlandsRule.h"

static BlandsRuleTestSuite suite_BlandsRuleTestSuite;

static CxxTest::List Tests_BlandsRuleTestSuite = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_BlandsRuleTestSuite( "/home/guanqin/compareM/Marabou/src/engine/tests/Test_BlandsRule.h", 28, "BlandsRuleTestSuite", suite_BlandsRuleTestSuite, Tests_BlandsRuleTestSuite );

static class TestDescription_BlandsRuleTestSuite_test_select : public CxxTest::RealTestDescription {
public:
 TestDescription_BlandsRuleTestSuite_test_select() : CxxTest::RealTestDescription( Tests_BlandsRuleTestSuite, suiteDescription_BlandsRuleTestSuite, 46, "test_select" ) {}
 void runTest() { suite_BlandsRuleTestSuite.test_select(); }
} testDescription_BlandsRuleTestSuite_test_select;

#include <cxxtest/Root.cpp>
