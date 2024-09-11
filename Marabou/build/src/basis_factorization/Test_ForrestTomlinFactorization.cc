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
#include "/home/guanqin/compareM/Marabou/src/basis_factorization/tests/Test_ForrestTomlinFactorization.h"

static ForrestTomlinFactorizationTestSuite suite_ForrestTomlinFactorizationTestSuite;

static CxxTest::List Tests_ForrestTomlinFactorizationTestSuite = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_ForrestTomlinFactorizationTestSuite( "/home/guanqin/compareM/Marabou/src/basis_factorization/tests/Test_ForrestTomlinFactorization.h", 32, "ForrestTomlinFactorizationTestSuite", suite_ForrestTomlinFactorizationTestSuite, Tests_ForrestTomlinFactorizationTestSuite );

static class TestDescription_ForrestTomlinFactorizationTestSuite_test_set_basis : public CxxTest::RealTestDescription {
public:
 TestDescription_ForrestTomlinFactorizationTestSuite_test_set_basis() : CxxTest::RealTestDescription( Tests_ForrestTomlinFactorizationTestSuite, suiteDescription_ForrestTomlinFactorizationTestSuite, 59, "test_set_basis" ) {}
 void runTest() { suite_ForrestTomlinFactorizationTestSuite.test_set_basis(); }
} testDescription_ForrestTomlinFactorizationTestSuite_test_set_basis;

static class TestDescription_ForrestTomlinFactorizationTestSuite_test_set_basis_2 : public CxxTest::RealTestDescription {
public:
 TestDescription_ForrestTomlinFactorizationTestSuite_test_set_basis_2() : CxxTest::RealTestDescription( Tests_ForrestTomlinFactorizationTestSuite, suiteDescription_ForrestTomlinFactorizationTestSuite, 182, "test_set_basis_2" ) {}
 void runTest() { suite_ForrestTomlinFactorizationTestSuite.test_set_basis_2(); }
} testDescription_ForrestTomlinFactorizationTestSuite_test_set_basis_2;

static class TestDescription_ForrestTomlinFactorizationTestSuite_test_forward_transformation : public CxxTest::RealTestDescription {
public:
 TestDescription_ForrestTomlinFactorizationTestSuite_test_forward_transformation() : CxxTest::RealTestDescription( Tests_ForrestTomlinFactorizationTestSuite, suiteDescription_ForrestTomlinFactorizationTestSuite, 319, "test_forward_transformation" ) {}
 void runTest() { suite_ForrestTomlinFactorizationTestSuite.test_forward_transformation(); }
} testDescription_ForrestTomlinFactorizationTestSuite_test_forward_transformation;

static class TestDescription_ForrestTomlinFactorizationTestSuite_test_backward_transformation : public CxxTest::RealTestDescription {
public:
 TestDescription_ForrestTomlinFactorizationTestSuite_test_backward_transformation() : CxxTest::RealTestDescription( Tests_ForrestTomlinFactorizationTestSuite, suiteDescription_ForrestTomlinFactorizationTestSuite, 450, "test_backward_transformation" ) {}
 void runTest() { suite_ForrestTomlinFactorizationTestSuite.test_backward_transformation(); }
} testDescription_ForrestTomlinFactorizationTestSuite_test_backward_transformation;

static class TestDescription_ForrestTomlinFactorizationTestSuite_test_push_eta_matrix_refactorization : public CxxTest::RealTestDescription {
public:
 TestDescription_ForrestTomlinFactorizationTestSuite_test_push_eta_matrix_refactorization() : CxxTest::RealTestDescription( Tests_ForrestTomlinFactorizationTestSuite, suiteDescription_ForrestTomlinFactorizationTestSuite, 592, "test_push_eta_matrix_refactorization" ) {}
 void runTest() { suite_ForrestTomlinFactorizationTestSuite.test_push_eta_matrix_refactorization(); }
} testDescription_ForrestTomlinFactorizationTestSuite_test_push_eta_matrix_refactorization;

static class TestDescription_ForrestTomlinFactorizationTestSuite_test_store_and_restore : public CxxTest::RealTestDescription {
public:
 TestDescription_ForrestTomlinFactorizationTestSuite_test_store_and_restore() : CxxTest::RealTestDescription( Tests_ForrestTomlinFactorizationTestSuite, suiteDescription_ForrestTomlinFactorizationTestSuite, 807, "test_store_and_restore" ) {}
 void runTest() { suite_ForrestTomlinFactorizationTestSuite.test_store_and_restore(); }
} testDescription_ForrestTomlinFactorizationTestSuite_test_store_and_restore;

static class TestDescription_ForrestTomlinFactorizationTestSuite_test_get_basis : public CxxTest::RealTestDescription {
public:
 TestDescription_ForrestTomlinFactorizationTestSuite_test_get_basis() : CxxTest::RealTestDescription( Tests_ForrestTomlinFactorizationTestSuite, suiteDescription_ForrestTomlinFactorizationTestSuite, 852, "test_get_basis" ) {}
 void runTest() { suite_ForrestTomlinFactorizationTestSuite.test_get_basis(); }
} testDescription_ForrestTomlinFactorizationTestSuite_test_get_basis;

static class TestDescription_ForrestTomlinFactorizationTestSuite_test_invert_basis : public CxxTest::RealTestDescription {
public:
 TestDescription_ForrestTomlinFactorizationTestSuite_test_invert_basis() : CxxTest::RealTestDescription( Tests_ForrestTomlinFactorizationTestSuite, suiteDescription_ForrestTomlinFactorizationTestSuite, 912, "test_invert_basis" ) {}
 void runTest() { suite_ForrestTomlinFactorizationTestSuite.test_invert_basis(); }
} testDescription_ForrestTomlinFactorizationTestSuite_test_invert_basis;

#include <cxxtest/Root.cpp>
