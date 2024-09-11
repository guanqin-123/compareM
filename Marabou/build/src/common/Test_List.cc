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
#include "/home/guanqin/compareM/Marabou/src/common/tests/Test_List.h"

static ListTestSuite suite_ListTestSuite;

static CxxTest::List Tests_ListTestSuite = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_ListTestSuite( "/home/guanqin/compareM/Marabou/src/common/tests/Test_List.h", 23, "ListTestSuite", suite_ListTestSuite, Tests_ListTestSuite );

static class TestDescription_ListTestSuite_test_append : public CxxTest::RealTestDescription {
public:
 TestDescription_ListTestSuite_test_append() : CxxTest::RealTestDescription( Tests_ListTestSuite, suiteDescription_ListTestSuite, 38, "test_append" ) {}
 void runTest() { suite_ListTestSuite.test_append(); }
} testDescription_ListTestSuite_test_append;

static class TestDescription_ListTestSuite_test_erase : public CxxTest::RealTestDescription {
public:
 TestDescription_ListTestSuite_test_erase() : CxxTest::RealTestDescription( Tests_ListTestSuite, suiteDescription_ListTestSuite, 84, "test_erase" ) {}
 void runTest() { suite_ListTestSuite.test_erase(); }
} testDescription_ListTestSuite_test_erase;

static class TestDescription_ListTestSuite_test_erase_by_value : public CxxTest::RealTestDescription {
public:
 TestDescription_ListTestSuite_test_erase_by_value() : CxxTest::RealTestDescription( Tests_ListTestSuite, suiteDescription_ListTestSuite, 121, "test_erase_by_value" ) {}
 void runTest() { suite_ListTestSuite.test_erase_by_value(); }
} testDescription_ListTestSuite_test_erase_by_value;

static class TestDescription_ListTestSuite_test_exists : public CxxTest::RealTestDescription {
public:
 TestDescription_ListTestSuite_test_exists() : CxxTest::RealTestDescription( Tests_ListTestSuite, suiteDescription_ListTestSuite, 142, "test_exists" ) {}
 void runTest() { suite_ListTestSuite.test_exists(); }
} testDescription_ListTestSuite_test_exists;

static class TestDescription_ListTestSuite_test_front_and_back : public CxxTest::RealTestDescription {
public:
 TestDescription_ListTestSuite_test_front_and_back() : CxxTest::RealTestDescription( Tests_ListTestSuite, suiteDescription_ListTestSuite, 159, "test_front_and_back" ) {}
 void runTest() { suite_ListTestSuite.test_front_and_back(); }
} testDescription_ListTestSuite_test_front_and_back;

static class TestDescription_ListTestSuite_test_operator_equality : public CxxTest::RealTestDescription {
public:
 TestDescription_ListTestSuite_test_operator_equality() : CxxTest::RealTestDescription( Tests_ListTestSuite, suiteDescription_ListTestSuite, 180, "test_operator_equality" ) {}
 void runTest() { suite_ListTestSuite.test_operator_equality(); }
} testDescription_ListTestSuite_test_operator_equality;

static class TestDescription_ListTestSuite_test_initializer_list : public CxxTest::RealTestDescription {
public:
 TestDescription_ListTestSuite_test_initializer_list() : CxxTest::RealTestDescription( Tests_ListTestSuite, suiteDescription_ListTestSuite, 199, "test_initializer_list" ) {}
 void runTest() { suite_ListTestSuite.test_initializer_list(); }
} testDescription_ListTestSuite_test_initializer_list;

static class TestDescription_ListTestSuite_test_append_another_list : public CxxTest::RealTestDescription {
public:
 TestDescription_ListTestSuite_test_append_another_list() : CxxTest::RealTestDescription( Tests_ListTestSuite, suiteDescription_ListTestSuite, 214, "test_append_another_list" ) {}
 void runTest() { suite_ListTestSuite.test_append_another_list(); }
} testDescription_ListTestSuite_test_append_another_list;

static class TestDescription_ListTestSuite_test_reverse_iterator : public CxxTest::RealTestDescription {
public:
 TestDescription_ListTestSuite_test_reverse_iterator() : CxxTest::RealTestDescription( Tests_ListTestSuite, suiteDescription_ListTestSuite, 236, "test_reverse_iterator" ) {}
 void runTest() { suite_ListTestSuite.test_reverse_iterator(); }
} testDescription_ListTestSuite_test_reverse_iterator;

static class TestDescription_ListTestSuite_test_pop_back : public CxxTest::RealTestDescription {
public:
 TestDescription_ListTestSuite_test_pop_back() : CxxTest::RealTestDescription( Tests_ListTestSuite, suiteDescription_ListTestSuite, 257, "test_pop_back" ) {}
 void runTest() { suite_ListTestSuite.test_pop_back(); }
} testDescription_ListTestSuite_test_pop_back;

static class TestDescription_ListTestSuite_test_remove_if : public CxxTest::RealTestDescription {
public:
 TestDescription_ListTestSuite_test_remove_if() : CxxTest::RealTestDescription( Tests_ListTestSuite, suiteDescription_ListTestSuite, 291, "test_remove_if" ) {}
 void runTest() { suite_ListTestSuite.test_remove_if(); }
} testDescription_ListTestSuite_test_remove_if;

#include <cxxtest/Root.cpp>
