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
#include "/home/guanqin/compareM/Marabou/src/common/tests/Test_ConstSimpleData.h"

static ConstSimpleDataTestSuite suite_ConstSimpleDataTestSuite;

static CxxTest::List Tests_ConstSimpleDataTestSuite = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_ConstSimpleDataTestSuite( "/home/guanqin/compareM/Marabou/src/common/tests/Test_ConstSimpleData.h", 23, "ConstSimpleDataTestSuite", suite_ConstSimpleDataTestSuite, Tests_ConstSimpleDataTestSuite );

static class TestDescription_ConstSimpleDataTestSuite_test_constructor : public CxxTest::RealTestDescription {
public:
 TestDescription_ConstSimpleDataTestSuite_test_constructor() : CxxTest::RealTestDescription( Tests_ConstSimpleDataTestSuite, suiteDescription_ConstSimpleDataTestSuite, 26, "test_constructor" ) {}
 void runTest() { suite_ConstSimpleDataTestSuite.test_constructor(); }
} testDescription_ConstSimpleDataTestSuite_test_constructor;

static class TestDescription_ConstSimpleDataTestSuite_test_constructor__heap_data : public CxxTest::RealTestDescription {
public:
 TestDescription_ConstSimpleDataTestSuite_test_constructor__heap_data() : CxxTest::RealTestDescription( Tests_ConstSimpleDataTestSuite, suiteDescription_ConstSimpleDataTestSuite, 45, "test_constructor__heap_data" ) {}
 void runTest() { suite_ConstSimpleDataTestSuite.test_constructor__heap_data(); }
} testDescription_ConstSimpleDataTestSuite_test_constructor__heap_data;

static class TestDescription_ConstSimpleDataTestSuite_test_as_char : public CxxTest::RealTestDescription {
public:
 TestDescription_ConstSimpleDataTestSuite_test_as_char() : CxxTest::RealTestDescription( Tests_ConstSimpleDataTestSuite, suiteDescription_ConstSimpleDataTestSuite, 63, "test_as_char" ) {}
 void runTest() { suite_ConstSimpleDataTestSuite.test_as_char(); }
} testDescription_ConstSimpleDataTestSuite_test_as_char;

#include <cxxtest/Root.cpp>
