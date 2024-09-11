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
#include "/home/guanqin/compareM/Marabou/src/proofs/tests/Test_UnsatCertificateNode.h"

static UnsatCertificateNodeTestSuite suite_UnsatCertificateNodeTestSuite;

static CxxTest::List Tests_UnsatCertificateNodeTestSuite = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_UnsatCertificateNodeTestSuite( "/home/guanqin/compareM/Marabou/src/proofs/tests/Test_UnsatCertificateNode.h", 22, "UnsatCertificateNodeTestSuite", suite_UnsatCertificateNodeTestSuite, Tests_UnsatCertificateNodeTestSuite );

static class TestDescription_UnsatCertificateNodeTestSuite_test_tree_relations : public CxxTest::RealTestDescription {
public:
 TestDescription_UnsatCertificateNodeTestSuite_test_tree_relations() : CxxTest::RealTestDescription( Tests_UnsatCertificateNodeTestSuite, suiteDescription_UnsatCertificateNodeTestSuite, 28, "test_tree_relations" ) {}
 void runTest() { suite_UnsatCertificateNodeTestSuite.test_tree_relations(); }
} testDescription_UnsatCertificateNodeTestSuite_test_tree_relations;

static class TestDescription_UnsatCertificateNodeTestSuite_test_contradiction : public CxxTest::RealTestDescription {
public:
 TestDescription_UnsatCertificateNodeTestSuite_test_contradiction() : CxxTest::RealTestDescription( Tests_UnsatCertificateNodeTestSuite, suiteDescription_UnsatCertificateNodeTestSuite, 65, "test_contradiction" ) {}
 void runTest() { suite_UnsatCertificateNodeTestSuite.test_contradiction(); }
} testDescription_UnsatCertificateNodeTestSuite_test_contradiction;

static class TestDescription_UnsatCertificateNodeTestSuite_test_plc_explanation_changes : public CxxTest::RealTestDescription {
public:
 TestDescription_UnsatCertificateNodeTestSuite_test_plc_explanation_changes() : CxxTest::RealTestDescription( Tests_UnsatCertificateNodeTestSuite, suiteDescription_UnsatCertificateNodeTestSuite, 80, "test_plc_explanation_changes" ) {}
 void runTest() { suite_UnsatCertificateNodeTestSuite.test_plc_explanation_changes(); }
} testDescription_UnsatCertificateNodeTestSuite_test_plc_explanation_changes;

#include <cxxtest/Root.cpp>
