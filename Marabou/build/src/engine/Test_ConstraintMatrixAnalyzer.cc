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
#include "/home/guanqin/compareM/Marabou/src/engine/tests/Test_ConstraintMatrixAnalyzer.h"

static ConstraintMatrixAnalyzerTestSuite suite_ConstraintMatrixAnalyzerTestSuite;

static CxxTest::List Tests_ConstraintMatrixAnalyzerTestSuite = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_ConstraintMatrixAnalyzerTestSuite( "/home/guanqin/compareM/Marabou/src/engine/tests/Test_ConstraintMatrixAnalyzer.h", 28, "ConstraintMatrixAnalyzerTestSuite", suite_ConstraintMatrixAnalyzerTestSuite, Tests_ConstraintMatrixAnalyzerTestSuite );

static class TestDescription_ConstraintMatrixAnalyzerTestSuite_test_analyze__gaussian_eliminiation : public CxxTest::RealTestDescription {
public:
 TestDescription_ConstraintMatrixAnalyzerTestSuite_test_analyze__gaussian_eliminiation() : CxxTest::RealTestDescription( Tests_ConstraintMatrixAnalyzerTestSuite, suiteDescription_ConstraintMatrixAnalyzerTestSuite, 55, "test_analyze__gaussian_eliminiation" ) {}
 void runTest() { suite_ConstraintMatrixAnalyzerTestSuite.test_analyze__gaussian_eliminiation(); }
} testDescription_ConstraintMatrixAnalyzerTestSuite_test_analyze__gaussian_eliminiation;

#include <cxxtest/Root.cpp>
