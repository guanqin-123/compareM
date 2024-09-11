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
#include "/home/guanqin/compareM/Marabou/src/common/tests/Test_HashSet.h"

static HashSetTestSuite suite_HashSetTestSuite;

static CxxTest::List Tests_HashSetTestSuite = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_HashSetTestSuite( "/home/guanqin/compareM/Marabou/src/common/tests/Test_HashSet.h", 27, "HashSetTestSuite", suite_HashSetTestSuite, Tests_HashSetTestSuite );

static class TestDescription_HashSetTestSuite_test_initializer_list : public CxxTest::RealTestDescription {
public:
 TestDescription_HashSetTestSuite_test_initializer_list() : CxxTest::RealTestDescription( Tests_HashSetTestSuite, suiteDescription_HashSetTestSuite, 42, "test_initializer_list" ) {}
 void runTest() { suite_HashSetTestSuite.test_initializer_list(); }
} testDescription_HashSetTestSuite_test_initializer_list;

static class TestDescription_HashSetTestSuite_test_insert : public CxxTest::RealTestDescription {
public:
 TestDescription_HashSetTestSuite_test_insert() : CxxTest::RealTestDescription( Tests_HashSetTestSuite, suiteDescription_HashSetTestSuite, 53, "test_insert" ) {}
 void runTest() { suite_HashSetTestSuite.test_insert(); }
} testDescription_HashSetTestSuite_test_insert;

static class TestDescription_HashSetTestSuite_test_insert_hashSet : public CxxTest::RealTestDescription {
public:
 TestDescription_HashSetTestSuite_test_insert_hashSet() : CxxTest::RealTestDescription( Tests_HashSetTestSuite, suiteDescription_HashSetTestSuite, 76, "test_insert_hashSet" ) {}
 void runTest() { suite_HashSetTestSuite.test_insert_hashSet(); }
} testDescription_HashSetTestSuite_test_insert_hashSet;

static class TestDescription_HashSetTestSuite_test_clear : public CxxTest::RealTestDescription {
public:
 TestDescription_HashSetTestSuite_test_clear() : CxxTest::RealTestDescription( Tests_HashSetTestSuite, suiteDescription_HashSetTestSuite, 109, "test_clear" ) {}
 void runTest() { suite_HashSetTestSuite.test_clear(); }
} testDescription_HashSetTestSuite_test_clear;

static class TestDescription_HashSetTestSuite_test_erase : public CxxTest::RealTestDescription {
public:
 TestDescription_HashSetTestSuite_test_erase() : CxxTest::RealTestDescription( Tests_HashSetTestSuite, suiteDescription_HashSetTestSuite, 130, "test_erase" ) {}
 void runTest() { suite_HashSetTestSuite.test_erase(); }
} testDescription_HashSetTestSuite_test_erase;

static class TestDescription_HashSetTestSuite_test_find : public CxxTest::RealTestDescription {
public:
 TestDescription_HashSetTestSuite_test_find() : CxxTest::RealTestDescription( Tests_HashSetTestSuite, suiteDescription_HashSetTestSuite, 157, "test_find" ) {}
 void runTest() { suite_HashSetTestSuite.test_find(); }
} testDescription_HashSetTestSuite_test_find;

static class TestDescription_HashSetTestSuite_test_operator_plus_equals : public CxxTest::RealTestDescription {
public:
 TestDescription_HashSetTestSuite_test_operator_plus_equals() : CxxTest::RealTestDescription( Tests_HashSetTestSuite, suiteDescription_HashSetTestSuite, 171, "test_operator_plus_equals" ) {}
 void runTest() { suite_HashSetTestSuite.test_operator_plus_equals(); }
} testDescription_HashSetTestSuite_test_operator_plus_equals;

static class TestDescription_HashSetTestSuite_test_operator_plus : public CxxTest::RealTestDescription {
public:
 TestDescription_HashSetTestSuite_test_operator_plus() : CxxTest::RealTestDescription( Tests_HashSetTestSuite, suiteDescription_HashSetTestSuite, 195, "test_operator_plus" ) {}
 void runTest() { suite_HashSetTestSuite.test_operator_plus(); }
} testDescription_HashSetTestSuite_test_operator_plus;

static class TestDescription_HashSetTestSuite_test_equality : public CxxTest::RealTestDescription {
public:
 TestDescription_HashSetTestSuite_test_equality() : CxxTest::RealTestDescription( Tests_HashSetTestSuite, suiteDescription_HashSetTestSuite, 224, "test_equality" ) {}
 void runTest() { suite_HashSetTestSuite.test_equality(); }
} testDescription_HashSetTestSuite_test_equality;

#include <cxxtest/Root.cpp>
