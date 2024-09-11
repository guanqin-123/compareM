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
#include "/home/guanqin/compareM/Marabou/src/common/tests/Test_Vector.h"

static VectorTestSuite suite_VectorTestSuite;

static CxxTest::List Tests_VectorTestSuite = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_VectorTestSuite( "/home/guanqin/compareM/Marabou/src/common/tests/Test_Vector.h", 23, "VectorTestSuite", suite_VectorTestSuite, Tests_VectorTestSuite );

static class TestDescription_VectorTestSuite_test_constructor_size : public CxxTest::RealTestDescription {
public:
 TestDescription_VectorTestSuite_test_constructor_size() : CxxTest::RealTestDescription( Tests_VectorTestSuite, suiteDescription_VectorTestSuite, 38, "test_constructor_size" ) {}
 void runTest() { suite_VectorTestSuite.test_constructor_size(); }
} testDescription_VectorTestSuite_test_constructor_size;

static class TestDescription_VectorTestSuite_test_constructor_value : public CxxTest::RealTestDescription {
public:
 TestDescription_VectorTestSuite_test_constructor_value() : CxxTest::RealTestDescription( Tests_VectorTestSuite, suiteDescription_VectorTestSuite, 47, "test_constructor_value" ) {}
 void runTest() { suite_VectorTestSuite.test_constructor_value(); }
} testDescription_VectorTestSuite_test_constructor_value;

static class TestDescription_VectorTestSuite_test_brackets : public CxxTest::RealTestDescription {
public:
 TestDescription_VectorTestSuite_test_brackets() : CxxTest::RealTestDescription( Tests_VectorTestSuite, suiteDescription_VectorTestSuite, 60, "test_brackets" ) {}
 void runTest() { suite_VectorTestSuite.test_brackets(); }
} testDescription_VectorTestSuite_test_brackets;

static class TestDescription_VectorTestSuite_test_size_and_exists : public CxxTest::RealTestDescription {
public:
 TestDescription_VectorTestSuite_test_size_and_exists() : CxxTest::RealTestDescription( Tests_VectorTestSuite, suiteDescription_VectorTestSuite, 73, "test_size_and_exists" ) {}
 void runTest() { suite_VectorTestSuite.test_size_and_exists(); }
} testDescription_VectorTestSuite_test_size_and_exists;

static class TestDescription_VectorTestSuite_test_erase : public CxxTest::RealTestDescription {
public:
 TestDescription_VectorTestSuite_test_erase() : CxxTest::RealTestDescription( Tests_VectorTestSuite, suiteDescription_VectorTestSuite, 99, "test_erase" ) {}
 void runTest() { suite_VectorTestSuite.test_erase(); }
} testDescription_VectorTestSuite_test_erase;

static class TestDescription_VectorTestSuite_test_eraseByValue : public CxxTest::RealTestDescription {
public:
 TestDescription_VectorTestSuite_test_eraseByValue() : CxxTest::RealTestDescription( Tests_VectorTestSuite, suiteDescription_VectorTestSuite, 134, "test_eraseByValue" ) {}
 void runTest() { suite_VectorTestSuite.test_eraseByValue(); }
} testDescription_VectorTestSuite_test_eraseByValue;

static class TestDescription_VectorTestSuite_test_erase_at : public CxxTest::RealTestDescription {
public:
 TestDescription_VectorTestSuite_test_erase_at() : CxxTest::RealTestDescription( Tests_VectorTestSuite, suiteDescription_VectorTestSuite, 169, "test_erase_at" ) {}
 void runTest() { suite_VectorTestSuite.test_erase_at(); }
} testDescription_VectorTestSuite_test_erase_at;

static class TestDescription_VectorTestSuite_test_clear : public CxxTest::RealTestDescription {
public:
 TestDescription_VectorTestSuite_test_clear() : CxxTest::RealTestDescription( Tests_VectorTestSuite, suiteDescription_VectorTestSuite, 195, "test_clear" ) {}
 void runTest() { suite_VectorTestSuite.test_clear(); }
} testDescription_VectorTestSuite_test_clear;

static class TestDescription_VectorTestSuite_test_concatenation : public CxxTest::RealTestDescription {
public:
 TestDescription_VectorTestSuite_test_concatenation() : CxxTest::RealTestDescription( Tests_VectorTestSuite, suiteDescription_VectorTestSuite, 217, "test_concatenation" ) {}
 void runTest() { suite_VectorTestSuite.test_concatenation(); }
} testDescription_VectorTestSuite_test_concatenation;

static class TestDescription_VectorTestSuite_test_pop_first : public CxxTest::RealTestDescription {
public:
 TestDescription_VectorTestSuite_test_pop_first() : CxxTest::RealTestDescription( Tests_VectorTestSuite, suiteDescription_VectorTestSuite, 250, "test_pop_first" ) {}
 void runTest() { suite_VectorTestSuite.test_pop_first(); }
} testDescription_VectorTestSuite_test_pop_first;

static class TestDescription_VectorTestSuite_test_pop : public CxxTest::RealTestDescription {
public:
 TestDescription_VectorTestSuite_test_pop() : CxxTest::RealTestDescription( Tests_VectorTestSuite, suiteDescription_VectorTestSuite, 273, "test_pop" ) {}
 void runTest() { suite_VectorTestSuite.test_pop(); }
} testDescription_VectorTestSuite_test_pop;

static class TestDescription_VectorTestSuite_test_first : public CxxTest::RealTestDescription {
public:
 TestDescription_VectorTestSuite_test_first() : CxxTest::RealTestDescription( Tests_VectorTestSuite, suiteDescription_VectorTestSuite, 296, "test_first" ) {}
 void runTest() { suite_VectorTestSuite.test_first(); }
} testDescription_VectorTestSuite_test_first;

static class TestDescription_VectorTestSuite_test_last : public CxxTest::RealTestDescription {
public:
 TestDescription_VectorTestSuite_test_last() : CxxTest::RealTestDescription( Tests_VectorTestSuite, suiteDescription_VectorTestSuite, 316, "test_last" ) {}
 void runTest() { suite_VectorTestSuite.test_last(); }
} testDescription_VectorTestSuite_test_last;

static class TestDescription_VectorTestSuite_test_insert_head : public CxxTest::RealTestDescription {
public:
 TestDescription_VectorTestSuite_test_insert_head() : CxxTest::RealTestDescription( Tests_VectorTestSuite, suiteDescription_VectorTestSuite, 333, "test_insert_head" ) {}
 void runTest() { suite_VectorTestSuite.test_insert_head(); }
} testDescription_VectorTestSuite_test_insert_head;

static class TestDescription_VectorTestSuite_test_equality : public CxxTest::RealTestDescription {
public:
 TestDescription_VectorTestSuite_test_equality() : CxxTest::RealTestDescription( Tests_VectorTestSuite, suiteDescription_VectorTestSuite, 356, "test_equality" ) {}
 void runTest() { suite_VectorTestSuite.test_equality(); }
} testDescription_VectorTestSuite_test_equality;

static class TestDescription_VectorTestSuite_test_equality_complex : public CxxTest::RealTestDescription {
public:
 TestDescription_VectorTestSuite_test_equality_complex() : CxxTest::RealTestDescription( Tests_VectorTestSuite, suiteDescription_VectorTestSuite, 385, "test_equality_complex" ) {}
 void runTest() { suite_VectorTestSuite.test_equality_complex(); }
} testDescription_VectorTestSuite_test_equality_complex;

static class TestDescription_VectorTestSuite_test_sort : public CxxTest::RealTestDescription {
public:
 TestDescription_VectorTestSuite_test_sort() : CxxTest::RealTestDescription( Tests_VectorTestSuite, suiteDescription_VectorTestSuite, 400, "test_sort" ) {}
 void runTest() { suite_VectorTestSuite.test_sort(); }
} testDescription_VectorTestSuite_test_sort;

static class TestDescription_VectorTestSuite_test_erase_by_iterator : public CxxTest::RealTestDescription {
public:
 TestDescription_VectorTestSuite_test_erase_by_iterator() : CxxTest::RealTestDescription( Tests_VectorTestSuite, suiteDescription_VectorTestSuite, 431, "test_erase_by_iterator" ) {}
 void runTest() { suite_VectorTestSuite.test_erase_by_iterator(); }
} testDescription_VectorTestSuite_test_erase_by_iterator;

static class TestDescription_VectorTestSuite_test_assignemnt : public CxxTest::RealTestDescription {
public:
 TestDescription_VectorTestSuite_test_assignemnt() : CxxTest::RealTestDescription( Tests_VectorTestSuite, suiteDescription_VectorTestSuite, 463, "test_assignemnt" ) {}
 void runTest() { suite_VectorTestSuite.test_assignemnt(); }
} testDescription_VectorTestSuite_test_assignemnt;

static class TestDescription_VectorTestSuite_test_get : public CxxTest::RealTestDescription {
public:
 TestDescription_VectorTestSuite_test_get() : CxxTest::RealTestDescription( Tests_VectorTestSuite, suiteDescription_VectorTestSuite, 485, "test_get" ) {}
 void runTest() { suite_VectorTestSuite.test_get(); }
} testDescription_VectorTestSuite_test_get;

static class TestDescription_VectorTestSuite_test_const_random_access : public CxxTest::RealTestDescription {
public:
 TestDescription_VectorTestSuite_test_const_random_access() : CxxTest::RealTestDescription( Tests_VectorTestSuite, suiteDescription_VectorTestSuite, 501, "test_const_random_access" ) {}
 void runTest() { suite_VectorTestSuite.test_const_random_access(); }
} testDescription_VectorTestSuite_test_const_random_access;

static class TestDescription_VectorTestSuite_test_data_access : public CxxTest::RealTestDescription {
public:
 TestDescription_VectorTestSuite_test_data_access() : CxxTest::RealTestDescription( Tests_VectorTestSuite, suiteDescription_VectorTestSuite, 510, "test_data_access" ) {}
 void runTest() { suite_VectorTestSuite.test_data_access(); }
} testDescription_VectorTestSuite_test_data_access;

#include <cxxtest/Root.cpp>
