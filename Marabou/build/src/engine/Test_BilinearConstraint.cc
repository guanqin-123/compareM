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
#include "/home/guanqin/compareM/Marabou/src/engine/tests/Test_BilinearConstraint.h"

static BilinearConstraintTestSuite suite_BilinearConstraintTestSuite;

static CxxTest::List Tests_BilinearConstraintTestSuite = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_BilinearConstraintTestSuite( "/home/guanqin/compareM/Marabou/src/engine/tests/Test_BilinearConstraint.h", 26, "BilinearConstraintTestSuite", suite_BilinearConstraintTestSuite, Tests_BilinearConstraintTestSuite );

static class TestDescription_BilinearConstraintTestSuite_test_construction : public CxxTest::RealTestDescription {
public:
 TestDescription_BilinearConstraintTestSuite_test_construction() : CxxTest::RealTestDescription( Tests_BilinearConstraintTestSuite, suiteDescription_BilinearConstraintTestSuite, 37, "test_construction" ) {}
 void runTest() { suite_BilinearConstraintTestSuite.test_construction(); }
} testDescription_BilinearConstraintTestSuite_test_construction;

static class TestDescription_BilinearConstraintTestSuite_test_tighten_bounds1 : public CxxTest::RealTestDescription {
public:
 TestDescription_BilinearConstraintTestSuite_test_tighten_bounds1() : CxxTest::RealTestDescription( Tests_BilinearConstraintTestSuite, suiteDescription_BilinearConstraintTestSuite, 54, "test_tighten_bounds1" ) {}
 void runTest() { suite_BilinearConstraintTestSuite.test_tighten_bounds1(); }
} testDescription_BilinearConstraintTestSuite_test_tighten_bounds1;

static class TestDescription_BilinearConstraintTestSuite_test_tighten_bounds2 : public CxxTest::RealTestDescription {
public:
 TestDescription_BilinearConstraintTestSuite_test_tighten_bounds2() : CxxTest::RealTestDescription( Tests_BilinearConstraintTestSuite, suiteDescription_BilinearConstraintTestSuite, 71, "test_tighten_bounds2" ) {}
 void runTest() { suite_BilinearConstraintTestSuite.test_tighten_bounds2(); }
} testDescription_BilinearConstraintTestSuite_test_tighten_bounds2;

static class TestDescription_BilinearConstraintTestSuite_test_tighten_bounds3 : public CxxTest::RealTestDescription {
public:
 TestDescription_BilinearConstraintTestSuite_test_tighten_bounds3() : CxxTest::RealTestDescription( Tests_BilinearConstraintTestSuite, suiteDescription_BilinearConstraintTestSuite, 88, "test_tighten_bounds3" ) {}
 void runTest() { suite_BilinearConstraintTestSuite.test_tighten_bounds3(); }
} testDescription_BilinearConstraintTestSuite_test_tighten_bounds3;

static class TestDescription_BilinearConstraintTestSuite_test_tighten_bounds4 : public CxxTest::RealTestDescription {
public:
 TestDescription_BilinearConstraintTestSuite_test_tighten_bounds4() : CxxTest::RealTestDescription( Tests_BilinearConstraintTestSuite, suiteDescription_BilinearConstraintTestSuite, 105, "test_tighten_bounds4" ) {}
 void runTest() { suite_BilinearConstraintTestSuite.test_tighten_bounds4(); }
} testDescription_BilinearConstraintTestSuite_test_tighten_bounds4;

static class TestDescription_BilinearConstraintTestSuite_test_tighten_bounds5 : public CxxTest::RealTestDescription {
public:
 TestDescription_BilinearConstraintTestSuite_test_tighten_bounds5() : CxxTest::RealTestDescription( Tests_BilinearConstraintTestSuite, suiteDescription_BilinearConstraintTestSuite, 122, "test_tighten_bounds5" ) {}
 void runTest() { suite_BilinearConstraintTestSuite.test_tighten_bounds5(); }
} testDescription_BilinearConstraintTestSuite_test_tighten_bounds5;

static class TestDescription_BilinearConstraintTestSuite_test_bilinear_satisfied : public CxxTest::RealTestDescription {
public:
 TestDescription_BilinearConstraintTestSuite_test_bilinear_satisfied() : CxxTest::RealTestDescription( Tests_BilinearConstraintTestSuite, suiteDescription_BilinearConstraintTestSuite, 150, "test_bilinear_satisfied" ) {}
 void runTest() { suite_BilinearConstraintTestSuite.test_bilinear_satisfied(); }
} testDescription_BilinearConstraintTestSuite_test_bilinear_satisfied;

#include <cxxtest/Root.cpp>
