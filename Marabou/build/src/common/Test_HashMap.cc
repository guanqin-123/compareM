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
#include "/home/guanqin/compareM/Marabou/src/common/tests/Test_HashMap.h"

static HashMapTestSuite suite_HashMapTestSuite;

static CxxTest::List Tests_HashMapTestSuite = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_HashMapTestSuite( "/home/guanqin/compareM/Marabou/src/common/tests/Test_HashMap.h", 23, "HashMapTestSuite", suite_HashMapTestSuite, Tests_HashMapTestSuite );

static class TestDescription_HashMapTestSuite_test_brackets : public CxxTest::RealTestDescription {
public:
 TestDescription_HashMapTestSuite_test_brackets() : CxxTest::RealTestDescription( Tests_HashMapTestSuite, suiteDescription_HashMapTestSuite, 38, "test_brackets" ) {}
 void runTest() { suite_HashMapTestSuite.test_brackets(); }
} testDescription_HashMapTestSuite_test_brackets;

static class TestDescription_HashMapTestSuite_test_size_and_exists : public CxxTest::RealTestDescription {
public:
 TestDescription_HashMapTestSuite_test_size_and_exists() : CxxTest::RealTestDescription( Tests_HashMapTestSuite, suiteDescription_HashMapTestSuite, 65, "test_size_and_exists" ) {}
 void runTest() { suite_HashMapTestSuite.test_size_and_exists(); }
} testDescription_HashMapTestSuite_test_size_and_exists;

static class TestDescription_HashMapTestSuite_test_erase : public CxxTest::RealTestDescription {
public:
 TestDescription_HashMapTestSuite_test_erase() : CxxTest::RealTestDescription( Tests_HashMapTestSuite, suiteDescription_HashMapTestSuite, 99, "test_erase" ) {}
 void runTest() { suite_HashMapTestSuite.test_erase(); }
} testDescription_HashMapTestSuite_test_erase;

static class TestDescription_HashMapTestSuite_test_iterating : public CxxTest::RealTestDescription {
public:
 TestDescription_HashMapTestSuite_test_iterating() : CxxTest::RealTestDescription( Tests_HashMapTestSuite, suiteDescription_HashMapTestSuite, 128, "test_iterating" ) {}
 void runTest() { suite_HashMapTestSuite.test_iterating(); }
} testDescription_HashMapTestSuite_test_iterating;

static class TestDescription_HashMapTestSuite_test_clear : public CxxTest::RealTestDescription {
public:
 TestDescription_HashMapTestSuite_test_clear() : CxxTest::RealTestDescription( Tests_HashMapTestSuite, suiteDescription_HashMapTestSuite, 154, "test_clear" ) {}
 void runTest() { suite_HashMapTestSuite.test_clear(); }
} testDescription_HashMapTestSuite_test_clear;

static class TestDescription_HashMapTestSuite_test_get : public CxxTest::RealTestDescription {
public:
 TestDescription_HashMapTestSuite_test_get() : CxxTest::RealTestDescription( Tests_HashMapTestSuite, suiteDescription_HashMapTestSuite, 176, "test_get" ) {}
 void runTest() { suite_HashMapTestSuite.test_get(); }
} testDescription_HashMapTestSuite_test_get;

static class TestDescription_HashMapTestSuite_test_equality : public CxxTest::RealTestDescription {
public:
 TestDescription_HashMapTestSuite_test_equality() : CxxTest::RealTestDescription( Tests_HashMapTestSuite, suiteDescription_HashMapTestSuite, 194, "test_equality" ) {}
 void runTest() { suite_HashMapTestSuite.test_equality(); }
} testDescription_HashMapTestSuite_test_equality;

static class TestDescription_HashMapTestSuite_test_at : public CxxTest::RealTestDescription {
public:
 TestDescription_HashMapTestSuite_test_at() : CxxTest::RealTestDescription( Tests_HashMapTestSuite, suiteDescription_HashMapTestSuite, 221, "test_at" ) {}
 void runTest() { suite_HashMapTestSuite.test_at(); }
} testDescription_HashMapTestSuite_test_at;

#include <cxxtest/Root.cpp>
