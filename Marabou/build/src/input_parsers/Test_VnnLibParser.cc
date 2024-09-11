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
#include "/home/guanqin/compareM/Marabou/src/input_parsers/tests/Test_VnnLibParser.h"

static VnnLibParserTestSuite suite_VnnLibParserTestSuite;

static CxxTest::List Tests_VnnLibParserTestSuite = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_VnnLibParserTestSuite( "/home/guanqin/compareM/Marabou/src/input_parsers/tests/Test_VnnLibParser.h", 23, "VnnLibParserTestSuite", suite_VnnLibParserTestSuite, Tests_VnnLibParserTestSuite );

static class TestDescription_VnnLibParserTestSuite_test_nano_vnncomp : public CxxTest::RealTestDescription {
public:
 TestDescription_VnnLibParserTestSuite_test_nano_vnncomp() : CxxTest::RealTestDescription( Tests_VnnLibParserTestSuite, suiteDescription_VnnLibParserTestSuite, 52, "test_nano_vnncomp" ) {}
 void runTest() { suite_VnnLibParserTestSuite.test_nano_vnncomp(); }
} testDescription_VnnLibParserTestSuite_test_nano_vnncomp;

static class TestDescription_VnnLibParserTestSuite_test_tiny_vnncomp : public CxxTest::RealTestDescription {
public:
 TestDescription_VnnLibParserTestSuite_test_tiny_vnncomp() : CxxTest::RealTestDescription( Tests_VnnLibParserTestSuite, suiteDescription_VnnLibParserTestSuite, 67, "test_tiny_vnncomp" ) {}
 void runTest() { suite_VnnLibParserTestSuite.test_tiny_vnncomp(); }
} testDescription_VnnLibParserTestSuite_test_tiny_vnncomp;

static class TestDescription_VnnLibParserTestSuite_test_small_vnncomp : public CxxTest::RealTestDescription {
public:
 TestDescription_VnnLibParserTestSuite_test_small_vnncomp() : CxxTest::RealTestDescription( Tests_VnnLibParserTestSuite, suiteDescription_VnnLibParserTestSuite, 92, "test_small_vnncomp" ) {}
 void runTest() { suite_VnnLibParserTestSuite.test_small_vnncomp(); }
} testDescription_VnnLibParserTestSuite_test_small_vnncomp;

static class TestDescription_VnnLibParserTestSuite_test_sat_vnncomp : public CxxTest::RealTestDescription {
public:
 TestDescription_VnnLibParserTestSuite_test_sat_vnncomp() : CxxTest::RealTestDescription( Tests_VnnLibParserTestSuite, suiteDescription_VnnLibParserTestSuite, 117, "test_sat_vnncomp" ) {}
 void runTest() { suite_VnnLibParserTestSuite.test_sat_vnncomp(); }
} testDescription_VnnLibParserTestSuite_test_sat_vnncomp;

static class TestDescription_VnnLibParserTestSuite_test_unsat_vnncomp : public CxxTest::RealTestDescription {
public:
 TestDescription_VnnLibParserTestSuite_test_unsat_vnncomp() : CxxTest::RealTestDescription( Tests_VnnLibParserTestSuite, suiteDescription_VnnLibParserTestSuite, 190, "test_unsat_vnncomp" ) {}
 void runTest() { suite_VnnLibParserTestSuite.test_unsat_vnncomp(); }
} testDescription_VnnLibParserTestSuite_test_unsat_vnncomp;

static class TestDescription_VnnLibParserTestSuite_test_add_const : public CxxTest::RealTestDescription {
public:
 TestDescription_VnnLibParserTestSuite_test_add_const() : CxxTest::RealTestDescription( Tests_VnnLibParserTestSuite, suiteDescription_VnnLibParserTestSuite, 263, "test_add_const" ) {}
 void runTest() { suite_VnnLibParserTestSuite.test_add_const(); }
} testDescription_VnnLibParserTestSuite_test_add_const;

static class TestDescription_VnnLibParserTestSuite_test_add_var : public CxxTest::RealTestDescription {
public:
 TestDescription_VnnLibParserTestSuite_test_add_var() : CxxTest::RealTestDescription( Tests_VnnLibParserTestSuite, suiteDescription_VnnLibParserTestSuite, 278, "test_add_var" ) {}
 void runTest() { suite_VnnLibParserTestSuite.test_add_var(); }
} testDescription_VnnLibParserTestSuite_test_add_var;

static class TestDescription_VnnLibParserTestSuite_test_sub_const : public CxxTest::RealTestDescription {
public:
 TestDescription_VnnLibParserTestSuite_test_sub_const() : CxxTest::RealTestDescription( Tests_VnnLibParserTestSuite, suiteDescription_VnnLibParserTestSuite, 329, "test_sub_const" ) {}
 void runTest() { suite_VnnLibParserTestSuite.test_sub_const(); }
} testDescription_VnnLibParserTestSuite_test_sub_const;

static class TestDescription_VnnLibParserTestSuite_test_sub_var : public CxxTest::RealTestDescription {
public:
 TestDescription_VnnLibParserTestSuite_test_sub_var() : CxxTest::RealTestDescription( Tests_VnnLibParserTestSuite, suiteDescription_VnnLibParserTestSuite, 344, "test_sub_var" ) {}
 void runTest() { suite_VnnLibParserTestSuite.test_sub_var(); }
} testDescription_VnnLibParserTestSuite_test_sub_var;

static class TestDescription_VnnLibParserTestSuite_test_mul_var_const : public CxxTest::RealTestDescription {
public:
 TestDescription_VnnLibParserTestSuite_test_mul_var_const() : CxxTest::RealTestDescription( Tests_VnnLibParserTestSuite, suiteDescription_VnnLibParserTestSuite, 395, "test_mul_var_const" ) {}
 void runTest() { suite_VnnLibParserTestSuite.test_mul_var_const(); }
} testDescription_VnnLibParserTestSuite_test_mul_var_const;

#include <cxxtest/Root.cpp>
