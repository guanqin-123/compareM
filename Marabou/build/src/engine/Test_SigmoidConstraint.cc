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
#include "/home/guanqin/compareM/Marabou/src/engine/tests/Test_SigmoidConstraint.h"

static MaxConstraintTestSuite suite_MaxConstraintTestSuite;

static CxxTest::List Tests_MaxConstraintTestSuite = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_MaxConstraintTestSuite( "/home/guanqin/compareM/Marabou/src/engine/tests/Test_SigmoidConstraint.h", 41, "MaxConstraintTestSuite", suite_MaxConstraintTestSuite, Tests_MaxConstraintTestSuite );

static class TestDescription_MaxConstraintTestSuite_test_sigmoid_constraint : public CxxTest::RealTestDescription {
public:
 TestDescription_MaxConstraintTestSuite_test_sigmoid_constraint() : CxxTest::RealTestDescription( Tests_MaxConstraintTestSuite, suiteDescription_MaxConstraintTestSuite, 56, "test_sigmoid_constraint" ) {}
 void runTest() { suite_MaxConstraintTestSuite.test_sigmoid_constraint(); }
} testDescription_MaxConstraintTestSuite_test_sigmoid_constraint;

static class TestDescription_MaxConstraintTestSuite_test_sigmoid_duplicate : public CxxTest::RealTestDescription {
public:
 TestDescription_MaxConstraintTestSuite_test_sigmoid_duplicate() : CxxTest::RealTestDescription( Tests_MaxConstraintTestSuite, suiteDescription_MaxConstraintTestSuite, 88, "test_sigmoid_duplicate" ) {}
 void runTest() { suite_MaxConstraintTestSuite.test_sigmoid_duplicate(); }
} testDescription_MaxConstraintTestSuite_test_sigmoid_duplicate;

static class TestDescription_MaxConstraintTestSuite_test_sigmoid_notify_bounds_b : public CxxTest::RealTestDescription {
public:
 TestDescription_MaxConstraintTestSuite_test_sigmoid_notify_bounds_b() : CxxTest::RealTestDescription( Tests_MaxConstraintTestSuite, suiteDescription_MaxConstraintTestSuite, 130, "test_sigmoid_notify_bounds_b" ) {}
 void runTest() { suite_MaxConstraintTestSuite.test_sigmoid_notify_bounds_b(); }
} testDescription_MaxConstraintTestSuite_test_sigmoid_notify_bounds_b;

static class TestDescription_MaxConstraintTestSuite_test_sigmoid_notify_bounds_f : public CxxTest::RealTestDescription {
public:
 TestDescription_MaxConstraintTestSuite_test_sigmoid_notify_bounds_f() : CxxTest::RealTestDescription( Tests_MaxConstraintTestSuite, suiteDescription_MaxConstraintTestSuite, 193, "test_sigmoid_notify_bounds_f" ) {}
 void runTest() { suite_MaxConstraintTestSuite.test_sigmoid_notify_bounds_f(); }
} testDescription_MaxConstraintTestSuite_test_sigmoid_notify_bounds_f;

static class TestDescription_MaxConstraintTestSuite_test_sigmoid_update_variable_index : public CxxTest::RealTestDescription {
public:
 TestDescription_MaxConstraintTestSuite_test_sigmoid_update_variable_index() : CxxTest::RealTestDescription( Tests_MaxConstraintTestSuite, suiteDescription_MaxConstraintTestSuite, 227, "test_sigmoid_update_variable_index" ) {}
 void runTest() { suite_MaxConstraintTestSuite.test_sigmoid_update_variable_index(); }
} testDescription_MaxConstraintTestSuite_test_sigmoid_update_variable_index;

static class TestDescription_MaxConstraintTestSuite_test_register_as_watcher : public CxxTest::RealTestDescription {
public:
 TestDescription_MaxConstraintTestSuite_test_register_as_watcher() : CxxTest::RealTestDescription( Tests_MaxConstraintTestSuite, suiteDescription_MaxConstraintTestSuite, 290, "test_register_as_watcher" ) {}
 void runTest() { suite_MaxConstraintTestSuite.test_register_as_watcher(); }
} testDescription_MaxConstraintTestSuite_test_register_as_watcher;

static class TestDescription_MaxConstraintTestSuite_test_sigmoid_serialize : public CxxTest::RealTestDescription {
public:
 TestDescription_MaxConstraintTestSuite_test_sigmoid_serialize() : CxxTest::RealTestDescription( Tests_MaxConstraintTestSuite, suiteDescription_MaxConstraintTestSuite, 320, "test_sigmoid_serialize" ) {}
 void runTest() { suite_MaxConstraintTestSuite.test_sigmoid_serialize(); }
} testDescription_MaxConstraintTestSuite_test_sigmoid_serialize;

static class TestDescription_MaxConstraintTestSuite_test_sigmoid_restore : public CxxTest::RealTestDescription {
public:
 TestDescription_MaxConstraintTestSuite_test_sigmoid_restore() : CxxTest::RealTestDescription( Tests_MaxConstraintTestSuite, suiteDescription_MaxConstraintTestSuite, 335, "test_sigmoid_restore" ) {}
 void runTest() { suite_MaxConstraintTestSuite.test_sigmoid_restore(); }
} testDescription_MaxConstraintTestSuite_test_sigmoid_restore;

static class TestDescription_MaxConstraintTestSuite_test_sigmoid_satisfied : public CxxTest::RealTestDescription {
public:
 TestDescription_MaxConstraintTestSuite_test_sigmoid_satisfied() : CxxTest::RealTestDescription( Tests_MaxConstraintTestSuite, suiteDescription_MaxConstraintTestSuite, 356, "test_sigmoid_satisfied" ) {}
 void runTest() { suite_MaxConstraintTestSuite.test_sigmoid_satisfied(); }
} testDescription_MaxConstraintTestSuite_test_sigmoid_satisfied;

#include <cxxtest/Root.cpp>
