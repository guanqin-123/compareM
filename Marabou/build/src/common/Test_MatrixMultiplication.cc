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
#include "/home/guanqin/compareM/Marabou/src/common/tests/Test_MatrixMultiplication.h"

static MatrixMultiplicationTestSuite suite_MatrixMultiplicationTestSuite;

static CxxTest::List Tests_MatrixMultiplicationTestSuite = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_MatrixMultiplicationTestSuite( "/home/guanqin/compareM/Marabou/src/common/tests/Test_MatrixMultiplication.h", 21, "MatrixMultiplicationTestSuite", suite_MatrixMultiplicationTestSuite, Tests_MatrixMultiplicationTestSuite );

static class TestDescription_MatrixMultiplicationTestSuite_test_vector_matrix : public CxxTest::RealTestDescription {
public:
 TestDescription_MatrixMultiplicationTestSuite_test_vector_matrix() : CxxTest::RealTestDescription( Tests_MatrixMultiplicationTestSuite, suiteDescription_MatrixMultiplicationTestSuite, 24, "test_vector_matrix" ) {}
 void runTest() { suite_MatrixMultiplicationTestSuite.test_vector_matrix(); }
} testDescription_MatrixMultiplicationTestSuite_test_vector_matrix;

static class TestDescription_MatrixMultiplicationTestSuite_test_matrix_matrix : public CxxTest::RealTestDescription {
public:
 TestDescription_MatrixMultiplicationTestSuite_test_matrix_matrix() : CxxTest::RealTestDescription( Tests_MatrixMultiplicationTestSuite, suiteDescription_MatrixMultiplicationTestSuite, 40, "test_matrix_matrix" ) {}
 void runTest() { suite_MatrixMultiplicationTestSuite.test_matrix_matrix(); }
} testDescription_MatrixMultiplicationTestSuite_test_matrix_matrix;

#include <cxxtest/Root.cpp>
