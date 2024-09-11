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
#include "/home/guanqin/compareM/Marabou/src/engine/tests/Test_SmtCore.h"

static SmtCoreTestSuite suite_SmtCoreTestSuite;

static CxxTest::List Tests_SmtCoreTestSuite = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_SmtCoreTestSuite( "/home/guanqin/compareM/Marabou/src/engine/tests/Test_SmtCore.h", 32, "SmtCoreTestSuite", suite_SmtCoreTestSuite, Tests_SmtCoreTestSuite );

static class TestDescription_SmtCoreTestSuite_test_need_to_split : public CxxTest::RealTestDescription {
public:
 TestDescription_SmtCoreTestSuite_test_need_to_split() : CxxTest::RealTestDescription( Tests_SmtCoreTestSuite, suiteDescription_SmtCoreTestSuite, 193, "test_need_to_split" ) {}
 void runTest() { suite_SmtCoreTestSuite.test_need_to_split(); }
} testDescription_SmtCoreTestSuite_test_need_to_split;

static class TestDescription_SmtCoreTestSuite_test_perform_split : public CxxTest::RealTestDescription {
public:
 TestDescription_SmtCoreTestSuite_test_perform_split() : CxxTest::RealTestDescription( Tests_SmtCoreTestSuite, suiteDescription_SmtCoreTestSuite, 214, "test_perform_split" ) {}
 void runTest() { suite_SmtCoreTestSuite.test_perform_split(); }
} testDescription_SmtCoreTestSuite_test_perform_split;

static class TestDescription_SmtCoreTestSuite_test_perform_split__inactive_constraint : public CxxTest::RealTestDescription {
public:
 TestDescription_SmtCoreTestSuite_test_perform_split__inactive_constraint() : CxxTest::RealTestDescription( Tests_SmtCoreTestSuite, suiteDescription_SmtCoreTestSuite, 332, "test_perform_split__inactive_constraint" ) {}
 void runTest() { suite_SmtCoreTestSuite.test_perform_split__inactive_constraint(); }
} testDescription_SmtCoreTestSuite_test_perform_split__inactive_constraint;

static class TestDescription_SmtCoreTestSuite_test_all_splits_so_far : public CxxTest::RealTestDescription {
public:
 TestDescription_SmtCoreTestSuite_test_all_splits_so_far() : CxxTest::RealTestDescription( Tests_SmtCoreTestSuite, suiteDescription_SmtCoreTestSuite, 384, "test_all_splits_so_far" ) {}
 void runTest() { suite_SmtCoreTestSuite.test_all_splits_so_far(); }
} testDescription_SmtCoreTestSuite_test_all_splits_so_far;

static class TestDescription_SmtCoreTestSuite_test_store_smt_state : public CxxTest::RealTestDescription {
public:
 TestDescription_SmtCoreTestSuite_test_store_smt_state() : CxxTest::RealTestDescription( Tests_SmtCoreTestSuite, suiteDescription_SmtCoreTestSuite, 472, "test_store_smt_state" ) {}
 void runTest() { suite_SmtCoreTestSuite.test_store_smt_state(); }
} testDescription_SmtCoreTestSuite_test_store_smt_state;

static class TestDescription_SmtCoreTestSuite_test_todo : public CxxTest::RealTestDescription {
public:
 TestDescription_SmtCoreTestSuite_test_todo() : CxxTest::RealTestDescription( Tests_SmtCoreTestSuite, suiteDescription_SmtCoreTestSuite, 572, "test_todo" ) {}
 void runTest() { suite_SmtCoreTestSuite.test_todo(); }
} testDescription_SmtCoreTestSuite_test_todo;

#include <cxxtest/Root.cpp>
