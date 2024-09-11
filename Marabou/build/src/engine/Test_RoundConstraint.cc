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
#include "/home/guanqin/compareM/Marabou/src/engine/tests/Test_RoundConstraint.h"

static MaxConstraintTestSuite suite_MaxConstraintTestSuite;

static CxxTest::List Tests_MaxConstraintTestSuite = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_MaxConstraintTestSuite( "/home/guanqin/compareM/Marabou/src/engine/tests/Test_RoundConstraint.h", 29, "MaxConstraintTestSuite", suite_MaxConstraintTestSuite, Tests_MaxConstraintTestSuite );

static class TestDescription_MaxConstraintTestSuite_test_round_constraint : public CxxTest::RealTestDescription {
public:
 TestDescription_MaxConstraintTestSuite_test_round_constraint() : CxxTest::RealTestDescription( Tests_MaxConstraintTestSuite, suiteDescription_MaxConstraintTestSuite, 44, "test_round_constraint" ) {}
 void runTest() { suite_MaxConstraintTestSuite.test_round_constraint(); }
} testDescription_MaxConstraintTestSuite_test_round_constraint;

static class TestDescription_MaxConstraintTestSuite_test_round_duplicate : public CxxTest::RealTestDescription {
public:
 TestDescription_MaxConstraintTestSuite_test_round_duplicate() : CxxTest::RealTestDescription( Tests_MaxConstraintTestSuite, suiteDescription_MaxConstraintTestSuite, 76, "test_round_duplicate" ) {}
 void runTest() { suite_MaxConstraintTestSuite.test_round_duplicate(); }
} testDescription_MaxConstraintTestSuite_test_round_duplicate;

static class TestDescription_MaxConstraintTestSuite_test_round_notify_bounds_b : public CxxTest::RealTestDescription {
public:
 TestDescription_MaxConstraintTestSuite_test_round_notify_bounds_b() : CxxTest::RealTestDescription( Tests_MaxConstraintTestSuite, suiteDescription_MaxConstraintTestSuite, 153, "test_round_notify_bounds_b" ) {}
 void runTest() { suite_MaxConstraintTestSuite.test_round_notify_bounds_b(); }
} testDescription_MaxConstraintTestSuite_test_round_notify_bounds_b;

static class TestDescription_MaxConstraintTestSuite_test_round_notify_bounds_f : public CxxTest::RealTestDescription {
public:
 TestDescription_MaxConstraintTestSuite_test_round_notify_bounds_f() : CxxTest::RealTestDescription( Tests_MaxConstraintTestSuite, suiteDescription_MaxConstraintTestSuite, 250, "test_round_notify_bounds_f" ) {}
 void runTest() { suite_MaxConstraintTestSuite.test_round_notify_bounds_f(); }
} testDescription_MaxConstraintTestSuite_test_round_notify_bounds_f;

static class TestDescription_MaxConstraintTestSuite_test_round_update_variable_index : public CxxTest::RealTestDescription {
public:
 TestDescription_MaxConstraintTestSuite_test_round_update_variable_index() : CxxTest::RealTestDescription( Tests_MaxConstraintTestSuite, suiteDescription_MaxConstraintTestSuite, 346, "test_round_update_variable_index" ) {}
 void runTest() { suite_MaxConstraintTestSuite.test_round_update_variable_index(); }
} testDescription_MaxConstraintTestSuite_test_round_update_variable_index;

static class TestDescription_MaxConstraintTestSuite_test_register_as_watcher : public CxxTest::RealTestDescription {
public:
 TestDescription_MaxConstraintTestSuite_test_register_as_watcher() : CxxTest::RealTestDescription( Tests_MaxConstraintTestSuite, suiteDescription_MaxConstraintTestSuite, 384, "test_register_as_watcher" ) {}
 void runTest() { suite_MaxConstraintTestSuite.test_register_as_watcher(); }
} testDescription_MaxConstraintTestSuite_test_register_as_watcher;

static class TestDescription_MaxConstraintTestSuite_test_round_serialize : public CxxTest::RealTestDescription {
public:
 TestDescription_MaxConstraintTestSuite_test_round_serialize() : CxxTest::RealTestDescription( Tests_MaxConstraintTestSuite, suiteDescription_MaxConstraintTestSuite, 414, "test_round_serialize" ) {}
 void runTest() { suite_MaxConstraintTestSuite.test_round_serialize(); }
} testDescription_MaxConstraintTestSuite_test_round_serialize;

static class TestDescription_MaxConstraintTestSuite_test_round_restore : public CxxTest::RealTestDescription {
public:
 TestDescription_MaxConstraintTestSuite_test_round_restore() : CxxTest::RealTestDescription( Tests_MaxConstraintTestSuite, suiteDescription_MaxConstraintTestSuite, 429, "test_round_restore" ) {}
 void runTest() { suite_MaxConstraintTestSuite.test_round_restore(); }
} testDescription_MaxConstraintTestSuite_test_round_restore;

static class TestDescription_MaxConstraintTestSuite_test_round_satisfied : public CxxTest::RealTestDescription {
public:
 TestDescription_MaxConstraintTestSuite_test_round_satisfied() : CxxTest::RealTestDescription( Tests_MaxConstraintTestSuite, suiteDescription_MaxConstraintTestSuite, 450, "test_round_satisfied" ) {}
 void runTest() { suite_MaxConstraintTestSuite.test_round_satisfied(); }
} testDescription_MaxConstraintTestSuite_test_round_satisfied;

#include <cxxtest/Root.cpp>
