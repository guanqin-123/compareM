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
#include "/home/guanqin/compareM/Marabou/src/engine/tests/Test_SignConstraint.h"

static SignConstraintTestSuite suite_SignConstraintTestSuite;

static CxxTest::List Tests_SignConstraintTestSuite = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_SignConstraintTestSuite( "/home/guanqin/compareM/Marabou/src/engine/tests/Test_SignConstraint.h", 46, "SignConstraintTestSuite", suite_SignConstraintTestSuite, Tests_SignConstraintTestSuite );

static class TestDescription_SignConstraintTestSuite_test_sign_constraint : public CxxTest::RealTestDescription {
public:
 TestDescription_SignConstraintTestSuite_test_sign_constraint() : CxxTest::RealTestDescription( Tests_SignConstraintTestSuite, suiteDescription_SignConstraintTestSuite, 61, "test_sign_constraint" ) {}
 void runTest() { suite_SignConstraintTestSuite.test_sign_constraint(); }
} testDescription_SignConstraintTestSuite_test_sign_constraint;

static class TestDescription_SignConstraintTestSuite_test_sign_fixes : public CxxTest::RealTestDescription {
public:
 TestDescription_SignConstraintTestSuite_test_sign_fixes() : CxxTest::RealTestDescription( Tests_SignConstraintTestSuite, suiteDescription_SignConstraintTestSuite, 160, "test_sign_fixes" ) {}
 void runTest() { suite_SignConstraintTestSuite.test_sign_fixes(); }
} testDescription_SignConstraintTestSuite_test_sign_fixes;

static class TestDescription_SignConstraintTestSuite_test_sign_case_splits : public CxxTest::RealTestDescription {
public:
 TestDescription_SignConstraintTestSuite_test_sign_case_splits() : CxxTest::RealTestDescription( Tests_SignConstraintTestSuite, suiteDescription_SignConstraintTestSuite, 218, "test_sign_case_splits" ) {}
 void runTest() { suite_SignConstraintTestSuite.test_sign_case_splits(); }
} testDescription_SignConstraintTestSuite_test_sign_case_splits;

static class TestDescription_SignConstraintTestSuite_test_register_as_watcher : public CxxTest::RealTestDescription {
public:
 TestDescription_SignConstraintTestSuite_test_register_as_watcher() : CxxTest::RealTestDescription( Tests_SignConstraintTestSuite, suiteDescription_SignConstraintTestSuite, 296, "test_register_as_watcher" ) {}
 void runTest() { suite_SignConstraintTestSuite.test_register_as_watcher(); }
} testDescription_SignConstraintTestSuite_test_register_as_watcher;

static class TestDescription_SignConstraintTestSuite_test_case_splits_after_fixed_to_positive : public CxxTest::RealTestDescription {
public:
 TestDescription_SignConstraintTestSuite_test_case_splits_after_fixed_to_positive() : CxxTest::RealTestDescription( Tests_SignConstraintTestSuite, suiteDescription_SignConstraintTestSuite, 326, "test_case_splits_after_fixed_to_positive" ) {}
 void runTest() { suite_SignConstraintTestSuite.test_case_splits_after_fixed_to_positive(); }
} testDescription_SignConstraintTestSuite_test_case_splits_after_fixed_to_positive;

static class TestDescription_SignConstraintTestSuite_test_case_splits_after_fixed_to_negative : public CxxTest::RealTestDescription {
public:
 TestDescription_SignConstraintTestSuite_test_case_splits_after_fixed_to_negative() : CxxTest::RealTestDescription( Tests_SignConstraintTestSuite, suiteDescription_SignConstraintTestSuite, 368, "test_case_splits_after_fixed_to_negative" ) {}
 void runTest() { suite_SignConstraintTestSuite.test_case_splits_after_fixed_to_negative(); }
} testDescription_SignConstraintTestSuite_test_case_splits_after_fixed_to_negative;

static class TestDescription_SignConstraintTestSuite_test_constraint_phase_gets_fixed : public CxxTest::RealTestDescription {
public:
 TestDescription_SignConstraintTestSuite_test_constraint_phase_gets_fixed() : CxxTest::RealTestDescription( Tests_SignConstraintTestSuite, suiteDescription_SignConstraintTestSuite, 411, "test_constraint_phase_gets_fixed" ) {}
 void runTest() { suite_SignConstraintTestSuite.test_constraint_phase_gets_fixed(); }
} testDescription_SignConstraintTestSuite_test_constraint_phase_gets_fixed;

static class TestDescription_SignConstraintTestSuite_test_valid_split_sign_phase_fixed_to_positive : public CxxTest::RealTestDescription {
public:
 TestDescription_SignConstraintTestSuite_test_valid_split_sign_phase_fixed_to_positive() : CxxTest::RealTestDescription( Tests_SignConstraintTestSuite, suiteDescription_SignConstraintTestSuite, 522, "test_valid_split_sign_phase_fixed_to_positive" ) {}
 void runTest() { suite_SignConstraintTestSuite.test_valid_split_sign_phase_fixed_to_positive(); }
} testDescription_SignConstraintTestSuite_test_valid_split_sign_phase_fixed_to_positive;

static class TestDescription_SignConstraintTestSuite_test_valid_split_sign_phase_fixed_to_negative : public CxxTest::RealTestDescription {
public:
 TestDescription_SignConstraintTestSuite_test_valid_split_sign_phase_fixed_to_negative() : CxxTest::RealTestDescription( Tests_SignConstraintTestSuite, suiteDescription_SignConstraintTestSuite, 568, "test_valid_split_sign_phase_fixed_to_negative" ) {}
 void runTest() { suite_SignConstraintTestSuite.test_valid_split_sign_phase_fixed_to_negative(); }
} testDescription_SignConstraintTestSuite_test_valid_split_sign_phase_fixed_to_negative;

static class TestDescription_SignConstraintTestSuite_test_sign_duplicate_and_restore : public CxxTest::RealTestDescription {
public:
 TestDescription_SignConstraintTestSuite_test_sign_duplicate_and_restore() : CxxTest::RealTestDescription( Tests_SignConstraintTestSuite, suiteDescription_SignConstraintTestSuite, 617, "test_sign_duplicate_and_restore" ) {}
 void runTest() { suite_SignConstraintTestSuite.test_sign_duplicate_and_restore(); }
} testDescription_SignConstraintTestSuite_test_sign_duplicate_and_restore;

static class TestDescription_SignConstraintTestSuite_test_eliminate_variable_active : public CxxTest::RealTestDescription {
public:
 TestDescription_SignConstraintTestSuite_test_eliminate_variable_active() : CxxTest::RealTestDescription( Tests_SignConstraintTestSuite, suiteDescription_SignConstraintTestSuite, 660, "test_eliminate_variable_active" ) {}
 void runTest() { suite_SignConstraintTestSuite.test_eliminate_variable_active(); }
} testDescription_SignConstraintTestSuite_test_eliminate_variable_active;

static class TestDescription_SignConstraintTestSuite_test_sign_entailed_tightenings : public CxxTest::RealTestDescription {
public:
 TestDescription_SignConstraintTestSuite_test_sign_entailed_tightenings() : CxxTest::RealTestDescription( Tests_SignConstraintTestSuite, suiteDescription_SignConstraintTestSuite, 676, "test_sign_entailed_tightenings" ) {}
 void runTest() { suite_SignConstraintTestSuite.test_sign_entailed_tightenings(); }
} testDescription_SignConstraintTestSuite_test_sign_entailed_tightenings;

static class TestDescription_SignConstraintTestSuite_test_notify_bounds : public CxxTest::RealTestDescription {
public:
 TestDescription_SignConstraintTestSuite_test_notify_bounds() : CxxTest::RealTestDescription( Tests_SignConstraintTestSuite, suiteDescription_SignConstraintTestSuite, 835, "test_notify_bounds" ) {}
 void runTest() { suite_SignConstraintTestSuite.test_notify_bounds(); }
} testDescription_SignConstraintTestSuite_test_notify_bounds;

static class TestDescription_SignConstraintTestSuite_test_serialize_and_unserialize : public CxxTest::RealTestDescription {
public:
 TestDescription_SignConstraintTestSuite_test_serialize_and_unserialize() : CxxTest::RealTestDescription( Tests_SignConstraintTestSuite, suiteDescription_SignConstraintTestSuite, 964, "test_serialize_and_unserialize" ) {}
 void runTest() { suite_SignConstraintTestSuite.test_serialize_and_unserialize(); }
} testDescription_SignConstraintTestSuite_test_serialize_and_unserialize;

static class TestDescription_SignConstraintTestSuite_test_polarity : public CxxTest::RealTestDescription {
public:
 TestDescription_SignConstraintTestSuite_test_polarity() : CxxTest::RealTestDescription( Tests_SignConstraintTestSuite, suiteDescription_SignConstraintTestSuite, 979, "test_polarity" ) {}
 void runTest() { suite_SignConstraintTestSuite.test_polarity(); }
} testDescription_SignConstraintTestSuite_test_polarity;

static class TestDescription_SignConstraintTestSuite_test_initialization_of_CDOs : public CxxTest::RealTestDescription {
public:
 TestDescription_SignConstraintTestSuite_test_initialization_of_CDOs() : CxxTest::RealTestDescription( Tests_SignConstraintTestSuite, suiteDescription_SignConstraintTestSuite, 1038, "test_initialization_of_CDOs" ) {}
 void runTest() { suite_SignConstraintTestSuite.test_initialization_of_CDOs(); }
} testDescription_SignConstraintTestSuite_test_initialization_of_CDOs;

static class TestDescription_SignConstraintTestSuite_test_sign_get_cases : public CxxTest::RealTestDescription {
public:
 TestDescription_SignConstraintTestSuite_test_sign_get_cases() : CxxTest::RealTestDescription( Tests_SignConstraintTestSuite, suiteDescription_SignConstraintTestSuite, 1073, "test_sign_get_cases" ) {}
 void runTest() { suite_SignConstraintTestSuite.test_sign_get_cases(); }
} testDescription_SignConstraintTestSuite_test_sign_get_cases;

static class TestDescription_SignConstraintTestSuite_test_sign_context_dependent_state : public CxxTest::RealTestDescription {
public:
 TestDescription_SignConstraintTestSuite_test_sign_context_dependent_state() : CxxTest::RealTestDescription( Tests_SignConstraintTestSuite, suiteDescription_SignConstraintTestSuite, 1092, "test_sign_context_dependent_state" ) {}
 void runTest() { suite_SignConstraintTestSuite.test_sign_context_dependent_state(); }
} testDescription_SignConstraintTestSuite_test_sign_context_dependent_state;

static class TestDescription_SignConstraintTestSuite_test_get_cost_function_component : public CxxTest::RealTestDescription {
public:
 TestDescription_SignConstraintTestSuite_test_get_cost_function_component() : CxxTest::RealTestDescription( Tests_SignConstraintTestSuite, suiteDescription_SignConstraintTestSuite, 1119, "test_get_cost_function_component" ) {}
 void runTest() { suite_SignConstraintTestSuite.test_get_cost_function_component(); }
} testDescription_SignConstraintTestSuite_test_get_cost_function_component;

static class TestDescription_SignConstraintTestSuite_test_get_phase_in_assignment : public CxxTest::RealTestDescription {
public:
 TestDescription_SignConstraintTestSuite_test_get_phase_in_assignment() : CxxTest::RealTestDescription( Tests_SignConstraintTestSuite, suiteDescription_SignConstraintTestSuite, 1205, "test_get_phase_in_assignment" ) {}
 void runTest() { suite_SignConstraintTestSuite.test_get_phase_in_assignment(); }
} testDescription_SignConstraintTestSuite_test_get_phase_in_assignment;

static class TestDescription_SignConstraintTestSuite_test_add_auxiliary_equations : public CxxTest::RealTestDescription {
public:
 TestDescription_SignConstraintTestSuite_test_add_auxiliary_equations() : CxxTest::RealTestDescription( Tests_SignConstraintTestSuite, suiteDescription_SignConstraintTestSuite, 1227, "test_add_auxiliary_equations" ) {}
 void runTest() { suite_SignConstraintTestSuite.test_add_auxiliary_equations(); }
} testDescription_SignConstraintTestSuite_test_add_auxiliary_equations;

#include <cxxtest/Root.cpp>
