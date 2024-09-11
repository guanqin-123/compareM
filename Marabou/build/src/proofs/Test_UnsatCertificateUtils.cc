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
#include "/home/guanqin/compareM/Marabou/src/proofs/tests/Test_UnsatCertificateUtils.h"

static UnsatCertificateUtilsTestSuite suite_UnsatCertificateUtilsTestSuite;

static CxxTest::List Tests_UnsatCertificateUtilsTestSuite = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_UnsatCertificateUtilsTestSuite( "/home/guanqin/compareM/Marabou/src/proofs/tests/Test_UnsatCertificateUtils.h", 19, "UnsatCertificateUtilsTestSuite", suite_UnsatCertificateUtilsTestSuite, Tests_UnsatCertificateUtilsTestSuite );

static class TestDescription_UnsatCertificateUtilsTestSuite_test_bound_computation : public CxxTest::RealTestDescription {
public:
 TestDescription_UnsatCertificateUtilsTestSuite_test_bound_computation() : CxxTest::RealTestDescription( Tests_UnsatCertificateUtilsTestSuite, suiteDescription_UnsatCertificateUtilsTestSuite, 22, "test_bound_computation" ) {}
 void runTest() { suite_UnsatCertificateUtilsTestSuite.test_bound_computation(); }
} testDescription_UnsatCertificateUtilsTestSuite_test_bound_computation;

#include <cxxtest/Root.cpp>
