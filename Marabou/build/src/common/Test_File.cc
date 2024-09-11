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
#include "/home/guanqin/compareM/Marabou/src/common/tests/Test_File.h"

static FileTestSuite suite_FileTestSuite;

static CxxTest::List Tests_FileTestSuite = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_FileTestSuite( "/home/guanqin/compareM/Marabou/src/common/tests/Test_File.h", 141, "FileTestSuite", suite_FileTestSuite, Tests_FileTestSuite );

static class TestDescription_FileTestSuite_test_todo : public CxxTest::RealTestDescription {
public:
 TestDescription_FileTestSuite_test_todo() : CxxTest::RealTestDescription( Tests_FileTestSuite, suiteDescription_FileTestSuite, 156, "test_todo" ) {}
 void runTest() { suite_FileTestSuite.test_todo(); }
} testDescription_FileTestSuite_test_todo;

#include <cxxtest/Root.cpp>
