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
#include "/home/guanqin/compareM/Marabou/src/common/tests/Test_MString.h"

static StringTestSuite suite_StringTestSuite;

static CxxTest::List Tests_StringTestSuite = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_StringTestSuite( "/home/guanqin/compareM/Marabou/src/common/tests/Test_MString.h", 23, "StringTestSuite", suite_StringTestSuite, Tests_StringTestSuite );

static class TestDescription_StringTestSuite_test_ascii : public CxxTest::RealTestDescription {
public:
 TestDescription_StringTestSuite_test_ascii() : CxxTest::RealTestDescription( Tests_StringTestSuite, suiteDescription_StringTestSuite, 26, "test_ascii" ) {}
 void runTest() { suite_StringTestSuite.test_ascii(); }
} testDescription_StringTestSuite_test_ascii;

static class TestDescription_StringTestSuite_test_bracket_operator : public CxxTest::RealTestDescription {
public:
 TestDescription_StringTestSuite_test_bracket_operator() : CxxTest::RealTestDescription( Tests_StringTestSuite, suiteDescription_StringTestSuite, 36, "test_bracket_operator" ) {}
 void runTest() { suite_StringTestSuite.test_bracket_operator(); }
} testDescription_StringTestSuite_test_bracket_operator;

static class TestDescription_StringTestSuite_test_empty_constructor : public CxxTest::RealTestDescription {
public:
 TestDescription_StringTestSuite_test_empty_constructor() : CxxTest::RealTestDescription( Tests_StringTestSuite, suiteDescription_StringTestSuite, 45, "test_empty_constructor" ) {}
 void runTest() { suite_StringTestSuite.test_empty_constructor(); }
} testDescription_StringTestSuite_test_empty_constructor;

static class TestDescription_StringTestSuite_test_assignemnt_from_c_str : public CxxTest::RealTestDescription {
public:
 TestDescription_StringTestSuite_test_assignemnt_from_c_str() : CxxTest::RealTestDescription( Tests_StringTestSuite, suiteDescription_StringTestSuite, 52, "test_assignemnt_from_c_str" ) {}
 void runTest() { suite_StringTestSuite.test_assignemnt_from_c_str(); }
} testDescription_StringTestSuite_test_assignemnt_from_c_str;

static class TestDescription_StringTestSuite_test_equality_operator : public CxxTest::RealTestDescription {
public:
 TestDescription_StringTestSuite_test_equality_operator() : CxxTest::RealTestDescription( Tests_StringTestSuite, suiteDescription_StringTestSuite, 64, "test_equality_operator" ) {}
 void runTest() { suite_StringTestSuite.test_equality_operator(); }
} testDescription_StringTestSuite_test_equality_operator;

static class TestDescription_StringTestSuite_test_constructor_limited_length : public CxxTest::RealTestDescription {
public:
 TestDescription_StringTestSuite_test_constructor_limited_length() : CxxTest::RealTestDescription( Tests_StringTestSuite, suiteDescription_StringTestSuite, 83, "test_constructor_limited_length" ) {}
 void runTest() { suite_StringTestSuite.test_constructor_limited_length(); }
} testDescription_StringTestSuite_test_constructor_limited_length;

static class TestDescription_StringTestSuite_test_comparison_operator : public CxxTest::RealTestDescription {
public:
 TestDescription_StringTestSuite_test_comparison_operator() : CxxTest::RealTestDescription( Tests_StringTestSuite, suiteDescription_StringTestSuite, 93, "test_comparison_operator" ) {}
 void runTest() { suite_StringTestSuite.test_comparison_operator(); }
} testDescription_StringTestSuite_test_comparison_operator;

static class TestDescription_StringTestSuite_test_concatenation : public CxxTest::RealTestDescription {
public:
 TestDescription_StringTestSuite_test_concatenation() : CxxTest::RealTestDescription( Tests_StringTestSuite, suiteDescription_StringTestSuite, 99, "test_concatenation" ) {}
 void runTest() { suite_StringTestSuite.test_concatenation(); }
} testDescription_StringTestSuite_test_concatenation;

static class TestDescription_StringTestSuite_test_tokenize : public CxxTest::RealTestDescription {
public:
 TestDescription_StringTestSuite_test_tokenize() : CxxTest::RealTestDescription( Tests_StringTestSuite, suiteDescription_StringTestSuite, 122, "test_tokenize" ) {}
 void runTest() { suite_StringTestSuite.test_tokenize(); }
} testDescription_StringTestSuite_test_tokenize;

static class TestDescription_StringTestSuite_test_tokenize__two_delimiters : public CxxTest::RealTestDescription {
public:
 TestDescription_StringTestSuite_test_tokenize__two_delimiters() : CxxTest::RealTestDescription( Tests_StringTestSuite, suiteDescription_StringTestSuite, 158, "test_tokenize__two_delimiters" ) {}
 void runTest() { suite_StringTestSuite.test_tokenize__two_delimiters(); }
} testDescription_StringTestSuite_test_tokenize__two_delimiters;

static class TestDescription_StringTestSuite_test_contains : public CxxTest::RealTestDescription {
public:
 TestDescription_StringTestSuite_test_contains() : CxxTest::RealTestDescription( Tests_StringTestSuite, suiteDescription_StringTestSuite, 189, "test_contains" ) {}
 void runTest() { suite_StringTestSuite.test_contains(); }
} testDescription_StringTestSuite_test_contains;

static class TestDescription_StringTestSuite_test_find : public CxxTest::RealTestDescription {
public:
 TestDescription_StringTestSuite_test_find() : CxxTest::RealTestDescription( Tests_StringTestSuite, suiteDescription_StringTestSuite, 203, "test_find" ) {}
 void runTest() { suite_StringTestSuite.test_find(); }
} testDescription_StringTestSuite_test_find;

static class TestDescription_StringTestSuite_test_substring : public CxxTest::RealTestDescription {
public:
 TestDescription_StringTestSuite_test_substring() : CxxTest::RealTestDescription( Tests_StringTestSuite, suiteDescription_StringTestSuite, 214, "test_substring" ) {}
 void runTest() { suite_StringTestSuite.test_substring(); }
} testDescription_StringTestSuite_test_substring;

static class TestDescription_StringTestSuite_test_replace : public CxxTest::RealTestDescription {
public:
 TestDescription_StringTestSuite_test_replace() : CxxTest::RealTestDescription( Tests_StringTestSuite, suiteDescription_StringTestSuite, 223, "test_replace" ) {}
 void runTest() { suite_StringTestSuite.test_replace(); }
} testDescription_StringTestSuite_test_replace;

static class TestDescription_StringTestSuite_test_trim : public CxxTest::RealTestDescription {
public:
 TestDescription_StringTestSuite_test_trim() : CxxTest::RealTestDescription( Tests_StringTestSuite, suiteDescription_StringTestSuite, 248, "test_trim" ) {}
 void runTest() { suite_StringTestSuite.test_trim(); }
} testDescription_StringTestSuite_test_trim;

#include <cxxtest/Root.cpp>
