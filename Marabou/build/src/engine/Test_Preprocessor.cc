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
#include "/home/guanqin/compareM/Marabou/src/engine/tests/Test_Preprocessor.h"

static PreprocessorTestSuite suite_PreprocessorTestSuite;

static CxxTest::List Tests_PreprocessorTestSuite = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_PreprocessorTestSuite( "/home/guanqin/compareM/Marabou/src/engine/tests/Test_Preprocessor.h", 36, "PreprocessorTestSuite", suite_PreprocessorTestSuite, Tests_PreprocessorTestSuite );

static class TestDescription_PreprocessorTestSuite_test_tighten_equation_bounds : public CxxTest::RealTestDescription {
public:
 TestDescription_PreprocessorTestSuite_test_tighten_equation_bounds() : CxxTest::RealTestDescription( Tests_PreprocessorTestSuite, suiteDescription_PreprocessorTestSuite, 51, "test_tighten_equation_bounds" ) {}
 void runTest() { suite_PreprocessorTestSuite.test_tighten_equation_bounds(); }
} testDescription_PreprocessorTestSuite_test_tighten_equation_bounds;

static class TestDescription_PreprocessorTestSuite_test_tighten_bounds_using_constraints : public CxxTest::RealTestDescription {
public:
 TestDescription_PreprocessorTestSuite_test_tighten_bounds_using_constraints() : CxxTest::RealTestDescription( Tests_PreprocessorTestSuite, suiteDescription_PreprocessorTestSuite, 204, "test_tighten_bounds_using_constraints" ) {}
 void runTest() { suite_PreprocessorTestSuite.test_tighten_bounds_using_constraints(); }
} testDescription_PreprocessorTestSuite_test_tighten_bounds_using_constraints;

static class TestDescription_PreprocessorTestSuite_test_tighten_bounds_using_equations_and_constraints : public CxxTest::RealTestDescription {
public:
 TestDescription_PreprocessorTestSuite_test_tighten_bounds_using_equations_and_constraints() : CxxTest::RealTestDescription( Tests_PreprocessorTestSuite, suiteDescription_PreprocessorTestSuite, 309, "test_tighten_bounds_using_equations_and_constraints" ) {}
 void runTest() { suite_PreprocessorTestSuite.test_tighten_bounds_using_equations_and_constraints(); }
} testDescription_PreprocessorTestSuite_test_tighten_bounds_using_equations_and_constraints;

static class TestDescription_PreprocessorTestSuite_test_variable_elimination : public CxxTest::RealTestDescription {
public:
 TestDescription_PreprocessorTestSuite_test_variable_elimination() : CxxTest::RealTestDescription( Tests_PreprocessorTestSuite, suiteDescription_PreprocessorTestSuite, 366, "test_variable_elimination" ) {}
 void runTest() { suite_PreprocessorTestSuite.test_variable_elimination(); }
} testDescription_PreprocessorTestSuite_test_variable_elimination;

static class TestDescription_PreprocessorTestSuite_test_variable_elimination_for_sigmoid_constraint : public CxxTest::RealTestDescription {
public:
 TestDescription_PreprocessorTestSuite_test_variable_elimination_for_sigmoid_constraint() : CxxTest::RealTestDescription( Tests_PreprocessorTestSuite, suiteDescription_PreprocessorTestSuite, 430, "test_variable_elimination_for_sigmoid_constraint" ) {}
 void runTest() { suite_PreprocessorTestSuite.test_variable_elimination_for_sigmoid_constraint(); }
} testDescription_PreprocessorTestSuite_test_variable_elimination_for_sigmoid_constraint;

static class TestDescription_PreprocessorTestSuite_test_all_equations_become_equalities : public CxxTest::RealTestDescription {
public:
 TestDescription_PreprocessorTestSuite_test_all_equations_become_equalities() : CxxTest::RealTestDescription( Tests_PreprocessorTestSuite, suiteDescription_PreprocessorTestSuite, 486, "test_all_equations_become_equalities" ) {}
 void runTest() { suite_PreprocessorTestSuite.test_all_equations_become_equalities(); }
} testDescription_PreprocessorTestSuite_test_all_equations_become_equalities;

static class TestDescription_PreprocessorTestSuite_test_identical_variable_elimination : public CxxTest::RealTestDescription {
public:
 TestDescription_PreprocessorTestSuite_test_identical_variable_elimination() : CxxTest::RealTestDescription( Tests_PreprocessorTestSuite, suiteDescription_PreprocessorTestSuite, 531, "test_identical_variable_elimination" ) {}
 void runTest() { suite_PreprocessorTestSuite.test_identical_variable_elimination(); }
} testDescription_PreprocessorTestSuite_test_identical_variable_elimination;

static class TestDescription_PreprocessorTestSuite_test_merge_and_fix_disjoint : public CxxTest::RealTestDescription {
public:
 TestDescription_PreprocessorTestSuite_test_merge_and_fix_disjoint() : CxxTest::RealTestDescription( Tests_PreprocessorTestSuite, suiteDescription_PreprocessorTestSuite, 594, "test_merge_and_fix_disjoint" ) {}
 void runTest() { suite_PreprocessorTestSuite.test_merge_and_fix_disjoint(); }
} testDescription_PreprocessorTestSuite_test_merge_and_fix_disjoint;

static class TestDescription_PreprocessorTestSuite_test_construction_of_network_level_reasoner : public CxxTest::RealTestDescription {
public:
 TestDescription_PreprocessorTestSuite_test_construction_of_network_level_reasoner() : CxxTest::RealTestDescription( Tests_PreprocessorTestSuite, suiteDescription_PreprocessorTestSuite, 738, "test_construction_of_network_level_reasoner" ) {}
 void runTest() { suite_PreprocessorTestSuite.test_construction_of_network_level_reasoner(); }
} testDescription_PreprocessorTestSuite_test_construction_of_network_level_reasoner;

static class TestDescription_PreprocessorTestSuite_test_construction_of_network_level_reasoner_with_sigmoid : public CxxTest::RealTestDescription {
public:
 TestDescription_PreprocessorTestSuite_test_construction_of_network_level_reasoner_with_sigmoid() : CxxTest::RealTestDescription( Tests_PreprocessorTestSuite, suiteDescription_PreprocessorTestSuite, 816, "test_construction_of_network_level_reasoner_with_sigmoid" ) {}
 void runTest() { suite_PreprocessorTestSuite.test_construction_of_network_level_reasoner_with_sigmoid(); }
} testDescription_PreprocessorTestSuite_test_construction_of_network_level_reasoner_with_sigmoid;

static class TestDescription_PreprocessorTestSuite_test_preprocessor_handle_obsolete_constraints : public CxxTest::RealTestDescription {
public:
 TestDescription_PreprocessorTestSuite_test_preprocessor_handle_obsolete_constraints() : CxxTest::RealTestDescription( Tests_PreprocessorTestSuite, suiteDescription_PreprocessorTestSuite, 896, "test_preprocessor_handle_obsolete_constraints" ) {}
 void runTest() { suite_PreprocessorTestSuite.test_preprocessor_handle_obsolete_constraints(); }
} testDescription_PreprocessorTestSuite_test_preprocessor_handle_obsolete_constraints;

static class TestDescription_PreprocessorTestSuite_test_preprocessor_with_input_bounds_in_disjunction : public CxxTest::RealTestDescription {
public:
 TestDescription_PreprocessorTestSuite_test_preprocessor_with_input_bounds_in_disjunction() : CxxTest::RealTestDescription( Tests_PreprocessorTestSuite, suiteDescription_PreprocessorTestSuite, 940, "test_preprocessor_with_input_bounds_in_disjunction" ) {}
 void runTest() { suite_PreprocessorTestSuite.test_preprocessor_with_input_bounds_in_disjunction(); }
} testDescription_PreprocessorTestSuite_test_preprocessor_with_input_bounds_in_disjunction;

static class TestDescription_PreprocessorTestSuite_test_set_solution_for_eliminated_neurons : public CxxTest::RealTestDescription {
public:
 TestDescription_PreprocessorTestSuite_test_set_solution_for_eliminated_neurons() : CxxTest::RealTestDescription( Tests_PreprocessorTestSuite, suiteDescription_PreprocessorTestSuite, 965, "test_set_solution_for_eliminated_neurons" ) {}
 void runTest() { suite_PreprocessorTestSuite.test_set_solution_for_eliminated_neurons(); }
} testDescription_PreprocessorTestSuite_test_set_solution_for_eliminated_neurons;

static class TestDescription_PreprocessorTestSuite_test_todo : public CxxTest::RealTestDescription {
public:
 TestDescription_PreprocessorTestSuite_test_todo() : CxxTest::RealTestDescription( Tests_PreprocessorTestSuite, suiteDescription_PreprocessorTestSuite, 1027, "test_todo" ) {}
 void runTest() { suite_PreprocessorTestSuite.test_todo(); }
} testDescription_PreprocessorTestSuite_test_todo;

#include <cxxtest/Root.cpp>
