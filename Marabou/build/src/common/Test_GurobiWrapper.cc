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
#include "/home/guanqin/compareM/Marabou/src/common/tests/Test_GurobiWrapper.h"

static GurobiWrapperTestSuite suite_GurobiWrapperTestSuite;

static CxxTest::List Tests_GurobiWrapperTestSuite = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_GurobiWrapperTestSuite( "/home/guanqin/compareM/Marabou/src/common/tests/Test_GurobiWrapper.h", 24, "GurobiWrapperTestSuite", suite_GurobiWrapperTestSuite, Tests_GurobiWrapperTestSuite );

static class TestDescription_GurobiWrapperTestSuite_test_optimize : public CxxTest::RealTestDescription {
public:
 TestDescription_GurobiWrapperTestSuite_test_optimize() : CxxTest::RealTestDescription( Tests_GurobiWrapperTestSuite, suiteDescription_GurobiWrapperTestSuite, 39, "test_optimize" ) {}
 void runTest() { suite_GurobiWrapperTestSuite.test_optimize(); }
} testDescription_GurobiWrapperTestSuite_test_optimize;

#include <cxxtest/Root.cpp>
