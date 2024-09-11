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
#include "/home/guanqin/compareM/Marabou/src/common/tests/Test_HeapData.h"

static HeapDataTestSuite suite_HeapDataTestSuite;

static CxxTest::List Tests_HeapDataTestSuite = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_HeapDataTestSuite( "/home/guanqin/compareM/Marabou/src/common/tests/Test_HeapData.h", 90, "HeapDataTestSuite", suite_HeapDataTestSuite, Tests_HeapDataTestSuite );

static class TestDescription_HeapDataTestSuite_test_empty_data : public CxxTest::RealTestDescription {
public:
 TestDescription_HeapDataTestSuite_test_empty_data() : CxxTest::RealTestDescription( Tests_HeapDataTestSuite, suiteDescription_HeapDataTestSuite, 105, "test_empty_data" ) {}
 void runTest() { suite_HeapDataTestSuite.test_empty_data(); }
} testDescription_HeapDataTestSuite_test_empty_data;

static class TestDescription_HeapDataTestSuite_test_constructor : public CxxTest::RealTestDescription {
public:
 TestDescription_HeapDataTestSuite_test_constructor() : CxxTest::RealTestDescription( Tests_HeapDataTestSuite, suiteDescription_HeapDataTestSuite, 113, "test_constructor" ) {}
 void runTest() { suite_HeapDataTestSuite.test_constructor(); }
} testDescription_HeapDataTestSuite_test_constructor;

static class TestDescription_HeapDataTestSuite_test_constructor__new_fails : public CxxTest::RealTestDescription {
public:
 TestDescription_HeapDataTestSuite_test_constructor__new_fails() : CxxTest::RealTestDescription( Tests_HeapDataTestSuite, suiteDescription_HeapDataTestSuite, 140, "test_constructor__new_fails" ) {}
 void runTest() { suite_HeapDataTestSuite.test_constructor__new_fails(); }
} testDescription_HeapDataTestSuite_test_constructor__new_fails;

static class TestDescription_HeapDataTestSuite_test_assignment_from_const_simple_data : public CxxTest::RealTestDescription {
public:
 TestDescription_HeapDataTestSuite_test_assignment_from_const_simple_data() : CxxTest::RealTestDescription( Tests_HeapDataTestSuite, suiteDescription_HeapDataTestSuite, 152, "test_assignment_from_const_simple_data" ) {}
 void runTest() { suite_HeapDataTestSuite.test_assignment_from_const_simple_data(); }
} testDescription_HeapDataTestSuite_test_assignment_from_const_simple_data;

static class TestDescription_HeapDataTestSuite_test_assignment_from_other_heap_data : public CxxTest::RealTestDescription {
public:
 TestDescription_HeapDataTestSuite_test_assignment_from_other_heap_data() : CxxTest::RealTestDescription( Tests_HeapDataTestSuite, suiteDescription_HeapDataTestSuite, 173, "test_assignment_from_other_heap_data" ) {}
 void runTest() { suite_HeapDataTestSuite.test_assignment_from_other_heap_data(); }
} testDescription_HeapDataTestSuite_test_assignment_from_other_heap_data;

static class TestDescription_HeapDataTestSuite_test_constructor_from_other_heap_data : public CxxTest::RealTestDescription {
public:
 TestDescription_HeapDataTestSuite_test_constructor_from_other_heap_data() : CxxTest::RealTestDescription( Tests_HeapDataTestSuite, suiteDescription_HeapDataTestSuite, 197, "test_constructor_from_other_heap_data" ) {}
 void runTest() { suite_HeapDataTestSuite.test_constructor_from_other_heap_data(); }
} testDescription_HeapDataTestSuite_test_constructor_from_other_heap_data;

static class TestDescription_HeapDataTestSuite_test_concatenation : public CxxTest::RealTestDescription {
public:
 TestDescription_HeapDataTestSuite_test_concatenation() : CxxTest::RealTestDescription( Tests_HeapDataTestSuite, suiteDescription_HeapDataTestSuite, 220, "test_concatenation" ) {}
 void runTest() { suite_HeapDataTestSuite.test_concatenation(); }
} testDescription_HeapDataTestSuite_test_concatenation;

static class TestDescription_HeapDataTestSuite_test_constructor_from_const_simple_data : public CxxTest::RealTestDescription {
public:
 TestDescription_HeapDataTestSuite_test_constructor_from_const_simple_data() : CxxTest::RealTestDescription( Tests_HeapDataTestSuite, suiteDescription_HeapDataTestSuite, 265, "test_constructor_from_const_simple_data" ) {}
 void runTest() { suite_HeapDataTestSuite.test_constructor_from_const_simple_data(); }
} testDescription_HeapDataTestSuite_test_constructor_from_const_simple_data;

static class TestDescription_HeapDataTestSuite_test_copy_constructor : public CxxTest::RealTestDescription {
public:
 TestDescription_HeapDataTestSuite_test_copy_constructor() : CxxTest::RealTestDescription( Tests_HeapDataTestSuite, suiteDescription_HeapDataTestSuite, 286, "test_copy_constructor" ) {}
 void runTest() { suite_HeapDataTestSuite.test_copy_constructor(); }
} testDescription_HeapDataTestSuite_test_copy_constructor;

static class TestDescription_HeapDataTestSuite_test_clear : public CxxTest::RealTestDescription {
public:
 TestDescription_HeapDataTestSuite_test_clear() : CxxTest::RealTestDescription( Tests_HeapDataTestSuite, suiteDescription_HeapDataTestSuite, 317, "test_clear" ) {}
 void runTest() { suite_HeapDataTestSuite.test_clear(); }
} testDescription_HeapDataTestSuite_test_clear;

static class TestDescription_HeapDataTestSuite_test_equality : public CxxTest::RealTestDescription {
public:
 TestDescription_HeapDataTestSuite_test_equality() : CxxTest::RealTestDescription( Tests_HeapDataTestSuite, suiteDescription_HeapDataTestSuite, 346, "test_equality" ) {}
 void runTest() { suite_HeapDataTestSuite.test_equality(); }
} testDescription_HeapDataTestSuite_test_equality;

#include <cxxtest/Root.cpp>
