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
#include "/home/guanqin/compareM/Marabou/src/basis_factorization/tests/Test_LUFactorization.h"

static LUFactorizationTestSuite suite_LUFactorizationTestSuite;

static CxxTest::List Tests_LUFactorizationTestSuite = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_LUFactorizationTestSuite( "/home/guanqin/compareM/Marabou/src/basis_factorization/tests/Test_LUFactorization.h", 47, "LUFactorizationTestSuite", suite_LUFactorizationTestSuite, Tests_LUFactorizationTestSuite );

static class TestDescription_LUFactorizationTestSuite_test_forward_transformation : public CxxTest::RealTestDescription {
public:
 TestDescription_LUFactorizationTestSuite_test_forward_transformation() : CxxTest::RealTestDescription( Tests_LUFactorizationTestSuite, suiteDescription_LUFactorizationTestSuite, 65, "test_forward_transformation" ) {}
 void runTest() { suite_LUFactorizationTestSuite.test_forward_transformation(); }
} testDescription_LUFactorizationTestSuite_test_forward_transformation;

static class TestDescription_LUFactorizationTestSuite_test_forward_transformation_with_B0 : public CxxTest::RealTestDescription {
public:
 TestDescription_LUFactorizationTestSuite_test_forward_transformation_with_B0() : CxxTest::RealTestDescription( Tests_LUFactorizationTestSuite, suiteDescription_LUFactorizationTestSuite, 122, "test_forward_transformation_with_B0" ) {}
 void runTest() { suite_LUFactorizationTestSuite.test_forward_transformation_with_B0(); }
} testDescription_LUFactorizationTestSuite_test_forward_transformation_with_B0;

static class TestDescription_LUFactorizationTestSuite_test_backward_transformation : public CxxTest::RealTestDescription {
public:
 TestDescription_LUFactorizationTestSuite_test_backward_transformation() : CxxTest::RealTestDescription( Tests_LUFactorizationTestSuite, suiteDescription_LUFactorizationTestSuite, 161, "test_backward_transformation" ) {}
 void runTest() { suite_LUFactorizationTestSuite.test_backward_transformation(); }
} testDescription_LUFactorizationTestSuite_test_backward_transformation;

static class TestDescription_LUFactorizationTestSuite_test_backward_transformation_2 : public CxxTest::RealTestDescription {
public:
 TestDescription_LUFactorizationTestSuite_test_backward_transformation_2() : CxxTest::RealTestDescription( Tests_LUFactorizationTestSuite, suiteDescription_LUFactorizationTestSuite, 238, "test_backward_transformation_2" ) {}
 void runTest() { suite_LUFactorizationTestSuite.test_backward_transformation_2(); }
} testDescription_LUFactorizationTestSuite_test_backward_transformation_2;

static class TestDescription_LUFactorizationTestSuite_test_backward_transformation_with_B0 : public CxxTest::RealTestDescription {
public:
 TestDescription_LUFactorizationTestSuite_test_backward_transformation_with_B0() : CxxTest::RealTestDescription( Tests_LUFactorizationTestSuite, suiteDescription_LUFactorizationTestSuite, 270, "test_backward_transformation_with_B0" ) {}
 void runTest() { suite_LUFactorizationTestSuite.test_backward_transformation_with_B0(); }
} testDescription_LUFactorizationTestSuite_test_backward_transformation_with_B0;

static class TestDescription_LUFactorizationTestSuite_test_store_and_restore : public CxxTest::RealTestDescription {
public:
 TestDescription_LUFactorizationTestSuite_test_store_and_restore() : CxxTest::RealTestDescription( Tests_LUFactorizationTestSuite, suiteDescription_LUFactorizationTestSuite, 312, "test_store_and_restore" ) {}
 void runTest() { suite_LUFactorizationTestSuite.test_store_and_restore(); }
} testDescription_LUFactorizationTestSuite_test_store_and_restore;

#include <cxxtest/Root.cpp>
