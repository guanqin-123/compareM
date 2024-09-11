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
#include "/home/guanqin/compareM/Marabou/src/engine/tests/Test_RowBoundTightener.h"

static RowBoundTightenerTestSuite suite_RowBoundTightenerTestSuite;

static CxxTest::List Tests_RowBoundTightenerTestSuite = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_RowBoundTightenerTestSuite( "/home/guanqin/compareM/Marabou/src/engine/tests/Test_RowBoundTightener.h", 27, "RowBoundTightenerTestSuite", suite_RowBoundTightenerTestSuite, Tests_RowBoundTightenerTestSuite );

static class TestDescription_RowBoundTightenerTestSuite_test_pivot_row__both_bounds_tightened : public CxxTest::RealTestDescription {
public:
 TestDescription_RowBoundTightenerTestSuite_test_pivot_row__both_bounds_tightened() : CxxTest::RealTestDescription( Tests_RowBoundTightenerTestSuite, suiteDescription_RowBoundTightenerTestSuite, 45, "test_pivot_row__both_bounds_tightened" ) {}
 void runTest() { suite_RowBoundTightenerTestSuite.test_pivot_row__both_bounds_tightened(); }
} testDescription_RowBoundTightenerTestSuite_test_pivot_row__both_bounds_tightened;

static class TestDescription_RowBoundTightenerTestSuite_test_pivot_row_just_upper_tightend : public CxxTest::RealTestDescription {
public:
 TestDescription_RowBoundTightenerTestSuite_test_pivot_row_just_upper_tightend() : CxxTest::RealTestDescription( Tests_RowBoundTightenerTestSuite, suiteDescription_RowBoundTightenerTestSuite, 119, "test_pivot_row_just_upper_tightend" ) {}
 void runTest() { suite_RowBoundTightenerTestSuite.test_pivot_row_just_upper_tightend(); }
} testDescription_RowBoundTightenerTestSuite_test_pivot_row_just_upper_tightend;

static class TestDescription_RowBoundTightenerTestSuite_test_pivot_row__just_lower_tightend : public CxxTest::RealTestDescription {
public:
 TestDescription_RowBoundTightenerTestSuite_test_pivot_row__just_lower_tightend() : CxxTest::RealTestDescription( Tests_RowBoundTightenerTestSuite, suiteDescription_RowBoundTightenerTestSuite, 181, "test_pivot_row__just_lower_tightend" ) {}
 void runTest() { suite_RowBoundTightenerTestSuite.test_pivot_row__just_lower_tightend(); }
} testDescription_RowBoundTightenerTestSuite_test_pivot_row__just_lower_tightend;

static class TestDescription_RowBoundTightenerTestSuite_test_pivot_row__nothing_tightened : public CxxTest::RealTestDescription {
public:
 TestDescription_RowBoundTightenerTestSuite_test_pivot_row__nothing_tightened() : CxxTest::RealTestDescription( Tests_RowBoundTightenerTestSuite, suiteDescription_RowBoundTightenerTestSuite, 235, "test_pivot_row__nothing_tightened" ) {}
 void runTest() { suite_RowBoundTightenerTestSuite.test_pivot_row__nothing_tightened(); }
} testDescription_RowBoundTightenerTestSuite_test_pivot_row__nothing_tightened;

static class TestDescription_RowBoundTightenerTestSuite_test_examine_constraint_matrix_single_equation : public CxxTest::RealTestDescription {
public:
 TestDescription_RowBoundTightenerTestSuite_test_examine_constraint_matrix_single_equation() : CxxTest::RealTestDescription( Tests_RowBoundTightenerTestSuite, suiteDescription_RowBoundTightenerTestSuite, 276, "test_examine_constraint_matrix_single_equation" ) {}
 void runTest() { suite_RowBoundTightenerTestSuite.test_examine_constraint_matrix_single_equation(); }
} testDescription_RowBoundTightenerTestSuite_test_examine_constraint_matrix_single_equation;

static class TestDescription_RowBoundTightenerTestSuite_test_examine_constraint_matrix_multiple_equations : public CxxTest::RealTestDescription {
public:
 TestDescription_RowBoundTightenerTestSuite_test_examine_constraint_matrix_multiple_equations() : CxxTest::RealTestDescription( Tests_RowBoundTightenerTestSuite, suiteDescription_RowBoundTightenerTestSuite, 341, "test_examine_constraint_matrix_multiple_equations" ) {}
 void runTest() { suite_RowBoundTightenerTestSuite.test_examine_constraint_matrix_multiple_equations(); }
} testDescription_RowBoundTightenerTestSuite_test_examine_constraint_matrix_multiple_equations;

#include <cxxtest/Root.cpp>
