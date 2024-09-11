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
#include "/home/guanqin/compareM/Marabou/src/engine/tests/Test_InputQuery.h"

static InputQueryTestSuite suite_InputQueryTestSuite;

static CxxTest::List Tests_InputQueryTestSuite = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_InputQueryTestSuite( "/home/guanqin/compareM/Marabou/src/engine/tests/Test_InputQuery.h", 32, "InputQueryTestSuite", suite_InputQueryTestSuite, Tests_InputQueryTestSuite );

static class TestDescription_InputQueryTestSuite_test_push_and_pop : public CxxTest::RealTestDescription {
public:
 TestDescription_InputQueryTestSuite_test_push_and_pop() : CxxTest::RealTestDescription( Tests_InputQueryTestSuite, suiteDescription_InputQueryTestSuite, 47, "test_push_and_pop" ) {}
 void runTest() { suite_InputQueryTestSuite.test_push_and_pop(); }
} testDescription_InputQueryTestSuite_test_push_and_pop;

static class TestDescription_InputQueryTestSuite_test_set_and_get_new_variable : public CxxTest::RealTestDescription {
public:
 TestDescription_InputQueryTestSuite_test_set_and_get_new_variable() : CxxTest::RealTestDescription( Tests_InputQueryTestSuite, suiteDescription_InputQueryTestSuite, 63, "test_set_and_get_new_variable" ) {}
 void runTest() { suite_InputQueryTestSuite.test_set_and_get_new_variable(); }
} testDescription_InputQueryTestSuite_test_set_and_get_new_variable;

static class TestDescription_InputQueryTestSuite_test_set_and_tighten_bounds : public CxxTest::RealTestDescription {
public:
 TestDescription_InputQueryTestSuite_test_set_and_tighten_bounds() : CxxTest::RealTestDescription( Tests_InputQueryTestSuite, suiteDescription_InputQueryTestSuite, 81, "test_set_and_tighten_bounds" ) {}
 void runTest() { suite_InputQueryTestSuite.test_set_and_tighten_bounds(); }
} testDescription_InputQueryTestSuite_test_set_and_tighten_bounds;

static class TestDescription_InputQueryTestSuite_test_generate_query : public CxxTest::RealTestDescription {
public:
 TestDescription_InputQueryTestSuite_test_generate_query() : CxxTest::RealTestDescription( Tests_InputQueryTestSuite, suiteDescription_InputQueryTestSuite, 205, "test_generate_query" ) {}
 void runTest() { suite_InputQueryTestSuite.test_generate_query(); }
} testDescription_InputQueryTestSuite_test_generate_query;

#include <cxxtest/Root.cpp>
