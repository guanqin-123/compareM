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
#include "/home/guanqin/compareM/Marabou/src/engine/tests/Test_CostFunctionManager.h"

static CostFunctionManagerTestSuite suite_CostFunctionManagerTestSuite;

static CxxTest::List Tests_CostFunctionManagerTestSuite = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_CostFunctionManagerTestSuite( "/home/guanqin/compareM/Marabou/src/engine/tests/Test_CostFunctionManager.h", 30, "CostFunctionManagerTestSuite", suite_CostFunctionManagerTestSuite, Tests_CostFunctionManagerTestSuite );

static class TestDescription_CostFunctionManagerTestSuite_test_constructor : public CxxTest::RealTestDescription {
public:
 TestDescription_CostFunctionManagerTestSuite_test_constructor() : CxxTest::RealTestDescription( Tests_CostFunctionManagerTestSuite, suiteDescription_CostFunctionManagerTestSuite, 45, "test_constructor" ) {}
 void runTest() { suite_CostFunctionManagerTestSuite.test_constructor(); }
} testDescription_CostFunctionManagerTestSuite_test_constructor;

static class TestDescription_CostFunctionManagerTestSuite_test_compute_core_cost_function : public CxxTest::RealTestDescription {
public:
 TestDescription_CostFunctionManagerTestSuite_test_compute_core_cost_function() : CxxTest::RealTestDescription( Tests_CostFunctionManagerTestSuite, suiteDescription_CostFunctionManagerTestSuite, 57, "test_compute_core_cost_function" ) {}
 void runTest() { suite_CostFunctionManagerTestSuite.test_compute_core_cost_function(); }
} testDescription_CostFunctionManagerTestSuite_test_compute_core_cost_function;

static class TestDescription_CostFunctionManagerTestSuite_test_compute_cost_function : public CxxTest::RealTestDescription {
public:
 TestDescription_CostFunctionManagerTestSuite_test_compute_cost_function() : CxxTest::RealTestDescription( Tests_CostFunctionManagerTestSuite, suiteDescription_CostFunctionManagerTestSuite, 117, "test_compute_cost_function" ) {}
 void runTest() { suite_CostFunctionManagerTestSuite.test_compute_cost_function(); }
} testDescription_CostFunctionManagerTestSuite_test_compute_cost_function;

static class TestDescription_CostFunctionManagerTestSuite_test_compute_given_cost_function : public CxxTest::RealTestDescription {
public:
 TestDescription_CostFunctionManagerTestSuite_test_compute_given_cost_function() : CxxTest::RealTestDescription( Tests_CostFunctionManagerTestSuite, suiteDescription_CostFunctionManagerTestSuite, 186, "test_compute_given_cost_function" ) {}
 void runTest() { suite_CostFunctionManagerTestSuite.test_compute_given_cost_function(); }
} testDescription_CostFunctionManagerTestSuite_test_compute_given_cost_function;

#include <cxxtest/Root.cpp>
