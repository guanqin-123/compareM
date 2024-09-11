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
#include "/home/guanqin/compareM/Marabou/src/common/tests/Test_LinearExpression.h"

static LinearExpressionTestSuite suite_LinearExpressionTestSuite;

static CxxTest::List Tests_LinearExpressionTestSuite = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_LinearExpressionTestSuite( "/home/guanqin/compareM/Marabou/src/common/tests/Test_LinearExpression.h", 21, "LinearExpressionTestSuite", suite_LinearExpressionTestSuite, Tests_LinearExpressionTestSuite );

static class TestDescription_LinearExpressionTestSuite_test_evaluate : public CxxTest::RealTestDescription {
public:
 TestDescription_LinearExpressionTestSuite_test_evaluate() : CxxTest::RealTestDescription( Tests_LinearExpressionTestSuite, suiteDescription_LinearExpressionTestSuite, 32, "test_evaluate" ) {}
 void runTest() { suite_LinearExpressionTestSuite.test_evaluate(); }
} testDescription_LinearExpressionTestSuite_test_evaluate;

#include <cxxtest/Root.cpp>
