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
#include "/home/guanqin/compareM/Marabou/src/common/tests/Test_Queue.h"

static QueueTestSuite suite_QueueTestSuite;

static CxxTest::List Tests_QueueTestSuite = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_QueueTestSuite( "/home/guanqin/compareM/Marabou/src/common/tests/Test_Queue.h", 23, "QueueTestSuite", suite_QueueTestSuite, Tests_QueueTestSuite );

static class TestDescription_QueueTestSuite_test_basic_queue : public CxxTest::RealTestDescription {
public:
 TestDescription_QueueTestSuite_test_basic_queue() : CxxTest::RealTestDescription( Tests_QueueTestSuite, suiteDescription_QueueTestSuite, 38, "test_basic_queue" ) {}
 void runTest() { suite_QueueTestSuite.test_basic_queue(); }
} testDescription_QueueTestSuite_test_basic_queue;

static class TestDescription_QueueTestSuite_test_clear_and_throw : public CxxTest::RealTestDescription {
public:
 TestDescription_QueueTestSuite_test_clear_and_throw() : CxxTest::RealTestDescription( Tests_QueueTestSuite, suiteDescription_QueueTestSuite, 63, "test_clear_and_throw" ) {}
 void runTest() { suite_QueueTestSuite.test_clear_and_throw(); }
} testDescription_QueueTestSuite_test_clear_and_throw;

#include <cxxtest/Root.cpp>
