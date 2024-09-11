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
#include "/home/guanqin/compareM/Marabou/src/engine/tests/Test_Engine.h"

static EngineTestSuite suite_EngineTestSuite;

static CxxTest::List Tests_EngineTestSuite = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_EngineTestSuite( "/home/guanqin/compareM/Marabou/src/engine/tests/Test_Engine.h", 41, "EngineTestSuite", suite_EngineTestSuite, Tests_EngineTestSuite );

static class TestDescription_EngineTestSuite_test_constructor_destructor : public CxxTest::RealTestDescription {
public:
 TestDescription_EngineTestSuite_test_constructor_destructor() : CxxTest::RealTestDescription( Tests_EngineTestSuite, suiteDescription_EngineTestSuite, 67, "test_constructor_destructor" ) {}
 void runTest() { suite_EngineTestSuite.test_constructor_destructor(); }
} testDescription_EngineTestSuite_test_constructor_destructor;

static class TestDescription_EngineTestSuite_test_process_input_query : public CxxTest::RealTestDescription {
public:
 TestDescription_EngineTestSuite_test_process_input_query() : CxxTest::RealTestDescription( Tests_EngineTestSuite, suiteDescription_EngineTestSuite, 82, "test_process_input_query" ) {}
 void runTest() { suite_EngineTestSuite.test_process_input_query(); }
} testDescription_EngineTestSuite_test_process_input_query;

static class TestDescription_EngineTestSuite_test_pick_split_pl_constraint_polarity : public CxxTest::RealTestDescription {
public:
 TestDescription_EngineTestSuite_test_pick_split_pl_constraint_polarity() : CxxTest::RealTestDescription( Tests_EngineTestSuite, suiteDescription_EngineTestSuite, 255, "test_pick_split_pl_constraint_polarity" ) {}
 void runTest() { suite_EngineTestSuite.test_pick_split_pl_constraint_polarity(); }
} testDescription_EngineTestSuite_test_pick_split_pl_constraint_polarity;

static class TestDescription_EngineTestSuite_test_pick_split_pl_constraint_earliest_relu : public CxxTest::RealTestDescription {
public:
 TestDescription_EngineTestSuite_test_pick_split_pl_constraint_earliest_relu() : CxxTest::RealTestDescription( Tests_EngineTestSuite, suiteDescription_EngineTestSuite, 365, "test_pick_split_pl_constraint_earliest_relu" ) {}
 void runTest() { suite_EngineTestSuite.test_pick_split_pl_constraint_earliest_relu(); }
} testDescription_EngineTestSuite_test_pick_split_pl_constraint_earliest_relu;

static class TestDescription_EngineTestSuite_test_pick_split_pl_constraint_largest_interval : public CxxTest::RealTestDescription {
public:
 TestDescription_EngineTestSuite_test_pick_split_pl_constraint_largest_interval() : CxxTest::RealTestDescription( Tests_EngineTestSuite, suiteDescription_EngineTestSuite, 470, "test_pick_split_pl_constraint_largest_interval" ) {}
 void runTest() { suite_EngineTestSuite.test_pick_split_pl_constraint_largest_interval(); }
} testDescription_EngineTestSuite_test_pick_split_pl_constraint_largest_interval;

static class TestDescription_EngineTestSuite_test_calculate_bounds : public CxxTest::RealTestDescription {
public:
 TestDescription_EngineTestSuite_test_calculate_bounds() : CxxTest::RealTestDescription( Tests_EngineTestSuite, suiteDescription_EngineTestSuite, 574, "test_calculate_bounds" ) {}
 void runTest() { suite_EngineTestSuite.test_calculate_bounds(); }
} testDescription_EngineTestSuite_test_calculate_bounds;

static class TestDescription_EngineTestSuite_test_todo : public CxxTest::RealTestDescription {
public:
 TestDescription_EngineTestSuite_test_todo() : CxxTest::RealTestDescription( Tests_EngineTestSuite, suiteDescription_EngineTestSuite, 653, "test_todo" ) {}
 void runTest() { suite_EngineTestSuite.test_todo(); }
} testDescription_EngineTestSuite_test_todo;

#include <cxxtest/Root.cpp>
