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
#include "/home/guanqin/compareM/Marabou/src/proofs/tests/Test_SmtLibWriter.h"

static SmtLibWriterTestSuite suite_SmtLibWriterTestSuite;

static CxxTest::List Tests_SmtLibWriterTestSuite = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_SmtLibWriterTestSuite( "/home/guanqin/compareM/Marabou/src/proofs/tests/Test_SmtLibWriter.h", 22, "SmtLibWriterTestSuite", suite_SmtLibWriterTestSuite, Tests_SmtLibWriterTestSuite );

static class TestDescription_SmtLibWriterTestSuite_test_smtlib_writing : public CxxTest::RealTestDescription {
public:
 TestDescription_SmtLibWriterTestSuite_test_smtlib_writing() : CxxTest::RealTestDescription( Tests_SmtLibWriterTestSuite, suiteDescription_SmtLibWriterTestSuite, 30, "test_smtlib_writing" ) {}
 void runTest() { suite_SmtLibWriterTestSuite.test_smtlib_writing(); }
} testDescription_SmtLibWriterTestSuite_test_smtlib_writing;

#include <cxxtest/Root.cpp>
