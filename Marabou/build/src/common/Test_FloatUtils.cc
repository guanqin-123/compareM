/* Generated file, do not edit */

#ifndef CXXTEST_RUNNING
#define CXXTEST_RUNNING
#endif

#define _CXXTEST_HAVE_STD
#include <cxxtest/TestListener.h>
#include <cxxtest/TestTracker.h>
#include <cxxtest/TestRunner.h>
#include <cxxtest/RealDescriptions.h>
#include <cxxtest/ErrorPrinter.h>

int main() {
 return CxxTest::ErrorPrinter().run();
}
#include "/home/guanqin/compareM/Marabou/src/common/tests/Test_FloatUtils.h"

static FloatUtilsTestSuite suite_FloatUtilsTestSuite;

static CxxTest::List Tests_FloatUtilsTestSuite = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_FloatUtilsTestSuite( "/home/guanqin/compareM/Marabou/src/common/tests/Test_FloatUtils.h", 27, "FloatUtilsTestSuite", suite_FloatUtilsTestSuite, Tests_FloatUtilsTestSuite );

static class TestDescription_FloatUtilsTestSuite_test_floatUtils : public CxxTest::RealTestDescription {
public:
 TestDescription_FloatUtilsTestSuite_test_floatUtils() : CxxTest::RealTestDescription( Tests_FloatUtilsTestSuite, suiteDescription_FloatUtilsTestSuite, 30, "test_floatUtils" ) {}
 void runTest() { suite_FloatUtilsTestSuite.test_floatUtils(); }
} testDescription_FloatUtilsTestSuite_test_floatUtils;

static class TestDescription_FloatUtilsTestSuite_test_well_formed : public CxxTest::RealTestDescription {
public:
 TestDescription_FloatUtilsTestSuite_test_well_formed() : CxxTest::RealTestDescription( Tests_FloatUtilsTestSuite, suiteDescription_FloatUtilsTestSuite, 73, "test_well_formed" ) {}
 void runTest() { suite_FloatUtilsTestSuite.test_well_formed(); }
} testDescription_FloatUtilsTestSuite_test_well_formed;

static class TestDescription_FloatUtilsTestSuite_test_isnan : public CxxTest::RealTestDescription {
public:
 TestDescription_FloatUtilsTestSuite_test_isnan() : CxxTest::RealTestDescription( Tests_FloatUtilsTestSuite, suiteDescription_FloatUtilsTestSuite, 81, "test_isnan" ) {}
 void runTest() { suite_FloatUtilsTestSuite.test_isnan(); }
} testDescription_FloatUtilsTestSuite_test_isnan;

static class TestDescription_FloatUtilsTestSuite_test_isinf : public CxxTest::RealTestDescription {
public:
 TestDescription_FloatUtilsTestSuite_test_isinf() : CxxTest::RealTestDescription( Tests_FloatUtilsTestSuite, suiteDescription_FloatUtilsTestSuite, 89, "test_isinf" ) {}
 void runTest() { suite_FloatUtilsTestSuite.test_isinf(); }
} testDescription_FloatUtilsTestSuite_test_isinf;

static class TestDescription_FloatUtilsTestSuite_test_round : public CxxTest::RealTestDescription {
public:
 TestDescription_FloatUtilsTestSuite_test_round() : CxxTest::RealTestDescription( Tests_FloatUtilsTestSuite, suiteDescription_FloatUtilsTestSuite, 97, "test_round" ) {}
 void runTest() { suite_FloatUtilsTestSuite.test_round(); }
} testDescription_FloatUtilsTestSuite_test_round;

#include <cxxtest/Root.cpp>
