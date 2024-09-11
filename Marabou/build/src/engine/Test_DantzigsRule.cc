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
#include "/home/guanqin/compareM/Marabou/src/engine/tests/Test_DantzigsRule.h"

static DantzigsRuleTestSuite suite_DantzigsRuleTestSuite;

static CxxTest::List Tests_DantzigsRuleTestSuite = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_DantzigsRuleTestSuite( "/home/guanqin/compareM/Marabou/src/engine/tests/Test_DantzigsRule.h", 28, "DantzigsRuleTestSuite", suite_DantzigsRuleTestSuite, Tests_DantzigsRuleTestSuite );

static class TestDescription_DantzigsRuleTestSuite_test_select : public CxxTest::RealTestDescription {
public:
 TestDescription_DantzigsRuleTestSuite_test_select() : CxxTest::RealTestDescription( Tests_DantzigsRuleTestSuite, suiteDescription_DantzigsRuleTestSuite, 46, "test_select" ) {}
 void runTest() { suite_DantzigsRuleTestSuite.test_select(); }
} testDescription_DantzigsRuleTestSuite_test_select;

#include <cxxtest/Root.cpp>
