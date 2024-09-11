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
#include "/home/guanqin/compareM/Marabou/src/input_parsers/tests/Test_OnnxParser.h"

static OnnxParserTestSuite suite_OnnxParserTestSuite;

static CxxTest::List Tests_OnnxParserTestSuite = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_OnnxParserTestSuite( "/home/guanqin/compareM/Marabou/src/input_parsers/tests/Test_OnnxParser.h", 22, "OnnxParserTestSuite", suite_OnnxParserTestSuite, Tests_OnnxParserTestSuite );

static class TestDescription_OnnxParserTestSuite_test_identity : public CxxTest::RealTestDescription {
public:
 TestDescription_OnnxParserTestSuite_test_identity() : CxxTest::RealTestDescription( Tests_OnnxParserTestSuite, suiteDescription_OnnxParserTestSuite, 105, "test_identity" ) {}
 void runTest() { suite_OnnxParserTestSuite.test_identity(); }
} testDescription_OnnxParserTestSuite_test_identity;

static class TestDescription_OnnxParserTestSuite_test_reshape : public CxxTest::RealTestDescription {
public:
 TestDescription_OnnxParserTestSuite_test_reshape() : CxxTest::RealTestDescription( Tests_OnnxParserTestSuite, suiteDescription_OnnxParserTestSuite, 122, "test_reshape" ) {}
 void runTest() { suite_OnnxParserTestSuite.test_reshape(); }
} testDescription_OnnxParserTestSuite_test_reshape;

static class TestDescription_OnnxParserTestSuite_test_reshape_with_dimension_inference : public CxxTest::RealTestDescription {
public:
 TestDescription_OnnxParserTestSuite_test_reshape_with_dimension_inference() : CxxTest::RealTestDescription( Tests_OnnxParserTestSuite, suiteDescription_OnnxParserTestSuite, 139, "test_reshape_with_dimension_inference" ) {}
 void runTest() { suite_OnnxParserTestSuite.test_reshape_with_dimension_inference(); }
} testDescription_OnnxParserTestSuite_test_reshape_with_dimension_inference;

static class TestDescription_OnnxParserTestSuite_test_flatten : public CxxTest::RealTestDescription {
public:
 TestDescription_OnnxParserTestSuite_test_flatten() : CxxTest::RealTestDescription( Tests_OnnxParserTestSuite, suiteDescription_OnnxParserTestSuite, 156, "test_flatten" ) {}
 void runTest() { suite_OnnxParserTestSuite.test_flatten(); }
} testDescription_OnnxParserTestSuite_test_flatten;

static class TestDescription_OnnxParserTestSuite_test_transpose : public CxxTest::RealTestDescription {
public:
 TestDescription_OnnxParserTestSuite_test_transpose() : CxxTest::RealTestDescription( Tests_OnnxParserTestSuite, suiteDescription_OnnxParserTestSuite, 172, "test_transpose" ) {}
 void runTest() { suite_OnnxParserTestSuite.test_transpose(); }
} testDescription_OnnxParserTestSuite_test_transpose;

static class TestDescription_OnnxParserTestSuite_test_squeeze : public CxxTest::RealTestDescription {
public:
 TestDescription_OnnxParserTestSuite_test_squeeze() : CxxTest::RealTestDescription( Tests_OnnxParserTestSuite, suiteDescription_OnnxParserTestSuite, 186, "test_squeeze" ) {}
 void runTest() { suite_OnnxParserTestSuite.test_squeeze(); }
} testDescription_OnnxParserTestSuite_test_squeeze;

static class TestDescription_OnnxParserTestSuite_test_squeeze_with_axes : public CxxTest::RealTestDescription {
public:
 TestDescription_OnnxParserTestSuite_test_squeeze_with_axes() : CxxTest::RealTestDescription( Tests_OnnxParserTestSuite, suiteDescription_OnnxParserTestSuite, 199, "test_squeeze_with_axes" ) {}
 void runTest() { suite_OnnxParserTestSuite.test_squeeze_with_axes(); }
} testDescription_OnnxParserTestSuite_test_squeeze_with_axes;

static class TestDescription_OnnxParserTestSuite_test_unsqueeze : public CxxTest::RealTestDescription {
public:
 TestDescription_OnnxParserTestSuite_test_unsqueeze() : CxxTest::RealTestDescription( Tests_OnnxParserTestSuite, suiteDescription_OnnxParserTestSuite, 212, "test_unsqueeze" ) {}
 void runTest() { suite_OnnxParserTestSuite.test_unsqueeze(); }
} testDescription_OnnxParserTestSuite_test_unsqueeze;

static class TestDescription_OnnxParserTestSuite_test_batch_normalization : public CxxTest::RealTestDescription {
public:
 TestDescription_OnnxParserTestSuite_test_batch_normalization() : CxxTest::RealTestDescription( Tests_OnnxParserTestSuite, suiteDescription_OnnxParserTestSuite, 230, "test_batch_normalization" ) {}
 void runTest() { suite_OnnxParserTestSuite.test_batch_normalization(); }
} testDescription_OnnxParserTestSuite_test_batch_normalization;

static class TestDescription_OnnxParserTestSuite_test_maxpool : public CxxTest::RealTestDescription {
public:
 TestDescription_OnnxParserTestSuite_test_maxpool() : CxxTest::RealTestDescription( Tests_OnnxParserTestSuite, suiteDescription_OnnxParserTestSuite, 246, "test_maxpool" ) {}
 void runTest() { suite_OnnxParserTestSuite.test_maxpool(); }
} testDescription_OnnxParserTestSuite_test_maxpool;

static class TestDescription_OnnxParserTestSuite_test_conv : public CxxTest::RealTestDescription {
public:
 TestDescription_OnnxParserTestSuite_test_conv() : CxxTest::RealTestDescription( Tests_OnnxParserTestSuite, suiteDescription_OnnxParserTestSuite, 264, "test_conv" ) {}
 void runTest() { suite_OnnxParserTestSuite.test_conv(); }
} testDescription_OnnxParserTestSuite_test_conv;

static class TestDescription_OnnxParserTestSuite_test_gemm : public CxxTest::RealTestDescription {
public:
 TestDescription_OnnxParserTestSuite_test_gemm() : CxxTest::RealTestDescription( Tests_OnnxParserTestSuite, suiteDescription_OnnxParserTestSuite, 284, "test_gemm" ) {}
 void runTest() { suite_OnnxParserTestSuite.test_gemm(); }
} testDescription_OnnxParserTestSuite_test_gemm;

static class TestDescription_OnnxParserTestSuite_test_relu : public CxxTest::RealTestDescription {
public:
 TestDescription_OnnxParserTestSuite_test_relu() : CxxTest::RealTestDescription( Tests_OnnxParserTestSuite, suiteDescription_OnnxParserTestSuite, 302, "test_relu" ) {}
 void runTest() { suite_OnnxParserTestSuite.test_relu(); }
} testDescription_OnnxParserTestSuite_test_relu;

static class TestDescription_OnnxParserTestSuite_test_leakyRelu : public CxxTest::RealTestDescription {
public:
 TestDescription_OnnxParserTestSuite_test_leakyRelu() : CxxTest::RealTestDescription( Tests_OnnxParserTestSuite, suiteDescription_OnnxParserTestSuite, 319, "test_leakyRelu" ) {}
 void runTest() { suite_OnnxParserTestSuite.test_leakyRelu(); }
} testDescription_OnnxParserTestSuite_test_leakyRelu;

static class TestDescription_OnnxParserTestSuite_test_add : public CxxTest::RealTestDescription {
public:
 TestDescription_OnnxParserTestSuite_test_add() : CxxTest::RealTestDescription( Tests_OnnxParserTestSuite, suiteDescription_OnnxParserTestSuite, 336, "test_add" ) {}
 void runTest() { suite_OnnxParserTestSuite.test_add(); }
} testDescription_OnnxParserTestSuite_test_add;

static class TestDescription_OnnxParserTestSuite_test_sub : public CxxTest::RealTestDescription {
public:
 TestDescription_OnnxParserTestSuite_test_sub() : CxxTest::RealTestDescription( Tests_OnnxParserTestSuite, suiteDescription_OnnxParserTestSuite, 353, "test_sub" ) {}
 void runTest() { suite_OnnxParserTestSuite.test_sub(); }
} testDescription_OnnxParserTestSuite_test_sub;

static class TestDescription_OnnxParserTestSuite_test_matmul : public CxxTest::RealTestDescription {
public:
 TestDescription_OnnxParserTestSuite_test_matmul() : CxxTest::RealTestDescription( Tests_OnnxParserTestSuite, suiteDescription_OnnxParserTestSuite, 370, "test_matmul" ) {}
 void runTest() { suite_OnnxParserTestSuite.test_matmul(); }
} testDescription_OnnxParserTestSuite_test_matmul;

static class TestDescription_OnnxParserTestSuite_test_sigmoid : public CxxTest::RealTestDescription {
public:
 TestDescription_OnnxParserTestSuite_test_sigmoid() : CxxTest::RealTestDescription( Tests_OnnxParserTestSuite, suiteDescription_OnnxParserTestSuite, 390, "test_sigmoid" ) {}
 void runTest() { suite_OnnxParserTestSuite.test_sigmoid(); }
} testDescription_OnnxParserTestSuite_test_sigmoid;

static class TestDescription_OnnxParserTestSuite_test_tanh : public CxxTest::RealTestDescription {
public:
 TestDescription_OnnxParserTestSuite_test_tanh() : CxxTest::RealTestDescription( Tests_OnnxParserTestSuite, suiteDescription_OnnxParserTestSuite, 404, "test_tanh" ) {}
 void runTest() { suite_OnnxParserTestSuite.test_tanh(); }
} testDescription_OnnxParserTestSuite_test_tanh;

static class TestDescription_OnnxParserTestSuite_test_cast_int_to_float : public CxxTest::RealTestDescription {
public:
 TestDescription_OnnxParserTestSuite_test_cast_int_to_float() : CxxTest::RealTestDescription( Tests_OnnxParserTestSuite, suiteDescription_OnnxParserTestSuite, 411, "test_cast_int_to_float" ) {}
 void runTest() { suite_OnnxParserTestSuite.test_cast_int_to_float(); }
} testDescription_OnnxParserTestSuite_test_cast_int_to_float;

static class TestDescription_OnnxParserTestSuite_test_dropout : public CxxTest::RealTestDescription {
public:
 TestDescription_OnnxParserTestSuite_test_dropout() : CxxTest::RealTestDescription( Tests_OnnxParserTestSuite, suiteDescription_OnnxParserTestSuite, 428, "test_dropout" ) {}
 void runTest() { suite_OnnxParserTestSuite.test_dropout(); }
} testDescription_OnnxParserTestSuite_test_dropout;

static class TestDescription_OnnxParserTestSuite_test_dropout_training_mode_false : public CxxTest::RealTestDescription {
public:
 TestDescription_OnnxParserTestSuite_test_dropout_training_mode_false() : CxxTest::RealTestDescription( Tests_OnnxParserTestSuite, suiteDescription_OnnxParserTestSuite, 435, "test_dropout_training_mode_false" ) {}
 void runTest() { suite_OnnxParserTestSuite.test_dropout_training_mode_false(); }
} testDescription_OnnxParserTestSuite_test_dropout_training_mode_false;

static class TestDescription_OnnxParserTestSuite_test_dropout_training_mode_true : public CxxTest::RealTestDescription {
public:
 TestDescription_OnnxParserTestSuite_test_dropout_training_mode_true() : CxxTest::RealTestDescription( Tests_OnnxParserTestSuite, suiteDescription_OnnxParserTestSuite, 442, "test_dropout_training_mode_true" ) {}
 void runTest() { suite_OnnxParserTestSuite.test_dropout_training_mode_true(); }
} testDescription_OnnxParserTestSuite_test_dropout_training_mode_true;

#include <cxxtest/Root.cpp>
