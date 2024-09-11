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
#include "/home/guanqin/compareM/Marabou/src/proofs/tests/Test_BoundExplainer.h"

static BoundsExplainerTestSuite suite_BoundsExplainerTestSuite;

static CxxTest::List Tests_BoundsExplainerTestSuite = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_BoundsExplainerTestSuite( "/home/guanqin/compareM/Marabou/src/proofs/tests/Test_BoundExplainer.h", 25, "BoundsExplainerTestSuite", suite_BoundsExplainerTestSuite, Tests_BoundsExplainerTestSuite );

static class TestDescription_BoundsExplainerTestSuite_test_initialization : public CxxTest::RealTestDescription {
public:
 TestDescription_BoundsExplainerTestSuite_test_initialization() : CxxTest::RealTestDescription( Tests_BoundsExplainerTestSuite, suiteDescription_BoundsExplainerTestSuite, 43, "test_initialization" ) {}
 void runTest() { suite_BoundsExplainerTestSuite.test_initialization(); }
} testDescription_BoundsExplainerTestSuite_test_initialization;

static class TestDescription_BoundsExplainerTestSuite_test_set_explanation : public CxxTest::RealTestDescription {
public:
 TestDescription_BoundsExplainerTestSuite_test_set_explanation() : CxxTest::RealTestDescription( Tests_BoundsExplainerTestSuite, suiteDescription_BoundsExplainerTestSuite, 62, "test_set_explanation" ) {}
 void runTest() { suite_BoundsExplainerTestSuite.test_set_explanation(); }
} testDescription_BoundsExplainerTestSuite_test_set_explanation;

static class TestDescription_BoundsExplainerTestSuite_test_variable_addition : public CxxTest::RealTestDescription {
public:
 TestDescription_BoundsExplainerTestSuite_test_variable_addition() : CxxTest::RealTestDescription( Tests_BoundsExplainerTestSuite, suiteDescription_BoundsExplainerTestSuite, 83, "test_variable_addition" ) {}
 void runTest() { suite_BoundsExplainerTestSuite.test_variable_addition(); }
} testDescription_BoundsExplainerTestSuite_test_variable_addition;

static class TestDescription_BoundsExplainerTestSuite_test_explanation_reset : public CxxTest::RealTestDescription {
public:
 TestDescription_BoundsExplainerTestSuite_test_explanation_reset() : CxxTest::RealTestDescription( Tests_BoundsExplainerTestSuite, suiteDescription_BoundsExplainerTestSuite, 114, "test_explanation_reset" ) {}
 void runTest() { suite_BoundsExplainerTestSuite.test_explanation_reset(); }
} testDescription_BoundsExplainerTestSuite_test_explanation_reset;

static class TestDescription_BoundsExplainerTestSuite_test_explanation_updates : public CxxTest::RealTestDescription {
public:
 TestDescription_BoundsExplainerTestSuite_test_explanation_updates() : CxxTest::RealTestDescription( Tests_BoundsExplainerTestSuite, suiteDescription_BoundsExplainerTestSuite, 130, "test_explanation_updates" ) {}
 void runTest() { suite_BoundsExplainerTestSuite.test_explanation_updates(); }
} testDescription_BoundsExplainerTestSuite_test_explanation_updates;

#include <cxxtest/Root.cpp>
