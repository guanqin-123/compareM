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
#include "/home/guanqin/compareM/Marabou/src/engine/tests/Test_BoundManager.h"

static BoundManagerTestSuite suite_BoundManagerTestSuite;

static CxxTest::List Tests_BoundManagerTestSuite = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_BoundManagerTestSuite( "/home/guanqin/compareM/Marabou/src/engine/tests/Test_BoundManager.h", 29, "BoundManagerTestSuite", suite_BoundManagerTestSuite, Tests_BoundManagerTestSuite );

static class TestDescription_BoundManagerTestSuite_test_bound_manager_initialize : public CxxTest::RealTestDescription {
public:
 TestDescription_BoundManagerTestSuite_test_bound_manager_initialize() : CxxTest::RealTestDescription( Tests_BoundManagerTestSuite, suiteDescription_BoundManagerTestSuite, 48, "test_bound_manager_initialize" ) {}
 void runTest() { suite_BoundManagerTestSuite.test_bound_manager_initialize(); }
} testDescription_BoundManagerTestSuite_test_bound_manager_initialize;

static class TestDescription_BoundManagerTestSuite_test_register_variable : public CxxTest::RealTestDescription {
public:
 TestDescription_BoundManagerTestSuite_test_register_variable() : CxxTest::RealTestDescription( Tests_BoundManagerTestSuite, suiteDescription_BoundManagerTestSuite, 68, "test_register_variable" ) {}
 void runTest() { suite_BoundManagerTestSuite.test_register_variable(); }
} testDescription_BoundManagerTestSuite_test_register_variable;

static class TestDescription_BoundManagerTestSuite_test_consistent_bounds : public CxxTest::RealTestDescription {
public:
 TestDescription_BoundManagerTestSuite_test_consistent_bounds() : CxxTest::RealTestDescription( Tests_BoundManagerTestSuite, suiteDescription_BoundManagerTestSuite, 95, "test_consistent_bounds" ) {}
 void runTest() { suite_BoundManagerTestSuite.test_consistent_bounds(); }
} testDescription_BoundManagerTestSuite_test_consistent_bounds;

static class TestDescription_BoundManagerTestSuite_test_get_tightenings : public CxxTest::RealTestDescription {
public:
 TestDescription_BoundManagerTestSuite_test_get_tightenings() : CxxTest::RealTestDescription( Tests_BoundManagerTestSuite, suiteDescription_BoundManagerTestSuite, 116, "test_get_tightenings" ) {}
 void runTest() { suite_BoundManagerTestSuite.test_get_tightenings(); }
} testDescription_BoundManagerTestSuite_test_get_tightenings;

static class TestDescription_BoundManagerTestSuite_test_bound_manager_context_interaction : public CxxTest::RealTestDescription {
public:
 TestDescription_BoundManagerTestSuite_test_bound_manager_context_interaction() : CxxTest::RealTestDescription( Tests_BoundManagerTestSuite, suiteDescription_BoundManagerTestSuite, 153, "test_bound_manager_context_interaction" ) {}
 void runTest() { suite_BoundManagerTestSuite.test_bound_manager_context_interaction(); }
} testDescription_BoundManagerTestSuite_test_bound_manager_context_interaction;

static class TestDescription_BoundManagerTestSuite_test_bound_manager_and_explainer : public CxxTest::RealTestDescription {
public:
 TestDescription_BoundManagerTestSuite_test_bound_manager_and_explainer() : CxxTest::RealTestDescription( Tests_BoundManagerTestSuite, suiteDescription_BoundManagerTestSuite, 255, "test_bound_manager_and_explainer" ) {}
 void runTest() { suite_BoundManagerTestSuite.test_bound_manager_and_explainer(); }
} testDescription_BoundManagerTestSuite_test_bound_manager_and_explainer;

#include <cxxtest/Root.cpp>
