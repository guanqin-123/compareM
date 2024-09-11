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
#include "/home/guanqin/compareM/Marabou/src/engine/tests/Test_Query.h"

static QueryTestSuite suite_QueryTestSuite;

static CxxTest::List Tests_QueryTestSuite = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_QueryTestSuite( "/home/guanqin/compareM/Marabou/src/engine/tests/Test_Query.h", 36, "QueryTestSuite", suite_QueryTestSuite, Tests_QueryTestSuite );

static class TestDescription_QueryTestSuite_test_get_new_variable : public CxxTest::RealTestDescription {
public:
 TestDescription_QueryTestSuite_test_get_new_variable() : CxxTest::RealTestDescription( Tests_QueryTestSuite, suiteDescription_QueryTestSuite, 54, "test_get_new_variable" ) {}
 void runTest() { suite_QueryTestSuite.test_get_new_variable(); }
} testDescription_QueryTestSuite_test_get_new_variable;

static class TestDescription_QueryTestSuite_test_lower_bounds : public CxxTest::RealTestDescription {
public:
 TestDescription_QueryTestSuite_test_lower_bounds() : CxxTest::RealTestDescription( Tests_QueryTestSuite, suiteDescription_QueryTestSuite, 65, "test_lower_bounds" ) {}
 void runTest() { suite_QueryTestSuite.test_lower_bounds(); }
} testDescription_QueryTestSuite_test_lower_bounds;

static class TestDescription_QueryTestSuite_test_upper_bounds : public CxxTest::RealTestDescription {
public:
 TestDescription_QueryTestSuite_test_upper_bounds() : CxxTest::RealTestDescription( Tests_QueryTestSuite, suiteDescription_QueryTestSuite, 91, "test_upper_bounds" ) {}
 void runTest() { suite_QueryTestSuite.test_upper_bounds(); }
} testDescription_QueryTestSuite_test_upper_bounds;

static class TestDescription_QueryTestSuite_test_equality_operator : public CxxTest::RealTestDescription {
public:
 TestDescription_QueryTestSuite_test_equality_operator() : CxxTest::RealTestDescription( Tests_QueryTestSuite, suiteDescription_QueryTestSuite, 117, "test_equality_operator" ) {}
 void runTest() { suite_QueryTestSuite.test_equality_operator(); }
} testDescription_QueryTestSuite_test_equality_operator;

static class TestDescription_QueryTestSuite_test_equality_operator_with_sigmoid : public CxxTest::RealTestDescription {
public:
 TestDescription_QueryTestSuite_test_equality_operator_with_sigmoid() : CxxTest::RealTestDescription( Tests_QueryTestSuite, suiteDescription_QueryTestSuite, 163, "test_equality_operator_with_sigmoid" ) {}
 void runTest() { suite_QueryTestSuite.test_equality_operator_with_sigmoid(); }
} testDescription_QueryTestSuite_test_equality_operator_with_sigmoid;

static class TestDescription_QueryTestSuite_test_infinite_bounds : public CxxTest::RealTestDescription {
public:
 TestDescription_QueryTestSuite_test_infinite_bounds() : CxxTest::RealTestDescription( Tests_QueryTestSuite, suiteDescription_QueryTestSuite, 219, "test_infinite_bounds" ) {}
 void runTest() { suite_QueryTestSuite.test_infinite_bounds(); }
} testDescription_QueryTestSuite_test_infinite_bounds;

static class TestDescription_QueryTestSuite_test_save_query : public CxxTest::RealTestDescription {
public:
 TestDescription_QueryTestSuite_test_save_query() : CxxTest::RealTestDescription( Tests_QueryTestSuite, suiteDescription_QueryTestSuite, 233, "test_save_query" ) {}
 void runTest() { suite_QueryTestSuite.test_save_query(); }
} testDescription_QueryTestSuite_test_save_query;

static class TestDescription_QueryTestSuite_test_construct_leaky_relu_nlr : public CxxTest::RealTestDescription {
public:
 TestDescription_QueryTestSuite_test_construct_leaky_relu_nlr() : CxxTest::RealTestDescription( Tests_QueryTestSuite, suiteDescription_QueryTestSuite, 253, "test_construct_leaky_relu_nlr" ) {}
 void runTest() { suite_QueryTestSuite.test_construct_leaky_relu_nlr(); }
} testDescription_QueryTestSuite_test_construct_leaky_relu_nlr;

#include <cxxtest/Root.cpp>
