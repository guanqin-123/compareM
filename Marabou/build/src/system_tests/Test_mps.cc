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
#include "/home/guanqin/compareM/Marabou/src/system_tests/Test_mps.h"

static MpsTestSuite suite_MpsTestSuite;

static CxxTest::List Tests_MpsTestSuite = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_MpsTestSuite( "/home/guanqin/compareM/Marabou/src/system_tests/Test_mps.h", 23, "MpsTestSuite", suite_MpsTestSuite, Tests_MpsTestSuite );

static class TestDescription_MpsTestSuite_test_infesiable : public CxxTest::RealTestDescription {
public:
 TestDescription_MpsTestSuite_test_infesiable() : CxxTest::RealTestDescription( Tests_MpsTestSuite, suiteDescription_MpsTestSuite, 34, "test_infesiable" ) {}
 void runTest() { suite_MpsTestSuite.test_infesiable(); }
} testDescription_MpsTestSuite_test_infesiable;

static class TestDescription_MpsTestSuite_test_fesiable : public CxxTest::RealTestDescription {
public:
 TestDescription_MpsTestSuite_test_fesiable() : CxxTest::RealTestDescription( Tests_MpsTestSuite, suiteDescription_MpsTestSuite, 56, "test_fesiable" ) {}
 void runTest() { suite_MpsTestSuite.test_fesiable(); }
} testDescription_MpsTestSuite_test_fesiable;

#include <cxxtest/Root.cpp>
