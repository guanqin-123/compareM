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
#include "/home/guanqin/compareM/Marabou/src/common/tests/Test_CDMap.h"

static CDMapTestSuite suite_CDMapTestSuite;

static CxxTest::List Tests_CDMapTestSuite = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_CDMapTestSuite( "/home/guanqin/compareM/Marabou/src/common/tests/Test_CDMap.h", 26, "CDMapTestSuite", suite_CDMapTestSuite, Tests_CDMapTestSuite );

static class TestDescription_CDMapTestSuite_test_brackets : public CxxTest::RealTestDescription {
public:
 TestDescription_CDMapTestSuite_test_brackets() : CxxTest::RealTestDescription( Tests_CDMapTestSuite, suiteDescription_CDMapTestSuite, 41, "test_brackets" ) {}
 void runTest() { suite_CDMapTestSuite.test_brackets(); }
} testDescription_CDMapTestSuite_test_brackets;

static class TestDescription_CDMapTestSuite_test_size_and_exists : public CxxTest::RealTestDescription {
public:
 TestDescription_CDMapTestSuite_test_size_and_exists() : CxxTest::RealTestDescription( Tests_CDMapTestSuite, suiteDescription_CDMapTestSuite, 58, "test_size_and_exists" ) {}
 void runTest() { suite_CDMapTestSuite.test_size_and_exists(); }
} testDescription_CDMapTestSuite_test_size_and_exists;

#include <cxxtest/Root.cpp>
