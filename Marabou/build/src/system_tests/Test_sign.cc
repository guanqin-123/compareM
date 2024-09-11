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
#include "/home/guanqin/compareM/Marabou/src/system_tests/Test_sign.h"

static SignTestSuite suite_SignTestSuite;

static CxxTest::List Tests_SignTestSuite = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_SignTestSuite( "/home/guanqin/compareM/Marabou/src/system_tests/Test_sign.h", 23, "SignTestSuite", suite_SignTestSuite, Tests_SignTestSuite );

static class TestDescription_SignTestSuite_test_sign_1 : public CxxTest::RealTestDescription {
public:
 TestDescription_SignTestSuite_test_sign_1() : CxxTest::RealTestDescription( Tests_SignTestSuite, suiteDescription_SignTestSuite, 34, "test_sign_1" ) {}
 void runTest() { suite_SignTestSuite.test_sign_1(); }
} testDescription_SignTestSuite_test_sign_1;

static class TestDescription_SignTestSuite_test_sign_2 : public CxxTest::RealTestDescription {
public:
 TestDescription_SignTestSuite_test_sign_2() : CxxTest::RealTestDescription( Tests_SignTestSuite, suiteDescription_SignTestSuite, 86, "test_sign_2" ) {}
 void runTest() { suite_SignTestSuite.test_sign_2(); }
} testDescription_SignTestSuite_test_sign_2;

static class TestDescription_SignTestSuite_test_sign_3 : public CxxTest::RealTestDescription {
public:
 TestDescription_SignTestSuite_test_sign_3() : CxxTest::RealTestDescription( Tests_SignTestSuite, suiteDescription_SignTestSuite, 209, "test_sign_3" ) {}
 void runTest() { suite_SignTestSuite.test_sign_3(); }
} testDescription_SignTestSuite_test_sign_3;

static class TestDescription_SignTestSuite_test_sign_4 : public CxxTest::RealTestDescription {
public:
 TestDescription_SignTestSuite_test_sign_4() : CxxTest::RealTestDescription( Tests_SignTestSuite, suiteDescription_SignTestSuite, 307, "test_sign_4" ) {}
 void runTest() { suite_SignTestSuite.test_sign_4(); }
} testDescription_SignTestSuite_test_sign_4;

static class TestDescription_SignTestSuite_test_sign_5 : public CxxTest::RealTestDescription {
public:
 TestDescription_SignTestSuite_test_sign_5() : CxxTest::RealTestDescription( Tests_SignTestSuite, suiteDescription_SignTestSuite, 404, "test_sign_5" ) {}
 void runTest() { suite_SignTestSuite.test_sign_5(); }
} testDescription_SignTestSuite_test_sign_5;

static class TestDescription_SignTestSuite_test_sign_6 : public CxxTest::RealTestDescription {
public:
 TestDescription_SignTestSuite_test_sign_6() : CxxTest::RealTestDescription( Tests_SignTestSuite, suiteDescription_SignTestSuite, 623, "test_sign_6" ) {}
 void runTest() { suite_SignTestSuite.test_sign_6(); }
} testDescription_SignTestSuite_test_sign_6;

#include <cxxtest/Root.cpp>
