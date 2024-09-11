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
#include "/home/guanqin/compareM/Marabou/src/engine/tests/Test_SoftmaxConstraint.h"

static MaxConstraintTestSuite suite_MaxConstraintTestSuite;

static CxxTest::List Tests_MaxConstraintTestSuite = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_MaxConstraintTestSuite( "/home/guanqin/compareM/Marabou/src/engine/tests/Test_SoftmaxConstraint.h", 32, "MaxConstraintTestSuite", suite_MaxConstraintTestSuite, Tests_MaxConstraintTestSuite );

static class TestDescription_MaxConstraintTestSuite_test_evaluation : public CxxTest::RealTestDescription {
public:
 TestDescription_MaxConstraintTestSuite_test_evaluation() : CxxTest::RealTestDescription( Tests_MaxConstraintTestSuite, suiteDescription_MaxConstraintTestSuite, 43, "test_evaluation" ) {}
 void runTest() { suite_MaxConstraintTestSuite.test_evaluation(); }
} testDescription_MaxConstraintTestSuite_test_evaluation;

static class TestDescription_MaxConstraintTestSuite_test_tighten_bounds : public CxxTest::RealTestDescription {
public:
 TestDescription_MaxConstraintTestSuite_test_tighten_bounds() : CxxTest::RealTestDescription( Tests_MaxConstraintTestSuite, suiteDescription_MaxConstraintTestSuite, 56, "test_tighten_bounds" ) {}
 void runTest() { suite_MaxConstraintTestSuite.test_tighten_bounds(); }
} testDescription_MaxConstraintTestSuite_test_tighten_bounds;

static class TestDescription_MaxConstraintTestSuite_test_softmax_satisfied : public CxxTest::RealTestDescription {
public:
 TestDescription_MaxConstraintTestSuite_test_softmax_satisfied() : CxxTest::RealTestDescription( Tests_MaxConstraintTestSuite, suiteDescription_MaxConstraintTestSuite, 96, "test_softmax_satisfied" ) {}
 void runTest() { suite_MaxConstraintTestSuite.test_softmax_satisfied(); }
} testDescription_MaxConstraintTestSuite_test_softmax_satisfied;

#include <cxxtest/Root.cpp>
