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
#include "/home/guanqin/compareM/Marabou/src/proofs/tests/Test_Checker.h"

static CheckerTestSuite suite_CheckerTestSuite;

static CxxTest::List Tests_CheckerTestSuite = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_CheckerTestSuite( "/home/guanqin/compareM/Marabou/src/proofs/tests/Test_Checker.h", 19, "CheckerTestSuite", suite_CheckerTestSuite, Tests_CheckerTestSuite );

static class TestDescription_CheckerTestSuite_test_certification : public CxxTest::RealTestDescription {
public:
 TestDescription_CheckerTestSuite_test_certification() : CxxTest::RealTestDescription( Tests_CheckerTestSuite, suiteDescription_CheckerTestSuite, 25, "test_certification" ) {}
 void runTest() { suite_CheckerTestSuite.test_certification(); }
} testDescription_CheckerTestSuite_test_certification;

#include <cxxtest/Root.cpp>
