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
#include "/home/guanqin/compareM/Marabou/src/engine/tests/Test_Tableau.h"

static TableauTestSuite suite_TableauTestSuite;

static CxxTest::List Tests_TableauTestSuite = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TableauTestSuite( "/home/guanqin/compareM/Marabou/src/engine/tests/Test_Tableau.h", 54, "TableauTestSuite", suite_TableauTestSuite, Tests_TableauTestSuite );

static class TestDescription_TableauTestSuite_test_initialize_bounds : public CxxTest::RealTestDescription {
public:
 TestDescription_TableauTestSuite_test_initialize_bounds() : CxxTest::RealTestDescription( Tests_TableauTestSuite, suiteDescription_TableauTestSuite, 110, "test_initialize_bounds" ) {}
 void runTest() { suite_TableauTestSuite.test_initialize_bounds(); }
} testDescription_TableauTestSuite_test_initialize_bounds;

static class TestDescription_TableauTestSuite_test_initalize_basis_get_value : public CxxTest::RealTestDescription {
public:
 TestDescription_TableauTestSuite_test_initalize_basis_get_value() : CxxTest::RealTestDescription( Tests_TableauTestSuite, suiteDescription_TableauTestSuite, 130, "test_initalize_basis_get_value" ) {}
 void runTest() { suite_TableauTestSuite.test_initalize_basis_get_value(); }
} testDescription_TableauTestSuite_test_initalize_basis_get_value;

static class TestDescription_TableauTestSuite_test_get_entering_variable__have_eligible_variables : public CxxTest::RealTestDescription {
public:
 TestDescription_TableauTestSuite_test_get_entering_variable__have_eligible_variables() : CxxTest::RealTestDescription( Tests_TableauTestSuite, suiteDescription_TableauTestSuite, 177, "test_get_entering_variable__have_eligible_variables" ) {}
 void runTest() { suite_TableauTestSuite.test_get_entering_variable__have_eligible_variables(); }
} testDescription_TableauTestSuite_test_get_entering_variable__have_eligible_variables;

static class TestDescription_TableauTestSuite_test_get_entering_variable__no_eligible_variables : public CxxTest::RealTestDescription {
public:
 TestDescription_TableauTestSuite_test_get_entering_variable__no_eligible_variables() : CxxTest::RealTestDescription( Tests_TableauTestSuite, suiteDescription_TableauTestSuite, 231, "test_get_entering_variable__no_eligible_variables" ) {}
 void runTest() { suite_TableauTestSuite.test_get_entering_variable__no_eligible_variables(); }
} testDescription_TableauTestSuite_test_get_entering_variable__no_eligible_variables;

static class TestDescription_TableauTestSuite_test_get_get_leaving_variable : public CxxTest::RealTestDescription {
public:
 TestDescription_TableauTestSuite_test_get_get_leaving_variable() : CxxTest::RealTestDescription( Tests_TableauTestSuite, suiteDescription_TableauTestSuite, 285, "test_get_get_leaving_variable" ) {}
 void runTest() { suite_TableauTestSuite.test_get_get_leaving_variable(); }
} testDescription_TableauTestSuite_test_get_get_leaving_variable;

static class TestDescription_TableauTestSuite_test_perform_pivot_nonbasic_goes_to_opposite_bound : public CxxTest::RealTestDescription {
public:
 TestDescription_TableauTestSuite_test_perform_pivot_nonbasic_goes_to_opposite_bound() : CxxTest::RealTestDescription( Tests_TableauTestSuite, suiteDescription_TableauTestSuite, 399, "test_perform_pivot_nonbasic_goes_to_opposite_bound" ) {}
 void runTest() { suite_TableauTestSuite.test_perform_pivot_nonbasic_goes_to_opposite_bound(); }
} testDescription_TableauTestSuite_test_perform_pivot_nonbasic_goes_to_opposite_bound;

static class TestDescription_TableauTestSuite_test_perform_pivot_nonbasic_becomes_basic : public CxxTest::RealTestDescription {
public:
 TestDescription_TableauTestSuite_test_perform_pivot_nonbasic_becomes_basic() : CxxTest::RealTestDescription( Tests_TableauTestSuite, suiteDescription_TableauTestSuite, 463, "test_perform_pivot_nonbasic_becomes_basic" ) {}
 void runTest() { suite_TableauTestSuite.test_perform_pivot_nonbasic_becomes_basic(); }
} testDescription_TableauTestSuite_test_perform_pivot_nonbasic_becomes_basic;

static class TestDescription_TableauTestSuite_test_get_row : public CxxTest::RealTestDescription {
public:
 TestDescription_TableauTestSuite_test_get_row() : CxxTest::RealTestDescription( Tests_TableauTestSuite, suiteDescription_TableauTestSuite, 543, "test_get_row" ) {}
 void runTest() { suite_TableauTestSuite.test_get_row(); }
} testDescription_TableauTestSuite_test_get_row;

static class TestDescription_TableauTestSuite_test_degenerate_pivot : public CxxTest::RealTestDescription {
public:
 TestDescription_TableauTestSuite_test_degenerate_pivot() : CxxTest::RealTestDescription( Tests_TableauTestSuite, suiteDescription_TableauTestSuite, 755, "test_degenerate_pivot" ) {}
 void runTest() { suite_TableauTestSuite.test_degenerate_pivot(); }
} testDescription_TableauTestSuite_test_degenerate_pivot;

static class TestDescription_TableauTestSuite_test_store_and_restore : public CxxTest::RealTestDescription {
public:
 TestDescription_TableauTestSuite_test_store_and_restore() : CxxTest::RealTestDescription( Tests_TableauTestSuite, suiteDescription_TableauTestSuite, 958, "test_store_and_restore" ) {}
 void runTest() { suite_TableauTestSuite.test_store_and_restore(); }
} testDescription_TableauTestSuite_test_store_and_restore;

static class TestDescription_TableauTestSuite_test_add_equation : public CxxTest::RealTestDescription {
public:
 TestDescription_TableauTestSuite_test_add_equation() : CxxTest::RealTestDescription( Tests_TableauTestSuite, suiteDescription_TableauTestSuite, 1092, "test_add_equation" ) {}
 void runTest() { suite_TableauTestSuite.test_add_equation(); }
} testDescription_TableauTestSuite_test_add_equation;

static class TestDescription_TableauTestSuite_test_tighten_bounds : public CxxTest::RealTestDescription {
public:
 TestDescription_TableauTestSuite_test_tighten_bounds() : CxxTest::RealTestDescription( Tests_TableauTestSuite, suiteDescription_TableauTestSuite, 1253, "test_tighten_bounds" ) {}
 void runTest() { suite_TableauTestSuite.test_tighten_bounds(); }
} testDescription_TableauTestSuite_test_tighten_bounds;

static class TestDescription_TableauTestSuite_test_are_dependent : public CxxTest::RealTestDescription {
public:
 TestDescription_TableauTestSuite_test_are_dependent() : CxxTest::RealTestDescription( Tests_TableauTestSuite, suiteDescription_TableauTestSuite, 1342, "test_are_dependent" ) {}
 void runTest() { suite_TableauTestSuite.test_are_dependent(); }
} testDescription_TableauTestSuite_test_are_dependent;

static class TestDescription_TableauTestSuite_test_get_get_leaving_variable_optimize : public CxxTest::RealTestDescription {
public:
 TestDescription_TableauTestSuite_test_get_get_leaving_variable_optimize() : CxxTest::RealTestDescription( Tests_TableauTestSuite, suiteDescription_TableauTestSuite, 1519, "test_get_get_leaving_variable_optimize" ) {}
 void runTest() { suite_TableauTestSuite.test_get_get_leaving_variable_optimize(); }
} testDescription_TableauTestSuite_test_get_get_leaving_variable_optimize;

static class TestDescription_TableauTestSuite_test_todo : public CxxTest::RealTestDescription {
public:
 TestDescription_TableauTestSuite_test_todo() : CxxTest::RealTestDescription( Tests_TableauTestSuite, suiteDescription_TableauTestSuite, 1640, "test_todo" ) {}
 void runTest() { suite_TableauTestSuite.test_todo(); }
} testDescription_TableauTestSuite_test_todo;

#include <cxxtest/Root.cpp>
