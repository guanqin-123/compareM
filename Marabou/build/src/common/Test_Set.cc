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
#include "/home/guanqin/compareM/Marabou/src/common/tests/Test_Set.h"

static SetTestSuite suite_SetTestSuite;

static CxxTest::List Tests_SetTestSuite = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_SetTestSuite( "/home/guanqin/compareM/Marabou/src/common/tests/Test_Set.h", 42, "SetTestSuite", suite_SetTestSuite, Tests_SetTestSuite );

static class TestDescription_SetTestSuite_test_initializer_list : public CxxTest::RealTestDescription {
public:
 TestDescription_SetTestSuite_test_initializer_list() : CxxTest::RealTestDescription( Tests_SetTestSuite, suiteDescription_SetTestSuite, 57, "test_initializer_list" ) {}
 void runTest() { suite_SetTestSuite.test_initializer_list(); }
} testDescription_SetTestSuite_test_initializer_list;

static class TestDescription_SetTestSuite_test_insert : public CxxTest::RealTestDescription {
public:
 TestDescription_SetTestSuite_test_insert() : CxxTest::RealTestDescription( Tests_SetTestSuite, suiteDescription_SetTestSuite, 68, "test_insert" ) {}
 void runTest() { suite_SetTestSuite.test_insert(); }
} testDescription_SetTestSuite_test_insert;

static class TestDescription_SetTestSuite_test_insert_set : public CxxTest::RealTestDescription {
public:
 TestDescription_SetTestSuite_test_insert_set() : CxxTest::RealTestDescription( Tests_SetTestSuite, suiteDescription_SetTestSuite, 91, "test_insert_set" ) {}
 void runTest() { suite_SetTestSuite.test_insert_set(); }
} testDescription_SetTestSuite_test_insert_set;

static class TestDescription_SetTestSuite_test_clear : public CxxTest::RealTestDescription {
public:
 TestDescription_SetTestSuite_test_clear() : CxxTest::RealTestDescription( Tests_SetTestSuite, suiteDescription_SetTestSuite, 124, "test_clear" ) {}
 void runTest() { suite_SetTestSuite.test_clear(); }
} testDescription_SetTestSuite_test_clear;

static class TestDescription_SetTestSuite_test_difference : public CxxTest::RealTestDescription {
public:
 TestDescription_SetTestSuite_test_difference() : CxxTest::RealTestDescription( Tests_SetTestSuite, suiteDescription_SetTestSuite, 145, "test_difference" ) {}
 void runTest() { suite_SetTestSuite.test_difference(); }
} testDescription_SetTestSuite_test_difference;

static class TestDescription_SetTestSuite_test_erase : public CxxTest::RealTestDescription {
public:
 TestDescription_SetTestSuite_test_erase() : CxxTest::RealTestDescription( Tests_SetTestSuite, suiteDescription_SetTestSuite, 169, "test_erase" ) {}
 void runTest() { suite_SetTestSuite.test_erase(); }
} testDescription_SetTestSuite_test_erase;

static class TestDescription_SetTestSuite_test_find : public CxxTest::RealTestDescription {
public:
 TestDescription_SetTestSuite_test_find() : CxxTest::RealTestDescription( Tests_SetTestSuite, suiteDescription_SetTestSuite, 196, "test_find" ) {}
 void runTest() { suite_SetTestSuite.test_find(); }
} testDescription_SetTestSuite_test_find;

static class TestDescription_SetTestSuite_test_operator_plus_equals : public CxxTest::RealTestDescription {
public:
 TestDescription_SetTestSuite_test_operator_plus_equals() : CxxTest::RealTestDescription( Tests_SetTestSuite, suiteDescription_SetTestSuite, 212, "test_operator_plus_equals" ) {}
 void runTest() { suite_SetTestSuite.test_operator_plus_equals(); }
} testDescription_SetTestSuite_test_operator_plus_equals;

static class TestDescription_SetTestSuite_test_operator_plus : public CxxTest::RealTestDescription {
public:
 TestDescription_SetTestSuite_test_operator_plus() : CxxTest::RealTestDescription( Tests_SetTestSuite, suiteDescription_SetTestSuite, 236, "test_operator_plus" ) {}
 void runTest() { suite_SetTestSuite.test_operator_plus(); }
} testDescription_SetTestSuite_test_operator_plus;

static class TestDescription_SetTestSuite_test_intersection : public CxxTest::RealTestDescription {
public:
 TestDescription_SetTestSuite_test_intersection() : CxxTest::RealTestDescription( Tests_SetTestSuite, suiteDescription_SetTestSuite, 265, "test_intersection" ) {}
 void runTest() { suite_SetTestSuite.test_intersection(); }
} testDescription_SetTestSuite_test_intersection;

static class TestDescription_SetTestSuite_test_contained_in : public CxxTest::RealTestDescription {
public:
 TestDescription_SetTestSuite_test_contained_in() : CxxTest::RealTestDescription( Tests_SetTestSuite, suiteDescription_SetTestSuite, 283, "test_contained_in" ) {}
 void runTest() { suite_SetTestSuite.test_contained_in(); }
} testDescription_SetTestSuite_test_contained_in;

static class TestDescription_SetTestSuite_test_get_random_element : public CxxTest::RealTestDescription {
public:
 TestDescription_SetTestSuite_test_get_random_element() : CxxTest::RealTestDescription( Tests_SetTestSuite, suiteDescription_SetTestSuite, 310, "test_get_random_element" ) {}
 void runTest() { suite_SetTestSuite.test_get_random_element(); }
} testDescription_SetTestSuite_test_get_random_element;

static class TestDescription_SetTestSuite_test_equality : public CxxTest::RealTestDescription {
public:
 TestDescription_SetTestSuite_test_equality() : CxxTest::RealTestDescription( Tests_SetTestSuite, suiteDescription_SetTestSuite, 327, "test_equality" ) {}
 void runTest() { suite_SetTestSuite.test_equality(); }
} testDescription_SetTestSuite_test_equality;

#include <cxxtest/Root.cpp>
