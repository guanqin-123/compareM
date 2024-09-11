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
#include "/home/guanqin/compareM/Marabou/src/basis_factorization/tests/Test_CompareFactorizations.h"

static CompareFactorizationsTestSuite suite_CompareFactorizationsTestSuite;

static CxxTest::List Tests_CompareFactorizationsTestSuite = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_CompareFactorizationsTestSuite( "/home/guanqin/compareM/Marabou/src/basis_factorization/tests/Test_CompareFactorizations.h", 31, "CompareFactorizationsTestSuite", suite_CompareFactorizationsTestSuite, Tests_CompareFactorizationsTestSuite );

static class TestDescription_CompareFactorizationsTestSuite_test_compare_ft_and_lu : public CxxTest::RealTestDescription {
public:
 TestDescription_CompareFactorizationsTestSuite_test_compare_ft_and_lu() : CxxTest::RealTestDescription( Tests_CompareFactorizationsTestSuite, suiteDescription_CompareFactorizationsTestSuite, 49, "test_compare_ft_and_lu" ) {}
 void runTest() { suite_CompareFactorizationsTestSuite.test_compare_ft_and_lu(); }
} testDescription_CompareFactorizationsTestSuite_test_compare_ft_and_lu;

#include <cxxtest/Root.cpp>
