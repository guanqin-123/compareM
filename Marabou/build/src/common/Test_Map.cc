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
#include "/home/guanqin/compareM/Marabou/src/common/tests/Test_Map.h"

static MapTestSuite suite_MapTestSuite;

static CxxTest::List Tests_MapTestSuite = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_MapTestSuite( "/home/guanqin/compareM/Marabou/src/common/tests/Test_Map.h", 23, "MapTestSuite", suite_MapTestSuite, Tests_MapTestSuite );

static class TestDescription_MapTestSuite_test_brackets : public CxxTest::RealTestDescription {
public:
 TestDescription_MapTestSuite_test_brackets() : CxxTest::RealTestDescription( Tests_MapTestSuite, suiteDescription_MapTestSuite, 38, "test_brackets" ) {}
 void runTest() { suite_MapTestSuite.test_brackets(); }
} testDescription_MapTestSuite_test_brackets;

static class TestDescription_MapTestSuite_test_size_and_exists : public CxxTest::RealTestDescription {
public:
 TestDescription_MapTestSuite_test_size_and_exists() : CxxTest::RealTestDescription( Tests_MapTestSuite, suiteDescription_MapTestSuite, 51, "test_size_and_exists" ) {}
 void runTest() { suite_MapTestSuite.test_size_and_exists(); }
} testDescription_MapTestSuite_test_size_and_exists;

static class TestDescription_MapTestSuite_test_erase : public CxxTest::RealTestDescription {
public:
 TestDescription_MapTestSuite_test_erase() : CxxTest::RealTestDescription( Tests_MapTestSuite, suiteDescription_MapTestSuite, 85, "test_erase" ) {}
 void runTest() { suite_MapTestSuite.test_erase(); }
} testDescription_MapTestSuite_test_erase;

static class TestDescription_MapTestSuite_test_map_erase_using_iterator : public CxxTest::RealTestDescription {
public:
 TestDescription_MapTestSuite_test_map_erase_using_iterator() : CxxTest::RealTestDescription( Tests_MapTestSuite, suiteDescription_MapTestSuite, 114, "test_map_erase_using_iterator" ) {}
 void runTest() { suite_MapTestSuite.test_map_erase_using_iterator(); }
} testDescription_MapTestSuite_test_map_erase_using_iterator;

static class TestDescription_MapTestSuite_test_iterating : public CxxTest::RealTestDescription {
public:
 TestDescription_MapTestSuite_test_iterating() : CxxTest::RealTestDescription( Tests_MapTestSuite, suiteDescription_MapTestSuite, 138, "test_iterating" ) {}
 void runTest() { suite_MapTestSuite.test_iterating(); }
} testDescription_MapTestSuite_test_iterating;

static class TestDescription_MapTestSuite_test_clear : public CxxTest::RealTestDescription {
public:
 TestDescription_MapTestSuite_test_clear() : CxxTest::RealTestDescription( Tests_MapTestSuite, suiteDescription_MapTestSuite, 167, "test_clear" ) {}
 void runTest() { suite_MapTestSuite.test_clear(); }
} testDescription_MapTestSuite_test_clear;

static class TestDescription_MapTestSuite_test_get : public CxxTest::RealTestDescription {
public:
 TestDescription_MapTestSuite_test_get() : CxxTest::RealTestDescription( Tests_MapTestSuite, suiteDescription_MapTestSuite, 189, "test_get" ) {}
 void runTest() { suite_MapTestSuite.test_get(); }
} testDescription_MapTestSuite_test_get;

static class TestDescription_MapTestSuite_test_equality : public CxxTest::RealTestDescription {
public:
 TestDescription_MapTestSuite_test_equality() : CxxTest::RealTestDescription( Tests_MapTestSuite, suiteDescription_MapTestSuite, 205, "test_equality" ) {}
 void runTest() { suite_MapTestSuite.test_equality(); }
} testDescription_MapTestSuite_test_equality;

static class TestDescription_MapTestSuite_test_keys : public CxxTest::RealTestDescription {
public:
 TestDescription_MapTestSuite_test_keys() : CxxTest::RealTestDescription( Tests_MapTestSuite, suiteDescription_MapTestSuite, 232, "test_keys" ) {}
 void runTest() { suite_MapTestSuite.test_keys(); }
} testDescription_MapTestSuite_test_keys;

static class TestDescription_MapTestSuite_test_set_if_does_not_exists : public CxxTest::RealTestDescription {
public:
 TestDescription_MapTestSuite_test_set_if_does_not_exists() : CxxTest::RealTestDescription( Tests_MapTestSuite, suiteDescription_MapTestSuite, 247, "test_set_if_does_not_exists" ) {}
 void runTest() { suite_MapTestSuite.test_set_if_does_not_exists(); }
} testDescription_MapTestSuite_test_set_if_does_not_exists;

static class TestDescription_MapTestSuite_test_at : public CxxTest::RealTestDescription {
public:
 TestDescription_MapTestSuite_test_at() : CxxTest::RealTestDescription( Tests_MapTestSuite, suiteDescription_MapTestSuite, 263, "test_at" ) {}
 void runTest() { suite_MapTestSuite.test_at(); }
} testDescription_MapTestSuite_test_at;

static class TestDescription_MapTestSuite_test_rbegin_and_rend : public CxxTest::RealTestDescription {
public:
 TestDescription_MapTestSuite_test_rbegin_and_rend() : CxxTest::RealTestDescription( Tests_MapTestSuite, suiteDescription_MapTestSuite, 280, "test_rbegin_and_rend" ) {}
 void runTest() { suite_MapTestSuite.test_rbegin_and_rend(); }
} testDescription_MapTestSuite_test_rbegin_and_rend;

static class TestDescription_MapTestSuite_test_flip : public CxxTest::RealTestDescription {
public:
 TestDescription_MapTestSuite_test_flip() : CxxTest::RealTestDescription( Tests_MapTestSuite, suiteDescription_MapTestSuite, 302, "test_flip" ) {}
 void runTest() { suite_MapTestSuite.test_flip(); }
} testDescription_MapTestSuite_test_flip;

static class TestDescription_MapTestSuite_test_key_with_largest_value : public CxxTest::RealTestDescription {
public:
 TestDescription_MapTestSuite_test_key_with_largest_value() : CxxTest::RealTestDescription( Tests_MapTestSuite, suiteDescription_MapTestSuite, 344, "test_key_with_largest_value" ) {}
 void runTest() { suite_MapTestSuite.test_key_with_largest_value(); }
} testDescription_MapTestSuite_test_key_with_largest_value;

static class TestDescription_MapTestSuite_test_key_by_value : public CxxTest::RealTestDescription {
public:
 TestDescription_MapTestSuite_test_key_by_value() : CxxTest::RealTestDescription( Tests_MapTestSuite, suiteDescription_MapTestSuite, 368, "test_key_by_value" ) {}
 void runTest() { suite_MapTestSuite.test_key_by_value(); }
} testDescription_MapTestSuite_test_key_by_value;

#include <cxxtest/Root.cpp>
