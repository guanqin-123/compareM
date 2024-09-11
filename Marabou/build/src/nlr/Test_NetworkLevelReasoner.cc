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
#include "/home/guanqin/compareM/Marabou/src/nlr/tests/Test_NetworkLevelReasoner.h"

static NetworkLevelReasonerTestSuite suite_NetworkLevelReasonerTestSuite;

static CxxTest::List Tests_NetworkLevelReasonerTestSuite = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_NetworkLevelReasonerTestSuite( "/home/guanqin/compareM/Marabou/src/nlr/tests/Test_NetworkLevelReasoner.h", 32, "NetworkLevelReasonerTestSuite", suite_NetworkLevelReasonerTestSuite, Tests_NetworkLevelReasonerTestSuite );

static class TestDescription_NetworkLevelReasonerTestSuite_test_evaluate_relus : public CxxTest::RealTestDescription {
public:
 TestDescription_NetworkLevelReasonerTestSuite_test_evaluate_relus() : CxxTest::RealTestDescription( Tests_NetworkLevelReasonerTestSuite, suiteDescription_NetworkLevelReasonerTestSuite, 191, "test_evaluate_relus" ) {}
 void runTest() { suite_NetworkLevelReasonerTestSuite.test_evaluate_relus(); }
} testDescription_NetworkLevelReasonerTestSuite_test_evaluate_relus;

static class TestDescription_NetworkLevelReasonerTestSuite_test_evaluate_sigmoids : public CxxTest::RealTestDescription {
public:
 TestDescription_NetworkLevelReasonerTestSuite_test_evaluate_sigmoids() : CxxTest::RealTestDescription( Tests_NetworkLevelReasonerTestSuite, suiteDescription_NetworkLevelReasonerTestSuite, 228, "test_evaluate_sigmoids" ) {}
 void runTest() { suite_NetworkLevelReasonerTestSuite.test_evaluate_sigmoids(); }
} testDescription_NetworkLevelReasonerTestSuite_test_evaluate_sigmoids;

static class TestDescription_NetworkLevelReasonerTestSuite_test_evaluate_non_consecutive_layers : public CxxTest::RealTestDescription {
public:
 TestDescription_NetworkLevelReasonerTestSuite_test_evaluate_non_consecutive_layers() : CxxTest::RealTestDescription( Tests_NetworkLevelReasonerTestSuite, suiteDescription_NetworkLevelReasonerTestSuite, 265, "test_evaluate_non_consecutive_layers" ) {}
 void runTest() { suite_NetworkLevelReasonerTestSuite.test_evaluate_non_consecutive_layers(); }
} testDescription_NetworkLevelReasonerTestSuite_test_evaluate_non_consecutive_layers;

static class TestDescription_NetworkLevelReasonerTestSuite_test_evaluate_relus_and_abs : public CxxTest::RealTestDescription {
public:
 TestDescription_NetworkLevelReasonerTestSuite_test_evaluate_relus_and_abs() : CxxTest::RealTestDescription( Tests_NetworkLevelReasonerTestSuite, suiteDescription_NetworkLevelReasonerTestSuite, 334, "test_evaluate_relus_and_abs" ) {}
 void runTest() { suite_NetworkLevelReasonerTestSuite.test_evaluate_relus_and_abs(); }
} testDescription_NetworkLevelReasonerTestSuite_test_evaluate_relus_and_abs;

static class TestDescription_NetworkLevelReasonerTestSuite_test_store_into_other : public CxxTest::RealTestDescription {
public:
 TestDescription_NetworkLevelReasonerTestSuite_test_store_into_other() : CxxTest::RealTestDescription( Tests_NetworkLevelReasonerTestSuite, suiteDescription_NetworkLevelReasonerTestSuite, 398, "test_store_into_other" ) {}
 void runTest() { suite_NetworkLevelReasonerTestSuite.test_store_into_other(); }
} testDescription_NetworkLevelReasonerTestSuite_test_store_into_other;

static class TestDescription_NetworkLevelReasonerTestSuite_test_store_into_other_with_sigmoids : public CxxTest::RealTestDescription {
public:
 TestDescription_NetworkLevelReasonerTestSuite_test_store_into_other_with_sigmoids() : CxxTest::RealTestDescription( Tests_NetworkLevelReasonerTestSuite, suiteDescription_NetworkLevelReasonerTestSuite, 445, "test_store_into_other_with_sigmoids" ) {}
 void runTest() { suite_NetworkLevelReasonerTestSuite.test_store_into_other_with_sigmoids(); }
} testDescription_NetworkLevelReasonerTestSuite_test_store_into_other_with_sigmoids;

static class TestDescription_NetworkLevelReasonerTestSuite_test_interval_arithmetic_bound_propagation_relu_constraints : public CxxTest::RealTestDescription {
public:
 TestDescription_NetworkLevelReasonerTestSuite_test_interval_arithmetic_bound_propagation_relu_constraints() : CxxTest::RealTestDescription( Tests_NetworkLevelReasonerTestSuite, suiteDescription_NetworkLevelReasonerTestSuite, 480, "test_interval_arithmetic_bound_propagation_relu_constraints" ) {}
 void runTest() { suite_NetworkLevelReasonerTestSuite.test_interval_arithmetic_bound_propagation_relu_constraints(); }
} testDescription_NetworkLevelReasonerTestSuite_test_interval_arithmetic_bound_propagation_relu_constraints;

static class TestDescription_NetworkLevelReasonerTestSuite_test_interval_arithmetic_bound_propagation_abs_constraints : public CxxTest::RealTestDescription {
public:
 TestDescription_NetworkLevelReasonerTestSuite_test_interval_arithmetic_bound_propagation_abs_constraints() : CxxTest::RealTestDescription( Tests_NetworkLevelReasonerTestSuite, suiteDescription_NetworkLevelReasonerTestSuite, 619, "test_interval_arithmetic_bound_propagation_abs_constraints" ) {}
 void runTest() { suite_NetworkLevelReasonerTestSuite.test_interval_arithmetic_bound_propagation_abs_constraints(); }
} testDescription_NetworkLevelReasonerTestSuite_test_interval_arithmetic_bound_propagation_abs_constraints;

static class TestDescription_NetworkLevelReasonerTestSuite_test_sbt_relus_all_active : public CxxTest::RealTestDescription {
public:
 TestDescription_NetworkLevelReasonerTestSuite_test_sbt_relus_all_active() : CxxTest::RealTestDescription( Tests_NetworkLevelReasonerTestSuite, suiteDescription_NetworkLevelReasonerTestSuite, 888, "test_sbt_relus_all_active" ) {}
 void runTest() { suite_NetworkLevelReasonerTestSuite.test_sbt_relus_all_active(); }
} testDescription_NetworkLevelReasonerTestSuite_test_sbt_relus_all_active;

static class TestDescription_NetworkLevelReasonerTestSuite_test_sbt_relus_active_and_inactive : public CxxTest::RealTestDescription {
public:
 TestDescription_NetworkLevelReasonerTestSuite_test_sbt_relus_active_and_inactive() : CxxTest::RealTestDescription( Tests_NetworkLevelReasonerTestSuite, suiteDescription_NetworkLevelReasonerTestSuite, 957, "test_sbt_relus_active_and_inactive" ) {}
 void runTest() { suite_NetworkLevelReasonerTestSuite.test_sbt_relus_active_and_inactive(); }
} testDescription_NetworkLevelReasonerTestSuite_test_sbt_relus_active_and_inactive;

static class TestDescription_NetworkLevelReasonerTestSuite_test_sbt_relus_active_and_not_fixed : public CxxTest::RealTestDescription {
public:
 TestDescription_NetworkLevelReasonerTestSuite_test_sbt_relus_active_and_not_fixed() : CxxTest::RealTestDescription( Tests_NetworkLevelReasonerTestSuite, suiteDescription_NetworkLevelReasonerTestSuite, 1030, "test_sbt_relus_active_and_not_fixed" ) {}
 void runTest() { suite_NetworkLevelReasonerTestSuite.test_sbt_relus_active_and_not_fixed(); }
} testDescription_NetworkLevelReasonerTestSuite_test_sbt_relus_active_and_not_fixed;

static class TestDescription_NetworkLevelReasonerTestSuite_test_sbt_relus_active_and_externally_fixed : public CxxTest::RealTestDescription {
public:
 TestDescription_NetworkLevelReasonerTestSuite_test_sbt_relus_active_and_externally_fixed() : CxxTest::RealTestDescription( Tests_NetworkLevelReasonerTestSuite, suiteDescription_NetworkLevelReasonerTestSuite, 1107, "test_sbt_relus_active_and_externally_fixed" ) {}
 void runTest() { suite_NetworkLevelReasonerTestSuite.test_sbt_relus_active_and_externally_fixed(); }
} testDescription_NetworkLevelReasonerTestSuite_test_sbt_relus_active_and_externally_fixed;

static class TestDescription_NetworkLevelReasonerTestSuite_test_sbt_abs_all_positive : public CxxTest::RealTestDescription {
public:
 TestDescription_NetworkLevelReasonerTestSuite_test_sbt_abs_all_positive() : CxxTest::RealTestDescription( Tests_NetworkLevelReasonerTestSuite, suiteDescription_NetworkLevelReasonerTestSuite, 1183, "test_sbt_abs_all_positive" ) {}
 void runTest() { suite_NetworkLevelReasonerTestSuite.test_sbt_abs_all_positive(); }
} testDescription_NetworkLevelReasonerTestSuite_test_sbt_abs_all_positive;

static class TestDescription_NetworkLevelReasonerTestSuite_test_sbt_abs_positive_and_negative : public CxxTest::RealTestDescription {
public:
 TestDescription_NetworkLevelReasonerTestSuite_test_sbt_abs_positive_and_negative() : CxxTest::RealTestDescription( Tests_NetworkLevelReasonerTestSuite, suiteDescription_NetworkLevelReasonerTestSuite, 1300, "test_sbt_abs_positive_and_negative" ) {}
 void runTest() { suite_NetworkLevelReasonerTestSuite.test_sbt_abs_positive_and_negative(); }
} testDescription_NetworkLevelReasonerTestSuite_test_sbt_abs_positive_and_negative;

static class TestDescription_NetworkLevelReasonerTestSuite_test_sbt_absolute_values_positive_and_not_fixed : public CxxTest::RealTestDescription {
public:
 TestDescription_NetworkLevelReasonerTestSuite_test_sbt_absolute_values_positive_and_not_fixed() : CxxTest::RealTestDescription( Tests_NetworkLevelReasonerTestSuite, suiteDescription_NetworkLevelReasonerTestSuite, 1421, "test_sbt_absolute_values_positive_and_not_fixed" ) {}
 void runTest() { suite_NetworkLevelReasonerTestSuite.test_sbt_absolute_values_positive_and_not_fixed(); }
} testDescription_NetworkLevelReasonerTestSuite_test_sbt_absolute_values_positive_and_not_fixed;

static class TestDescription_NetworkLevelReasonerTestSuite_test_sbt_absolute_values_active_and_externally_fixed : public CxxTest::RealTestDescription {
public:
 TestDescription_NetworkLevelReasonerTestSuite_test_sbt_absolute_values_active_and_externally_fixed() : CxxTest::RealTestDescription( Tests_NetworkLevelReasonerTestSuite, suiteDescription_NetworkLevelReasonerTestSuite, 1545, "test_sbt_absolute_values_active_and_externally_fixed" ) {}
 void runTest() { suite_NetworkLevelReasonerTestSuite.test_sbt_absolute_values_active_and_externally_fixed(); }
} testDescription_NetworkLevelReasonerTestSuite_test_sbt_absolute_values_active_and_externally_fixed;

static class TestDescription_NetworkLevelReasonerTestSuite_test_generate_input_query : public CxxTest::RealTestDescription {
public:
 TestDescription_NetworkLevelReasonerTestSuite_test_generate_input_query() : CxxTest::RealTestDescription( Tests_NetworkLevelReasonerTestSuite, suiteDescription_NetworkLevelReasonerTestSuite, 1670, "test_generate_input_query" ) {}
 void runTest() { suite_NetworkLevelReasonerTestSuite.test_generate_input_query(); }
} testDescription_NetworkLevelReasonerTestSuite_test_generate_input_query;

static class TestDescription_NetworkLevelReasonerTestSuite_test_simulate_relus : public CxxTest::RealTestDescription {
public:
 TestDescription_NetworkLevelReasonerTestSuite_test_simulate_relus() : CxxTest::RealTestDescription( Tests_NetworkLevelReasonerTestSuite, suiteDescription_NetworkLevelReasonerTestSuite, 1773, "test_simulate_relus" ) {}
 void runTest() { suite_NetworkLevelReasonerTestSuite.test_simulate_relus(); }
} testDescription_NetworkLevelReasonerTestSuite_test_simulate_relus;

static class TestDescription_NetworkLevelReasonerTestSuite_test_simulate_sigmoids : public CxxTest::RealTestDescription {
public:
 TestDescription_NetworkLevelReasonerTestSuite_test_simulate_sigmoids() : CxxTest::RealTestDescription( Tests_NetworkLevelReasonerTestSuite, suiteDescription_NetworkLevelReasonerTestSuite, 1845, "test_simulate_sigmoids" ) {}
 void runTest() { suite_NetworkLevelReasonerTestSuite.test_simulate_sigmoids(); }
} testDescription_NetworkLevelReasonerTestSuite_test_simulate_sigmoids;

static class TestDescription_NetworkLevelReasonerTestSuite_test_simulate_non_consecutive_layers : public CxxTest::RealTestDescription {
public:
 TestDescription_NetworkLevelReasonerTestSuite_test_simulate_non_consecutive_layers() : CxxTest::RealTestDescription( Tests_NetworkLevelReasonerTestSuite, suiteDescription_NetworkLevelReasonerTestSuite, 1923, "test_simulate_non_consecutive_layers" ) {}
 void runTest() { suite_NetworkLevelReasonerTestSuite.test_simulate_non_consecutive_layers(); }
} testDescription_NetworkLevelReasonerTestSuite_test_simulate_non_consecutive_layers;

static class TestDescription_NetworkLevelReasonerTestSuite_test_simulate_relus_and_abs : public CxxTest::RealTestDescription {
public:
 TestDescription_NetworkLevelReasonerTestSuite_test_simulate_relus_and_abs() : CxxTest::RealTestDescription( Tests_NetworkLevelReasonerTestSuite, suiteDescription_NetworkLevelReasonerTestSuite, 1998, "test_simulate_relus_and_abs" ) {}
 void runTest() { suite_NetworkLevelReasonerTestSuite.test_simulate_relus_and_abs(); }
} testDescription_NetworkLevelReasonerTestSuite_test_simulate_relus_and_abs;

static class TestDescription_NetworkLevelReasonerTestSuite_test_concretize_input_assignment : public CxxTest::RealTestDescription {
public:
 TestDescription_NetworkLevelReasonerTestSuite_test_concretize_input_assignment() : CxxTest::RealTestDescription( Tests_NetworkLevelReasonerTestSuite, suiteDescription_NetworkLevelReasonerTestSuite, 2087, "test_concretize_input_assignment" ) {}
 void runTest() { suite_NetworkLevelReasonerTestSuite.test_concretize_input_assignment(); }
} testDescription_NetworkLevelReasonerTestSuite_test_concretize_input_assignment;

static class TestDescription_NetworkLevelReasonerTestSuite_test_obtain_bound_from_ipq : public CxxTest::RealTestDescription {
public:
 TestDescription_NetworkLevelReasonerTestSuite_test_obtain_bound_from_ipq() : CxxTest::RealTestDescription( Tests_NetworkLevelReasonerTestSuite, suiteDescription_NetworkLevelReasonerTestSuite, 2136, "test_obtain_bound_from_ipq" ) {}
 void runTest() { suite_NetworkLevelReasonerTestSuite.test_obtain_bound_from_ipq(); }
} testDescription_NetworkLevelReasonerTestSuite_test_obtain_bound_from_ipq;

#include <cxxtest/Root.cpp>
