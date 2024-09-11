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
#include "/home/guanqin/compareM/Marabou/src/query_loader/tests/Test_QueryLoader.h"

static QueryLoaderTestSuite suite_QueryLoaderTestSuite;

static CxxTest::List Tests_QueryLoaderTestSuite = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_QueryLoaderTestSuite( "/home/guanqin/compareM/Marabou/src/query_loader/tests/Test_QueryLoader.h", 40, "QueryLoaderTestSuite", suite_QueryLoaderTestSuite, Tests_QueryLoaderTestSuite );

static class TestDescription_QueryLoaderTestSuite_test_load_query : public CxxTest::RealTestDescription {
public:
 TestDescription_QueryLoaderTestSuite_test_load_query() : CxxTest::RealTestDescription( Tests_QueryLoaderTestSuite, suiteDescription_QueryLoaderTestSuite, 55, "test_load_query" ) {}
 void runTest() { suite_QueryLoaderTestSuite.test_load_query(); }
} testDescription_QueryLoaderTestSuite_test_load_query;

#include <cxxtest/Root.cpp>
