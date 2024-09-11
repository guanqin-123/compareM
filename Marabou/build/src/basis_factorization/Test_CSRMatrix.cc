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
#include "/home/guanqin/compareM/Marabou/src/basis_factorization/tests/Test_CSRMatrix.h"

static CSRMatrixTestSuite suite_CSRMatrixTestSuite;

static CxxTest::List Tests_CSRMatrixTestSuite = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_CSRMatrixTestSuite( "/home/guanqin/compareM/Marabou/src/basis_factorization/tests/Test_CSRMatrix.h", 27, "CSRMatrixTestSuite", suite_CSRMatrixTestSuite, Tests_CSRMatrixTestSuite );

static class TestDescription_CSRMatrixTestSuite_test_sanity : public CxxTest::RealTestDescription {
public:
 TestDescription_CSRMatrixTestSuite_test_sanity() : CxxTest::RealTestDescription( Tests_CSRMatrixTestSuite, suiteDescription_CSRMatrixTestSuite, 42, "test_sanity" ) {}
 void runTest() { suite_CSRMatrixTestSuite.test_sanity(); }
} testDescription_CSRMatrixTestSuite_test_sanity;

static class TestDescription_CSRMatrixTestSuite_test_store_restore : public CxxTest::RealTestDescription {
public:
 TestDescription_CSRMatrixTestSuite_test_store_restore() : CxxTest::RealTestDescription( Tests_CSRMatrixTestSuite, suiteDescription_CSRMatrixTestSuite, 81, "test_store_restore" ) {}
 void runTest() { suite_CSRMatrixTestSuite.test_store_restore(); }
} testDescription_CSRMatrixTestSuite_test_store_restore;

static class TestDescription_CSRMatrixTestSuite_test_add_last_row : public CxxTest::RealTestDescription {
public:
 TestDescription_CSRMatrixTestSuite_test_add_last_row() : CxxTest::RealTestDescription( Tests_CSRMatrixTestSuite, suiteDescription_CSRMatrixTestSuite, 104, "test_add_last_row" ) {}
 void runTest() { suite_CSRMatrixTestSuite.test_add_last_row(); }
} testDescription_CSRMatrixTestSuite_test_add_last_row;

static class TestDescription_CSRMatrixTestSuite_test_add_last_column : public CxxTest::RealTestDescription {
public:
 TestDescription_CSRMatrixTestSuite_test_add_last_column() : CxxTest::RealTestDescription( Tests_CSRMatrixTestSuite, suiteDescription_CSRMatrixTestSuite, 139, "test_add_last_column" ) {}
 void runTest() { suite_CSRMatrixTestSuite.test_add_last_column(); }
} testDescription_CSRMatrixTestSuite_test_add_last_column;

static class TestDescription_CSRMatrixTestSuite_test_get_row : public CxxTest::RealTestDescription {
public:
 TestDescription_CSRMatrixTestSuite_test_get_row() : CxxTest::RealTestDescription( Tests_CSRMatrixTestSuite, suiteDescription_CSRMatrixTestSuite, 203, "test_get_row" ) {}
 void runTest() { suite_CSRMatrixTestSuite.test_get_row(); }
} testDescription_CSRMatrixTestSuite_test_get_row;

static class TestDescription_CSRMatrixTestSuite_test_to_dense : public CxxTest::RealTestDescription {
public:
 TestDescription_CSRMatrixTestSuite_test_to_dense() : CxxTest::RealTestDescription( Tests_CSRMatrixTestSuite, suiteDescription_CSRMatrixTestSuite, 229, "test_to_dense" ) {}
 void runTest() { suite_CSRMatrixTestSuite.test_to_dense(); }
} testDescription_CSRMatrixTestSuite_test_to_dense;

static class TestDescription_CSRMatrixTestSuite_test_get_column : public CxxTest::RealTestDescription {
public:
 TestDescription_CSRMatrixTestSuite_test_get_column() : CxxTest::RealTestDescription( Tests_CSRMatrixTestSuite, suiteDescription_CSRMatrixTestSuite, 269, "test_get_column" ) {}
 void runTest() { suite_CSRMatrixTestSuite.test_get_column(); }
} testDescription_CSRMatrixTestSuite_test_get_column;

static class TestDescription_CSRMatrixTestSuite_test_merge_columns : public CxxTest::RealTestDescription {
public:
 TestDescription_CSRMatrixTestSuite_test_merge_columns() : CxxTest::RealTestDescription( Tests_CSRMatrixTestSuite, suiteDescription_CSRMatrixTestSuite, 303, "test_merge_columns" ) {}
 void runTest() { suite_CSRMatrixTestSuite.test_merge_columns(); }
} testDescription_CSRMatrixTestSuite_test_merge_columns;

static class TestDescription_CSRMatrixTestSuite_test_deletions : public CxxTest::RealTestDescription {
public:
 TestDescription_CSRMatrixTestSuite_test_deletions() : CxxTest::RealTestDescription( Tests_CSRMatrixTestSuite, suiteDescription_CSRMatrixTestSuite, 458, "test_deletions" ) {}
 void runTest() { suite_CSRMatrixTestSuite.test_deletions(); }
} testDescription_CSRMatrixTestSuite_test_deletions;

static class TestDescription_CSRMatrixTestSuite_test_changes : public CxxTest::RealTestDescription {
public:
 TestDescription_CSRMatrixTestSuite_test_changes() : CxxTest::RealTestDescription( Tests_CSRMatrixTestSuite, suiteDescription_CSRMatrixTestSuite, 509, "test_changes" ) {}
 void runTest() { suite_CSRMatrixTestSuite.test_changes(); }
} testDescription_CSRMatrixTestSuite_test_changes;

static class TestDescription_CSRMatrixTestSuite_test_changes_and_deletions : public CxxTest::RealTestDescription {
public:
 TestDescription_CSRMatrixTestSuite_test_changes_and_deletions() : CxxTest::RealTestDescription( Tests_CSRMatrixTestSuite, suiteDescription_CSRMatrixTestSuite, 560, "test_changes_and_deletions" ) {}
 void runTest() { suite_CSRMatrixTestSuite.test_changes_and_deletions(); }
} testDescription_CSRMatrixTestSuite_test_changes_and_deletions;

static class TestDescription_CSRMatrixTestSuite_test_count_elements : public CxxTest::RealTestDescription {
public:
 TestDescription_CSRMatrixTestSuite_test_count_elements() : CxxTest::RealTestDescription( Tests_CSRMatrixTestSuite, suiteDescription_CSRMatrixTestSuite, 619, "test_count_elements" ) {}
 void runTest() { suite_CSRMatrixTestSuite.test_count_elements(); }
} testDescription_CSRMatrixTestSuite_test_count_elements;

static class TestDescription_CSRMatrixTestSuite_test_transpose : public CxxTest::RealTestDescription {
public:
 TestDescription_CSRMatrixTestSuite_test_transpose() : CxxTest::RealTestDescription( Tests_CSRMatrixTestSuite, suiteDescription_CSRMatrixTestSuite, 648, "test_transpose" ) {}
 void runTest() { suite_CSRMatrixTestSuite.test_transpose(); }
} testDescription_CSRMatrixTestSuite_test_transpose;

static class TestDescription_CSRMatrixTestSuite_test_clear : public CxxTest::RealTestDescription {
public:
 TestDescription_CSRMatrixTestSuite_test_clear() : CxxTest::RealTestDescription( Tests_CSRMatrixTestSuite, suiteDescription_CSRMatrixTestSuite, 698, "test_clear" ) {}
 void runTest() { suite_CSRMatrixTestSuite.test_clear(); }
} testDescription_CSRMatrixTestSuite_test_clear;

#include <cxxtest/Root.cpp>
