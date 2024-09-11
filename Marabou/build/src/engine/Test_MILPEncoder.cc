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
#include "/home/guanqin/compareM/Marabou/src/engine/tests/Test_MILPEncoder.h"

static MILPEncoderTestSuite suite_MILPEncoderTestSuite;

static CxxTest::List Tests_MILPEncoderTestSuite = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_MILPEncoderTestSuite( "/home/guanqin/compareM/Marabou/src/engine/tests/Test_MILPEncoder.h", 26, "MILPEncoderTestSuite", suite_MILPEncoderTestSuite, Tests_MILPEncoderTestSuite );

static class TestDescription_MILPEncoderTestSuite_test_encode_max_constraint : public CxxTest::RealTestDescription {
public:
 TestDescription_MILPEncoderTestSuite_test_encode_max_constraint() : CxxTest::RealTestDescription( Tests_MILPEncoderTestSuite, suiteDescription_MILPEncoderTestSuite, 37, "test_encode_max_constraint" ) {}
 void runTest() { suite_MILPEncoderTestSuite.test_encode_max_constraint(); }
} testDescription_MILPEncoderTestSuite_test_encode_max_constraint;

static class TestDescription_MILPEncoderTestSuite_test_eoncode_leaky_relu_constraint : public CxxTest::RealTestDescription {
public:
 TestDescription_MILPEncoderTestSuite_test_eoncode_leaky_relu_constraint() : CxxTest::RealTestDescription( Tests_MILPEncoderTestSuite, suiteDescription_MILPEncoderTestSuite, 370, "test_eoncode_leaky_relu_constraint" ) {}
 void runTest() { suite_MILPEncoderTestSuite.test_eoncode_leaky_relu_constraint(); }
} testDescription_MILPEncoderTestSuite_test_eoncode_leaky_relu_constraint;

static class TestDescription_MILPEncoderTestSuite_test_eoncode_leaky_relu_constraint_relax : public CxxTest::RealTestDescription {
public:
 TestDescription_MILPEncoderTestSuite_test_eoncode_leaky_relu_constraint_relax() : CxxTest::RealTestDescription( Tests_MILPEncoderTestSuite, suiteDescription_MILPEncoderTestSuite, 457, "test_eoncode_leaky_relu_constraint_relax" ) {}
 void runTest() { suite_MILPEncoderTestSuite.test_eoncode_leaky_relu_constraint_relax(); }
} testDescription_MILPEncoderTestSuite_test_eoncode_leaky_relu_constraint_relax;

static class TestDescription_MILPEncoderTestSuite_test_encode_sigmoid_constraint_sat : public CxxTest::RealTestDescription {
public:
 TestDescription_MILPEncoderTestSuite_test_encode_sigmoid_constraint_sat() : CxxTest::RealTestDescription( Tests_MILPEncoderTestSuite, suiteDescription_MILPEncoderTestSuite, 539, "test_encode_sigmoid_constraint_sat" ) {}
 void runTest() { suite_MILPEncoderTestSuite.test_encode_sigmoid_constraint_sat(); }
} testDescription_MILPEncoderTestSuite_test_encode_sigmoid_constraint_sat;

static class TestDescription_MILPEncoderTestSuite_test_encode_sigmoid_constraint_unsat : public CxxTest::RealTestDescription {
public:
 TestDescription_MILPEncoderTestSuite_test_encode_sigmoid_constraint_unsat() : CxxTest::RealTestDescription( Tests_MILPEncoderTestSuite, suiteDescription_MILPEncoderTestSuite, 793, "test_encode_sigmoid_constraint_unsat" ) {}
 void runTest() { suite_MILPEncoderTestSuite.test_encode_sigmoid_constraint_unsat(); }
} testDescription_MILPEncoderTestSuite_test_encode_sigmoid_constraint_unsat;

static class TestDescription_MILPEncoderTestSuite_test_encode_bilinear_constraint1 : public CxxTest::RealTestDescription {
public:
 TestDescription_MILPEncoderTestSuite_test_encode_bilinear_constraint1() : CxxTest::RealTestDescription( Tests_MILPEncoderTestSuite, suiteDescription_MILPEncoderTestSuite, 1064, "test_encode_bilinear_constraint1" ) {}
 void runTest() { suite_MILPEncoderTestSuite.test_encode_bilinear_constraint1(); }
} testDescription_MILPEncoderTestSuite_test_encode_bilinear_constraint1;

static class TestDescription_MILPEncoderTestSuite_test_encode_bilinear_constraint2 : public CxxTest::RealTestDescription {
public:
 TestDescription_MILPEncoderTestSuite_test_encode_bilinear_constraint2() : CxxTest::RealTestDescription( Tests_MILPEncoderTestSuite, suiteDescription_MILPEncoderTestSuite, 1130, "test_encode_bilinear_constraint2" ) {}
 void runTest() { suite_MILPEncoderTestSuite.test_encode_bilinear_constraint2(); }
} testDescription_MILPEncoderTestSuite_test_encode_bilinear_constraint2;

static class TestDescription_MILPEncoderTestSuite_test_encode_softmax_constraint : public CxxTest::RealTestDescription {
public:
 TestDescription_MILPEncoderTestSuite_test_encode_softmax_constraint() : CxxTest::RealTestDescription( Tests_MILPEncoderTestSuite, suiteDescription_MILPEncoderTestSuite, 1183, "test_encode_softmax_constraint" ) {}
 void runTest() { suite_MILPEncoderTestSuite.test_encode_softmax_constraint(); }
} testDescription_MILPEncoderTestSuite_test_encode_softmax_constraint;

static class TestDescription_MILPEncoderTestSuite_test_encode_clip_constraint : public CxxTest::RealTestDescription {
public:
 TestDescription_MILPEncoderTestSuite_test_encode_clip_constraint() : CxxTest::RealTestDescription( Tests_MILPEncoderTestSuite, suiteDescription_MILPEncoderTestSuite, 1247, "test_encode_clip_constraint" ) {}
 void runTest() { suite_MILPEncoderTestSuite.test_encode_clip_constraint(); }
} testDescription_MILPEncoderTestSuite_test_encode_clip_constraint;

static class TestDescription_MILPEncoderTestSuite_test_encode_clip_constraint2 : public CxxTest::RealTestDescription {
public:
 TestDescription_MILPEncoderTestSuite_test_encode_clip_constraint2() : CxxTest::RealTestDescription( Tests_MILPEncoderTestSuite, suiteDescription_MILPEncoderTestSuite, 1319, "test_encode_clip_constraint2" ) {}
 void runTest() { suite_MILPEncoderTestSuite.test_encode_clip_constraint2(); }
} testDescription_MILPEncoderTestSuite_test_encode_clip_constraint2;

static class TestDescription_MILPEncoderTestSuite_test_encode_clip_constraint3 : public CxxTest::RealTestDescription {
public:
 TestDescription_MILPEncoderTestSuite_test_encode_clip_constraint3() : CxxTest::RealTestDescription( Tests_MILPEncoderTestSuite, suiteDescription_MILPEncoderTestSuite, 1393, "test_encode_clip_constraint3" ) {}
 void runTest() { suite_MILPEncoderTestSuite.test_encode_clip_constraint3(); }
} testDescription_MILPEncoderTestSuite_test_encode_clip_constraint3;

static class TestDescription_MILPEncoderTestSuite_test_encode_clip_constraint4 : public CxxTest::RealTestDescription {
public:
 TestDescription_MILPEncoderTestSuite_test_encode_clip_constraint4() : CxxTest::RealTestDescription( Tests_MILPEncoderTestSuite, suiteDescription_MILPEncoderTestSuite, 1466, "test_encode_clip_constraint4" ) {}
 void runTest() { suite_MILPEncoderTestSuite.test_encode_clip_constraint4(); }
} testDescription_MILPEncoderTestSuite_test_encode_clip_constraint4;

static class TestDescription_MILPEncoderTestSuite_test_encode_round_constraint1 : public CxxTest::RealTestDescription {
public:
 TestDescription_MILPEncoderTestSuite_test_encode_round_constraint1() : CxxTest::RealTestDescription( Tests_MILPEncoderTestSuite, suiteDescription_MILPEncoderTestSuite, 1540, "test_encode_round_constraint1" ) {}
 void runTest() { suite_MILPEncoderTestSuite.test_encode_round_constraint1(); }
} testDescription_MILPEncoderTestSuite_test_encode_round_constraint1;

static class TestDescription_MILPEncoderTestSuite_test_encode_round_constraint2 : public CxxTest::RealTestDescription {
public:
 TestDescription_MILPEncoderTestSuite_test_encode_round_constraint2() : CxxTest::RealTestDescription( Tests_MILPEncoderTestSuite, suiteDescription_MILPEncoderTestSuite, 1597, "test_encode_round_constraint2" ) {}
 void runTest() { suite_MILPEncoderTestSuite.test_encode_round_constraint2(); }
} testDescription_MILPEncoderTestSuite_test_encode_round_constraint2;

static class TestDescription_MILPEncoderTestSuite_test_encode_round_constraint3 : public CxxTest::RealTestDescription {
public:
 TestDescription_MILPEncoderTestSuite_test_encode_round_constraint3() : CxxTest::RealTestDescription( Tests_MILPEncoderTestSuite, suiteDescription_MILPEncoderTestSuite, 1652, "test_encode_round_constraint3" ) {}
 void runTest() { suite_MILPEncoderTestSuite.test_encode_round_constraint3(); }
} testDescription_MILPEncoderTestSuite_test_encode_round_constraint3;

static class TestDescription_MILPEncoderTestSuite_test_encode_round_constraint4 : public CxxTest::RealTestDescription {
public:
 TestDescription_MILPEncoderTestSuite_test_encode_round_constraint4() : CxxTest::RealTestDescription( Tests_MILPEncoderTestSuite, suiteDescription_MILPEncoderTestSuite, 1709, "test_encode_round_constraint4" ) {}
 void runTest() { suite_MILPEncoderTestSuite.test_encode_round_constraint4(); }
} testDescription_MILPEncoderTestSuite_test_encode_round_constraint4;

#include <cxxtest/Root.cpp>
