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
#include "/home/guanqin/compareM/Marabou/src/system_tests/Test_relu.h"

static ReluTestSuite suite_ReluTestSuite;

static CxxTest::List Tests_ReluTestSuite = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_ReluTestSuite( "/home/guanqin/compareM/Marabou/src/system_tests/Test_relu.h", 24, "ReluTestSuite", suite_ReluTestSuite, Tests_ReluTestSuite );

static class TestDescription_ReluTestSuite_test_relu_1 : public CxxTest::RealTestDescription {
public:
 TestDescription_ReluTestSuite_test_relu_1() : CxxTest::RealTestDescription( Tests_ReluTestSuite, suiteDescription_ReluTestSuite, 35, "test_relu_1" ) {}
 void runTest() { suite_ReluTestSuite.test_relu_1(); }
} testDescription_ReluTestSuite_test_relu_1;

static class TestDescription_ReluTestSuite_test_relu_2 : public CxxTest::RealTestDescription {
public:
 TestDescription_ReluTestSuite_test_relu_2() : CxxTest::RealTestDescription( Tests_ReluTestSuite, suiteDescription_ReluTestSuite, 141, "test_relu_2" ) {}
 void runTest() { suite_ReluTestSuite.test_relu_2(); }
} testDescription_ReluTestSuite_test_relu_2;

#include <cxxtest/Root.cpp>
