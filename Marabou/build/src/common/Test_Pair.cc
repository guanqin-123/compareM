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
#include "/home/guanqin/compareM/Marabou/src/common/tests/Test_Pair.h"

static PairTestSuite suite_PairTestSuite;

static CxxTest::List Tests_PairTestSuite = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_PairTestSuite( "/home/guanqin/compareM/Marabou/src/common/tests/Test_Pair.h", 22, "PairTestSuite", suite_PairTestSuite, Tests_PairTestSuite );

static class TestDescription_PairTestSuite_test_pair : public CxxTest::RealTestDescription {
public:
 TestDescription_PairTestSuite_test_pair() : CxxTest::RealTestDescription( Tests_PairTestSuite, suiteDescription_PairTestSuite, 25, "test_pair" ) {}
 void runTest() { suite_PairTestSuite.test_pair(); }
} testDescription_PairTestSuite_test_pair;

#include <cxxtest/Root.cpp>
