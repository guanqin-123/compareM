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
#include "/home/guanqin/compareM/Marabou/src/engine/tests/Test_LeakyReluConstraint.h"

static LeakyReluConstraintTestSuite suite_LeakyReluConstraintTestSuite;

static CxxTest::List Tests_LeakyReluConstraintTestSuite = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_LeakyReluConstraintTestSuite( "/home/guanqin/compareM/Marabou/src/engine/tests/Test_LeakyReluConstraint.h", 49, "LeakyReluConstraintTestSuite", suite_LeakyReluConstraintTestSuite, Tests_LeakyReluConstraintTestSuite );

static class TestDescription_LeakyReluConstraintTestSuite_test_leaky_relu_constraint : public CxxTest::RealTestDescription {
public:
 TestDescription_LeakyReluConstraintTestSuite_test_leaky_relu_constraint() : CxxTest::RealTestDescription( Tests_LeakyReluConstraintTestSuite, suiteDescription_LeakyReluConstraintTestSuite, 65, "test_leaky_relu_constraint" ) {}
 void runTest() { suite_LeakyReluConstraintTestSuite.test_leaky_relu_constraint(); }
} testDescription_LeakyReluConstraintTestSuite_test_leaky_relu_constraint;

static class TestDescription_LeakyReluConstraintTestSuite_test_leaky_relu_fixes : public CxxTest::RealTestDescription {
public:
 TestDescription_LeakyReluConstraintTestSuite_test_leaky_relu_fixes() : CxxTest::RealTestDescription( Tests_LeakyReluConstraintTestSuite, suiteDescription_LeakyReluConstraintTestSuite, 155, "test_leaky_relu_fixes" ) {}
 void runTest() { suite_LeakyReluConstraintTestSuite.test_leaky_relu_fixes(); }
} testDescription_LeakyReluConstraintTestSuite_test_leaky_relu_fixes;

static class TestDescription_LeakyReluConstraintTestSuite_test_leaky_relu_case_splits : public CxxTest::RealTestDescription {
public:
 TestDescription_LeakyReluConstraintTestSuite_test_leaky_relu_case_splits() : CxxTest::RealTestDescription( Tests_LeakyReluConstraintTestSuite, suiteDescription_LeakyReluConstraintTestSuite, 212, "test_leaky_relu_case_splits" ) {}
 void runTest() { suite_LeakyReluConstraintTestSuite.test_leaky_relu_case_splits(); }
} testDescription_LeakyReluConstraintTestSuite_test_leaky_relu_case_splits;

static class TestDescription_LeakyReluConstraintTestSuite_test_leaky_relu_case_splits_with_aux_var : public CxxTest::RealTestDescription {
public:
 TestDescription_LeakyReluConstraintTestSuite_test_leaky_relu_case_splits_with_aux_var() : CxxTest::RealTestDescription( Tests_LeakyReluConstraintTestSuite, suiteDescription_LeakyReluConstraintTestSuite, 317, "test_leaky_relu_case_splits_with_aux_var" ) {}
 void runTest() { suite_LeakyReluConstraintTestSuite.test_leaky_relu_case_splits_with_aux_var(); }
} testDescription_LeakyReluConstraintTestSuite_test_leaky_relu_case_splits_with_aux_var;

static class TestDescription_LeakyReluConstraintTestSuite_test_register_as_watcher : public CxxTest::RealTestDescription {
public:
 TestDescription_LeakyReluConstraintTestSuite_test_register_as_watcher() : CxxTest::RealTestDescription( Tests_LeakyReluConstraintTestSuite, suiteDescription_LeakyReluConstraintTestSuite, 441, "test_register_as_watcher" ) {}
 void runTest() { suite_LeakyReluConstraintTestSuite.test_register_as_watcher(); }
} testDescription_LeakyReluConstraintTestSuite_test_register_as_watcher;

static class TestDescription_LeakyReluConstraintTestSuite_test_valid_split_relu_phase_fixed_to_active : public CxxTest::RealTestDescription {
public:
 TestDescription_LeakyReluConstraintTestSuite_test_valid_split_relu_phase_fixed_to_active() : CxxTest::RealTestDescription( Tests_LeakyReluConstraintTestSuite, suiteDescription_LeakyReluConstraintTestSuite, 471, "test_valid_split_relu_phase_fixed_to_active" ) {}
 void runTest() { suite_LeakyReluConstraintTestSuite.test_valid_split_relu_phase_fixed_to_active(); }
} testDescription_LeakyReluConstraintTestSuite_test_valid_split_relu_phase_fixed_to_active;

static class TestDescription_LeakyReluConstraintTestSuite_test_valid_split_relu_phase_fixed_to_inactive : public CxxTest::RealTestDescription {
public:
 TestDescription_LeakyReluConstraintTestSuite_test_valid_split_relu_phase_fixed_to_inactive() : CxxTest::RealTestDescription( Tests_LeakyReluConstraintTestSuite, suiteDescription_LeakyReluConstraintTestSuite, 492, "test_valid_split_relu_phase_fixed_to_inactive" ) {}
 void runTest() { suite_LeakyReluConstraintTestSuite.test_valid_split_relu_phase_fixed_to_inactive(); }
} testDescription_LeakyReluConstraintTestSuite_test_valid_split_relu_phase_fixed_to_inactive;

static class TestDescription_LeakyReluConstraintTestSuite_test_leaky_relu_entailed_tightenings : public CxxTest::RealTestDescription {
public:
 TestDescription_LeakyReluConstraintTestSuite_test_leaky_relu_entailed_tightenings() : CxxTest::RealTestDescription( Tests_LeakyReluConstraintTestSuite, suiteDescription_LeakyReluConstraintTestSuite, 513, "test_leaky_relu_entailed_tightenings" ) {}
 void runTest() { suite_LeakyReluConstraintTestSuite.test_leaky_relu_entailed_tightenings(); }
} testDescription_LeakyReluConstraintTestSuite_test_leaky_relu_entailed_tightenings;

static class TestDescription_LeakyReluConstraintTestSuite_test_leaky_relu_duplicate_and_restore : public CxxTest::RealTestDescription {
public:
 TestDescription_LeakyReluConstraintTestSuite_test_leaky_relu_duplicate_and_restore() : CxxTest::RealTestDescription( Tests_LeakyReluConstraintTestSuite, suiteDescription_LeakyReluConstraintTestSuite, 581, "test_leaky_relu_duplicate_and_restore" ) {}
 void runTest() { suite_LeakyReluConstraintTestSuite.test_leaky_relu_duplicate_and_restore(); }
} testDescription_LeakyReluConstraintTestSuite_test_leaky_relu_duplicate_and_restore;

static class TestDescription_LeakyReluConstraintTestSuite_test_eliminate_variable_active : public CxxTest::RealTestDescription {
public:
 TestDescription_LeakyReluConstraintTestSuite_test_eliminate_variable_active() : CxxTest::RealTestDescription( Tests_LeakyReluConstraintTestSuite, suiteDescription_LeakyReluConstraintTestSuite, 611, "test_eliminate_variable_active" ) {}
 void runTest() { suite_LeakyReluConstraintTestSuite.test_eliminate_variable_active(); }
} testDescription_LeakyReluConstraintTestSuite_test_eliminate_variable_active;

static class TestDescription_LeakyReluConstraintTestSuite_test_serialize_and_unserialize : public CxxTest::RealTestDescription {
public:
 TestDescription_LeakyReluConstraintTestSuite_test_serialize_and_unserialize() : CxxTest::RealTestDescription( Tests_LeakyReluConstraintTestSuite, suiteDescription_LeakyReluConstraintTestSuite, 627, "test_serialize_and_unserialize" ) {}
 void runTest() { suite_LeakyReluConstraintTestSuite.test_serialize_and_unserialize(); }
} testDescription_LeakyReluConstraintTestSuite_test_serialize_and_unserialize;

static class TestDescription_LeakyReluConstraintTestSuite_test_notify_bounds : public CxxTest::RealTestDescription {
public:
 TestDescription_LeakyReluConstraintTestSuite_test_notify_bounds() : CxxTest::RealTestDescription( Tests_LeakyReluConstraintTestSuite, suiteDescription_LeakyReluConstraintTestSuite, 693, "test_notify_bounds" ) {}
 void runTest() { suite_LeakyReluConstraintTestSuite.test_notify_bounds(); }
} testDescription_LeakyReluConstraintTestSuite_test_notify_bounds;

static class TestDescription_LeakyReluConstraintTestSuite_test_polarity : public CxxTest::RealTestDescription {
public:
 TestDescription_LeakyReluConstraintTestSuite_test_polarity() : CxxTest::RealTestDescription( Tests_LeakyReluConstraintTestSuite, suiteDescription_LeakyReluConstraintTestSuite, 761, "test_polarity" ) {}
 void runTest() { suite_LeakyReluConstraintTestSuite.test_polarity(); }
} testDescription_LeakyReluConstraintTestSuite_test_polarity;

static class TestDescription_LeakyReluConstraintTestSuite_test_leaky_relu_get_cases : public CxxTest::RealTestDescription {
public:
 TestDescription_LeakyReluConstraintTestSuite_test_leaky_relu_get_cases() : CxxTest::RealTestDescription( Tests_LeakyReluConstraintTestSuite, suiteDescription_LeakyReluConstraintTestSuite, 843, "test_leaky_relu_get_cases" ) {}
 void runTest() { suite_LeakyReluConstraintTestSuite.test_leaky_relu_get_cases(); }
} testDescription_LeakyReluConstraintTestSuite_test_leaky_relu_get_cases;

static class TestDescription_LeakyReluConstraintTestSuite_test_leaky_relu_context_dependent_state : public CxxTest::RealTestDescription {
public:
 TestDescription_LeakyReluConstraintTestSuite_test_leaky_relu_context_dependent_state() : CxxTest::RealTestDescription( Tests_LeakyReluConstraintTestSuite, suiteDescription_LeakyReluConstraintTestSuite, 865, "test_leaky_relu_context_dependent_state" ) {}
 void runTest() { suite_LeakyReluConstraintTestSuite.test_leaky_relu_context_dependent_state(); }
} testDescription_LeakyReluConstraintTestSuite_test_leaky_relu_context_dependent_state;

static class TestDescription_LeakyReluConstraintTestSuite_test_initialization_of_CDOs : public CxxTest::RealTestDescription {
public:
 TestDescription_LeakyReluConstraintTestSuite_test_initialization_of_CDOs() : CxxTest::RealTestDescription( Tests_LeakyReluConstraintTestSuite, suiteDescription_LeakyReluConstraintTestSuite, 897, "test_initialization_of_CDOs" ) {}
 void runTest() { suite_LeakyReluConstraintTestSuite.test_initialization_of_CDOs(); }
} testDescription_LeakyReluConstraintTestSuite_test_initialization_of_CDOs;

static class TestDescription_LeakyReluConstraintTestSuite_test_lazy_backtracking_of_CDOs : public CxxTest::RealTestDescription {
public:
 TestDescription_LeakyReluConstraintTestSuite_test_lazy_backtracking_of_CDOs() : CxxTest::RealTestDescription( Tests_LeakyReluConstraintTestSuite, suiteDescription_LeakyReluConstraintTestSuite, 935, "test_lazy_backtracking_of_CDOs" ) {}
 void runTest() { suite_LeakyReluConstraintTestSuite.test_lazy_backtracking_of_CDOs(); }
} testDescription_LeakyReluConstraintTestSuite_test_lazy_backtracking_of_CDOs;

#include <cxxtest/Root.cpp>
