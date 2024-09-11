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
#include "/home/guanqin/compareM/Marabou/src/engine/tests/Test_ReluConstraint.h"

static ReluConstraintTestSuite suite_ReluConstraintTestSuite;

static CxxTest::List Tests_ReluConstraintTestSuite = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_ReluConstraintTestSuite( "/home/guanqin/compareM/Marabou/src/engine/tests/Test_ReluConstraint.h", 51, "ReluConstraintTestSuite", suite_ReluConstraintTestSuite, Tests_ReluConstraintTestSuite );

static class TestDescription_ReluConstraintTestSuite_test_relu_constraint : public CxxTest::RealTestDescription {
public:
 TestDescription_ReluConstraintTestSuite_test_relu_constraint() : CxxTest::RealTestDescription( Tests_ReluConstraintTestSuite, suiteDescription_ReluConstraintTestSuite, 68, "test_relu_constraint" ) {}
 void runTest() { suite_ReluConstraintTestSuite.test_relu_constraint(); }
} testDescription_ReluConstraintTestSuite_test_relu_constraint;

static class TestDescription_ReluConstraintTestSuite_test_relu_fixes : public CxxTest::RealTestDescription {
public:
 TestDescription_ReluConstraintTestSuite_test_relu_fixes() : CxxTest::RealTestDescription( Tests_ReluConstraintTestSuite, suiteDescription_ReluConstraintTestSuite, 159, "test_relu_fixes" ) {}
 void runTest() { suite_ReluConstraintTestSuite.test_relu_fixes(); }
} testDescription_ReluConstraintTestSuite_test_relu_fixes;

static class TestDescription_ReluConstraintTestSuite_test_relu_case_splits : public CxxTest::RealTestDescription {
public:
 TestDescription_ReluConstraintTestSuite_test_relu_case_splits() : CxxTest::RealTestDescription( Tests_ReluConstraintTestSuite, suiteDescription_ReluConstraintTestSuite, 205, "test_relu_case_splits" ) {}
 void runTest() { suite_ReluConstraintTestSuite.test_relu_case_splits(); }
} testDescription_ReluConstraintTestSuite_test_relu_case_splits;

static class TestDescription_ReluConstraintTestSuite_test_relu_case_splits_with_aux_var : public CxxTest::RealTestDescription {
public:
 TestDescription_ReluConstraintTestSuite_test_relu_case_splits_with_aux_var() : CxxTest::RealTestDescription( Tests_ReluConstraintTestSuite, suiteDescription_ReluConstraintTestSuite, 292, "test_relu_case_splits_with_aux_var" ) {}
 void runTest() { suite_ReluConstraintTestSuite.test_relu_case_splits_with_aux_var(); }
} testDescription_ReluConstraintTestSuite_test_relu_case_splits_with_aux_var;

static class TestDescription_ReluConstraintTestSuite_test_register_as_watcher : public CxxTest::RealTestDescription {
public:
 TestDescription_ReluConstraintTestSuite_test_register_as_watcher() : CxxTest::RealTestDescription( Tests_ReluConstraintTestSuite, suiteDescription_ReluConstraintTestSuite, 362, "test_register_as_watcher" ) {}
 void runTest() { suite_ReluConstraintTestSuite.test_register_as_watcher(); }
} testDescription_ReluConstraintTestSuite_test_register_as_watcher;

static class TestDescription_ReluConstraintTestSuite_test_fix_active : public CxxTest::RealTestDescription {
public:
 TestDescription_ReluConstraintTestSuite_test_fix_active() : CxxTest::RealTestDescription( Tests_ReluConstraintTestSuite, suiteDescription_ReluConstraintTestSuite, 392, "test_fix_active" ) {}
 void runTest() { suite_ReluConstraintTestSuite.test_fix_active(); }
} testDescription_ReluConstraintTestSuite_test_fix_active;

static class TestDescription_ReluConstraintTestSuite_test_fix_inactive : public CxxTest::RealTestDescription {
public:
 TestDescription_ReluConstraintTestSuite_test_fix_inactive() : CxxTest::RealTestDescription( Tests_ReluConstraintTestSuite, suiteDescription_ReluConstraintTestSuite, 430, "test_fix_inactive" ) {}
 void runTest() { suite_ReluConstraintTestSuite.test_fix_inactive(); }
} testDescription_ReluConstraintTestSuite_test_fix_inactive;

static class TestDescription_ReluConstraintTestSuite_test_constraint_phase_gets_fixed : public CxxTest::RealTestDescription {
public:
 TestDescription_ReluConstraintTestSuite_test_constraint_phase_gets_fixed() : CxxTest::RealTestDescription( Tests_ReluConstraintTestSuite, suiteDescription_ReluConstraintTestSuite, 453, "test_constraint_phase_gets_fixed" ) {}
 void runTest() { suite_ReluConstraintTestSuite.test_constraint_phase_gets_fixed(); }
} testDescription_ReluConstraintTestSuite_test_constraint_phase_gets_fixed;

static class TestDescription_ReluConstraintTestSuite_test_valid_split_relu_phase_fixed_to_active : public CxxTest::RealTestDescription {
public:
 TestDescription_ReluConstraintTestSuite_test_valid_split_relu_phase_fixed_to_active() : CxxTest::RealTestDescription( Tests_ReluConstraintTestSuite, suiteDescription_ReluConstraintTestSuite, 567, "test_valid_split_relu_phase_fixed_to_active" ) {}
 void runTest() { suite_ReluConstraintTestSuite.test_valid_split_relu_phase_fixed_to_active(); }
} testDescription_ReluConstraintTestSuite_test_valid_split_relu_phase_fixed_to_active;

static class TestDescription_ReluConstraintTestSuite_test_valid_split_relu_phase_fixed_to_inactive : public CxxTest::RealTestDescription {
public:
 TestDescription_ReluConstraintTestSuite_test_valid_split_relu_phase_fixed_to_inactive() : CxxTest::RealTestDescription( Tests_ReluConstraintTestSuite, suiteDescription_ReluConstraintTestSuite, 613, "test_valid_split_relu_phase_fixed_to_inactive" ) {}
 void runTest() { suite_ReluConstraintTestSuite.test_valid_split_relu_phase_fixed_to_inactive(); }
} testDescription_ReluConstraintTestSuite_test_valid_split_relu_phase_fixed_to_inactive;

static class TestDescription_ReluConstraintTestSuite_test_relu_entailed_tightenings : public CxxTest::RealTestDescription {
public:
 TestDescription_ReluConstraintTestSuite_test_relu_entailed_tightenings() : CxxTest::RealTestDescription( Tests_ReluConstraintTestSuite, suiteDescription_ReluConstraintTestSuite, 653, "test_relu_entailed_tightenings" ) {}
 void runTest() { suite_ReluConstraintTestSuite.test_relu_entailed_tightenings(); }
} testDescription_ReluConstraintTestSuite_test_relu_entailed_tightenings;

static class TestDescription_ReluConstraintTestSuite_test_relu_duplicate_and_restore : public CxxTest::RealTestDescription {
public:
 TestDescription_ReluConstraintTestSuite_test_relu_duplicate_and_restore() : CxxTest::RealTestDescription( Tests_ReluConstraintTestSuite, suiteDescription_ReluConstraintTestSuite, 746, "test_relu_duplicate_and_restore" ) {}
 void runTest() { suite_ReluConstraintTestSuite.test_relu_duplicate_and_restore(); }
} testDescription_ReluConstraintTestSuite_test_relu_duplicate_and_restore;

static class TestDescription_ReluConstraintTestSuite_test_eliminate_variable_active : public CxxTest::RealTestDescription {
public:
 TestDescription_ReluConstraintTestSuite_test_eliminate_variable_active() : CxxTest::RealTestDescription( Tests_ReluConstraintTestSuite, suiteDescription_ReluConstraintTestSuite, 775, "test_eliminate_variable_active" ) {}
 void runTest() { suite_ReluConstraintTestSuite.test_eliminate_variable_active(); }
} testDescription_ReluConstraintTestSuite_test_eliminate_variable_active;

static class TestDescription_ReluConstraintTestSuite_test_serialize_and_unserialize : public CxxTest::RealTestDescription {
public:
 TestDescription_ReluConstraintTestSuite_test_serialize_and_unserialize() : CxxTest::RealTestDescription( Tests_ReluConstraintTestSuite, suiteDescription_ReluConstraintTestSuite, 791, "test_serialize_and_unserialize" ) {}
 void runTest() { suite_ReluConstraintTestSuite.test_serialize_and_unserialize(); }
} testDescription_ReluConstraintTestSuite_test_serialize_and_unserialize;

static class TestDescription_ReluConstraintTestSuite_test_relu_smart_fixes : public CxxTest::RealTestDescription {
public:
 TestDescription_ReluConstraintTestSuite_test_relu_smart_fixes() : CxxTest::RealTestDescription( Tests_ReluConstraintTestSuite, suiteDescription_ReluConstraintTestSuite, 837, "test_relu_smart_fixes" ) {}
 void runTest() { suite_ReluConstraintTestSuite.test_relu_smart_fixes(); }
} testDescription_ReluConstraintTestSuite_test_relu_smart_fixes;

static class TestDescription_ReluConstraintTestSuite_test_add_auxiliary_equations : public CxxTest::RealTestDescription {
public:
 TestDescription_ReluConstraintTestSuite_test_add_auxiliary_equations() : CxxTest::RealTestDescription( Tests_ReluConstraintTestSuite, suiteDescription_ReluConstraintTestSuite, 980, "test_add_auxiliary_equations" ) {}
 void runTest() { suite_ReluConstraintTestSuite.test_add_auxiliary_equations(); }
} testDescription_ReluConstraintTestSuite_test_add_auxiliary_equations;

static class TestDescription_ReluConstraintTestSuite_test_polarity : public CxxTest::RealTestDescription {
public:
 TestDescription_ReluConstraintTestSuite_test_polarity() : CxxTest::RealTestDescription( Tests_ReluConstraintTestSuite, suiteDescription_ReluConstraintTestSuite, 1199, "test_polarity" ) {}
 void runTest() { suite_ReluConstraintTestSuite.test_polarity(); }
} testDescription_ReluConstraintTestSuite_test_polarity;

static class TestDescription_ReluConstraintTestSuite_test_relu_get_cases : public CxxTest::RealTestDescription {
public:
 TestDescription_ReluConstraintTestSuite_test_relu_get_cases() : CxxTest::RealTestDescription( Tests_ReluConstraintTestSuite, suiteDescription_ReluConstraintTestSuite, 1313, "test_relu_get_cases" ) {}
 void runTest() { suite_ReluConstraintTestSuite.test_relu_get_cases(); }
} testDescription_ReluConstraintTestSuite_test_relu_get_cases;

static class TestDescription_ReluConstraintTestSuite_test_relu_context_dependent_state : public CxxTest::RealTestDescription {
public:
 TestDescription_ReluConstraintTestSuite_test_relu_context_dependent_state() : CxxTest::RealTestDescription( Tests_ReluConstraintTestSuite, suiteDescription_ReluConstraintTestSuite, 1335, "test_relu_context_dependent_state" ) {}
 void runTest() { suite_ReluConstraintTestSuite.test_relu_context_dependent_state(); }
} testDescription_ReluConstraintTestSuite_test_relu_context_dependent_state;

static class TestDescription_ReluConstraintTestSuite_test_initialization_of_CDOs : public CxxTest::RealTestDescription {
public:
 TestDescription_ReluConstraintTestSuite_test_initialization_of_CDOs() : CxxTest::RealTestDescription( Tests_ReluConstraintTestSuite, suiteDescription_ReluConstraintTestSuite, 1367, "test_initialization_of_CDOs" ) {}
 void runTest() { suite_ReluConstraintTestSuite.test_initialization_of_CDOs(); }
} testDescription_ReluConstraintTestSuite_test_initialization_of_CDOs;

static class TestDescription_ReluConstraintTestSuite_test_lazy_backtracking_of_CDOs : public CxxTest::RealTestDescription {
public:
 TestDescription_ReluConstraintTestSuite_test_lazy_backtracking_of_CDOs() : CxxTest::RealTestDescription( Tests_ReluConstraintTestSuite, suiteDescription_ReluConstraintTestSuite, 1404, "test_lazy_backtracking_of_CDOs" ) {}
 void runTest() { suite_ReluConstraintTestSuite.test_lazy_backtracking_of_CDOs(); }
} testDescription_ReluConstraintTestSuite_test_lazy_backtracking_of_CDOs;

static class TestDescription_ReluConstraintTestSuite_test_get_cost_function_component : public CxxTest::RealTestDescription {
public:
 TestDescription_ReluConstraintTestSuite_test_get_cost_function_component() : CxxTest::RealTestDescription( Tests_ReluConstraintTestSuite, suiteDescription_ReluConstraintTestSuite, 1450, "test_get_cost_function_component" ) {}
 void runTest() { suite_ReluConstraintTestSuite.test_get_cost_function_component(); }
} testDescription_ReluConstraintTestSuite_test_get_cost_function_component;

static class TestDescription_ReluConstraintTestSuite_test_get_phase_in_assignment : public CxxTest::RealTestDescription {
public:
 TestDescription_ReluConstraintTestSuite_test_get_phase_in_assignment() : CxxTest::RealTestDescription( Tests_ReluConstraintTestSuite, suiteDescription_ReluConstraintTestSuite, 1531, "test_get_phase_in_assignment" ) {}
 void runTest() { suite_ReluConstraintTestSuite.test_get_phase_in_assignment(); }
} testDescription_ReluConstraintTestSuite_test_get_phase_in_assignment;

#include <cxxtest/Root.cpp>
