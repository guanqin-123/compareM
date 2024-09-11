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
#include "/home/guanqin/compareM/Marabou/src/engine/tests/Test_DisjunctionConstraint.h"

static DisjunctionConstraintTestSuite suite_DisjunctionConstraintTestSuite;

static CxxTest::List Tests_DisjunctionConstraintTestSuite = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_DisjunctionConstraintTestSuite( "/home/guanqin/compareM/Marabou/src/engine/tests/Test_DisjunctionConstraint.h", 45, "DisjunctionConstraintTestSuite", suite_DisjunctionConstraintTestSuite, Tests_DisjunctionConstraintTestSuite );

static class TestDescription_DisjunctionConstraintTestSuite_test_get_case_splits : public CxxTest::RealTestDescription {
public:
 TestDescription_DisjunctionConstraintTestSuite_test_get_case_splits() : CxxTest::RealTestDescription( Tests_DisjunctionConstraintTestSuite, suiteDescription_DisjunctionConstraintTestSuite, 95, "test_get_case_splits" ) {}
 void runTest() { suite_DisjunctionConstraintTestSuite.test_get_case_splits(); }
} testDescription_DisjunctionConstraintTestSuite_test_get_case_splits;

static class TestDescription_DisjunctionConstraintTestSuite_test_getParticipatingVariables : public CxxTest::RealTestDescription {
public:
 TestDescription_DisjunctionConstraintTestSuite_test_getParticipatingVariables() : CxxTest::RealTestDescription( Tests_DisjunctionConstraintTestSuite, suiteDescription_DisjunctionConstraintTestSuite, 107, "test_getParticipatingVariables" ) {}
 void runTest() { suite_DisjunctionConstraintTestSuite.test_getParticipatingVariables(); }
} testDescription_DisjunctionConstraintTestSuite_test_getParticipatingVariables;

static class TestDescription_DisjunctionConstraintTestSuite_test_satisfied : public CxxTest::RealTestDescription {
public:
 TestDescription_DisjunctionConstraintTestSuite_test_satisfied() : CxxTest::RealTestDescription( Tests_DisjunctionConstraintTestSuite, suiteDescription_DisjunctionConstraintTestSuite, 140, "test_satisfied" ) {}
 void runTest() { suite_DisjunctionConstraintTestSuite.test_satisfied(); }
} testDescription_DisjunctionConstraintTestSuite_test_satisfied;

static class TestDescription_DisjunctionConstraintTestSuite_test_phase_fixed : public CxxTest::RealTestDescription {
public:
 TestDescription_DisjunctionConstraintTestSuite_test_phase_fixed() : CxxTest::RealTestDescription( Tests_DisjunctionConstraintTestSuite, suiteDescription_DisjunctionConstraintTestSuite, 189, "test_phase_fixed" ) {}
 void runTest() { suite_DisjunctionConstraintTestSuite.test_phase_fixed(); }
} testDescription_DisjunctionConstraintTestSuite_test_phase_fixed;

static class TestDescription_DisjunctionConstraintTestSuite_test_phase_fixed_with_bound_manager : public CxxTest::RealTestDescription {
public:
 TestDescription_DisjunctionConstraintTestSuite_test_phase_fixed_with_bound_manager() : CxxTest::RealTestDescription( Tests_DisjunctionConstraintTestSuite, suiteDescription_DisjunctionConstraintTestSuite, 249, "test_phase_fixed_with_bound_manager" ) {}
 void runTest() { suite_DisjunctionConstraintTestSuite.test_phase_fixed_with_bound_manager(); }
} testDescription_DisjunctionConstraintTestSuite_test_phase_fixed_with_bound_manager;

static class TestDescription_DisjunctionConstraintTestSuite_test_initialization_of_CDOs : public CxxTest::RealTestDescription {
public:
 TestDescription_DisjunctionConstraintTestSuite_test_initialization_of_CDOs() : CxxTest::RealTestDescription( Tests_DisjunctionConstraintTestSuite, suiteDescription_DisjunctionConstraintTestSuite, 317, "test_initialization_of_CDOs" ) {}
 void runTest() { suite_DisjunctionConstraintTestSuite.test_initialization_of_CDOs(); }
} testDescription_DisjunctionConstraintTestSuite_test_initialization_of_CDOs;

static class TestDescription_DisjunctionConstraintTestSuite_test_disjunction_get_cases : public CxxTest::RealTestDescription {
public:
 TestDescription_DisjunctionConstraintTestSuite_test_disjunction_get_cases() : CxxTest::RealTestDescription( Tests_DisjunctionConstraintTestSuite, suiteDescription_DisjunctionConstraintTestSuite, 354, "test_disjunction_get_cases" ) {}
 void runTest() { suite_DisjunctionConstraintTestSuite.test_disjunction_get_cases(); }
} testDescription_DisjunctionConstraintTestSuite_test_disjunction_get_cases;

static class TestDescription_DisjunctionConstraintTestSuite_test_disjunction_context_dependent_state : public CxxTest::RealTestDescription {
public:
 TestDescription_DisjunctionConstraintTestSuite_test_disjunction_context_dependent_state() : CxxTest::RealTestDescription( Tests_DisjunctionConstraintTestSuite, suiteDescription_DisjunctionConstraintTestSuite, 375, "test_disjunction_context_dependent_state" ) {}
 void runTest() { suite_DisjunctionConstraintTestSuite.test_disjunction_context_dependent_state(); }
} testDescription_DisjunctionConstraintTestSuite_test_disjunction_context_dependent_state;

static class TestDescription_DisjunctionConstraintTestSuite_test_disjunction_make_all_disjuncts_bounds : public CxxTest::RealTestDescription {
public:
 TestDescription_DisjunctionConstraintTestSuite_test_disjunction_make_all_disjuncts_bounds() : CxxTest::RealTestDescription( Tests_DisjunctionConstraintTestSuite, suiteDescription_DisjunctionConstraintTestSuite, 461, "test_disjunction_make_all_disjuncts_bounds" ) {}
 void runTest() { suite_DisjunctionConstraintTestSuite.test_disjunction_make_all_disjuncts_bounds(); }
} testDescription_DisjunctionConstraintTestSuite_test_disjunction_make_all_disjuncts_bounds;

static class TestDescription_DisjunctionConstraintTestSuite_test_serialize_and_unserialize : public CxxTest::RealTestDescription {
public:
 TestDescription_DisjunctionConstraintTestSuite_test_serialize_and_unserialize() : CxxTest::RealTestDescription( Tests_DisjunctionConstraintTestSuite, suiteDescription_DisjunctionConstraintTestSuite, 604, "test_serialize_and_unserialize" ) {}
 void runTest() { suite_DisjunctionConstraintTestSuite.test_serialize_and_unserialize(); }
} testDescription_DisjunctionConstraintTestSuite_test_serialize_and_unserialize;

static class TestDescription_DisjunctionConstraintTestSuite_test_get_entailed_tightenings : public CxxTest::RealTestDescription {
public:
 TestDescription_DisjunctionConstraintTestSuite_test_get_entailed_tightenings() : CxxTest::RealTestDescription( Tests_DisjunctionConstraintTestSuite, suiteDescription_DisjunctionConstraintTestSuite, 626, "test_get_entailed_tightenings" ) {}
 void runTest() { suite_DisjunctionConstraintTestSuite.test_get_entailed_tightenings(); }
} testDescription_DisjunctionConstraintTestSuite_test_get_entailed_tightenings;

#include <cxxtest/Root.cpp>
