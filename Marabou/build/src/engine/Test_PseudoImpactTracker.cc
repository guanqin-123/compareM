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
#include "/home/guanqin/compareM/Marabou/src/engine/tests/Test_PseudoImpactTracker.h"

static PseudoImpactTrackerTestSuite suite_PseudoImpactTrackerTestSuite;

static CxxTest::List Tests_PseudoImpactTrackerTestSuite = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_PseudoImpactTrackerTestSuite( "/home/guanqin/compareM/Marabou/src/engine/tests/Test_PseudoImpactTracker.h", 25, "PseudoImpactTrackerTestSuite", suite_PseudoImpactTrackerTestSuite, Tests_PseudoImpactTrackerTestSuite );

static class TestDescription_PseudoImpactTrackerTestSuite_test_updateScore : public CxxTest::RealTestDescription {
public:
 TestDescription_PseudoImpactTrackerTestSuite_test_updateScore() : CxxTest::RealTestDescription( Tests_PseudoImpactTrackerTestSuite, suiteDescription_PseudoImpactTrackerTestSuite, 43, "test_updateScore" ) {}
 void runTest() { suite_PseudoImpactTrackerTestSuite.test_updateScore(); }
} testDescription_PseudoImpactTrackerTestSuite_test_updateScore;

static class TestDescription_PseudoImpactTrackerTestSuite_test_set_score : public CxxTest::RealTestDescription {
public:
 TestDescription_PseudoImpactTrackerTestSuite_test_set_score() : CxxTest::RealTestDescription( Tests_PseudoImpactTrackerTestSuite, suiteDescription_PseudoImpactTrackerTestSuite, 76, "test_set_score" ) {}
 void runTest() { suite_PseudoImpactTrackerTestSuite.test_set_score(); }
} testDescription_PseudoImpactTrackerTestSuite_test_set_score;

#include <cxxtest/Root.cpp>
