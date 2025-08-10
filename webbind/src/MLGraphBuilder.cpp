#include <webbind/MLGraphBuilder.hpp>
#include <webbind/MLContext.hpp>
#include <webbind/MLOperand.hpp>
#include <webbind/MLOperandDescriptor.hpp>
#include <webbind/MLTensor.hpp>
#include <webbind/MLGraph.hpp>
#include <webbind/MLArgMinMaxOptions.hpp>
#include <webbind/MLBatchNormalizationOptions.hpp>
#include <webbind/MLOperatorOptions.hpp>
#include <webbind/MLClampOptions.hpp>
#include <webbind/MLConv2dOptions.hpp>
#include <webbind/MLConvTranspose2dOptions.hpp>
#include <webbind/MLCumulativeSumOptions.hpp>
#include <webbind/MLEluOptions.hpp>
#include <webbind/MLGatherOptions.hpp>
#include <webbind/MLGemmOptions.hpp>
#include <webbind/MLGruOptions.hpp>
#include <webbind/MLGruCellOptions.hpp>
#include <webbind/MLHardSigmoidOptions.hpp>
#include <webbind/MLInstanceNormalizationOptions.hpp>
#include <webbind/MLLayerNormalizationOptions.hpp>
#include <webbind/MLLeakyReluOptions.hpp>
#include <webbind/MLLinearOptions.hpp>
#include <webbind/MLLstmOptions.hpp>
#include <webbind/MLLstmCellOptions.hpp>
#include <webbind/MLPadOptions.hpp>
#include <webbind/MLPool2dOptions.hpp>
#include <webbind/MLReduceOptions.hpp>
#include <webbind/MLResample2dOptions.hpp>
#include <webbind/MLReverseOptions.hpp>
#include <webbind/MLScatterOptions.hpp>
#include <webbind/MLSliceOptions.hpp>
#include <webbind/MLSplitOptions.hpp>
#include <webbind/MLTransposeOptions.hpp>
#include <webbind/MLTriangularOptions.hpp>

namespace webbind {

MLGraphBuilder MLGraphBuilder::take_ownership(Handle h) noexcept {
        return MLGraphBuilder(h);
    }
MLGraphBuilder MLGraphBuilder::clone() const noexcept { return *this; }
emlite::Val MLGraphBuilder::instance() noexcept { return emlite::Val::global("MLGraphBuilder"); }
MLGraphBuilder::MLGraphBuilder(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
MLGraphBuilder::MLGraphBuilder(const emlite::Val &val) noexcept: emlite::Val(val) {}

MLGraphBuilder::MLGraphBuilder(const MLContext& context) : emlite::Val(emlite::Val::global("MLGraphBuilder").new_(context)) {}

MLOperand MLGraphBuilder::input(const jsbind::String& name, const MLOperandDescriptor& descriptor) {
    return emlite::Val::call("input", name, descriptor).as<MLOperand>();
}

MLOperand MLGraphBuilder::constant(const MLTensor& tensor) {
    return emlite::Val::call("constant", tensor).as<MLOperand>();
}

jsbind::Promise<MLGraph> MLGraphBuilder::build(const jsbind::Any& outputs) {
    return emlite::Val::call("build", outputs).as<jsbind::Promise<MLGraph>>();
}

MLOperand MLGraphBuilder::argMin(const MLOperand& input, unsigned long axis) {
    return emlite::Val::call("argMin", input, axis).as<MLOperand>();
}

MLOperand MLGraphBuilder::argMin(const MLOperand& input, unsigned long axis, const MLArgMinMaxOptions& options) {
    return emlite::Val::call("argMin", input, axis, options).as<MLOperand>();
}

MLOperand MLGraphBuilder::argMax(const MLOperand& input, unsigned long axis) {
    return emlite::Val::call("argMax", input, axis).as<MLOperand>();
}

MLOperand MLGraphBuilder::argMax(const MLOperand& input, unsigned long axis, const MLArgMinMaxOptions& options) {
    return emlite::Val::call("argMax", input, axis, options).as<MLOperand>();
}

MLOperand MLGraphBuilder::batchNormalization(const MLOperand& input, const MLOperand& mean, const MLOperand& variance) {
    return emlite::Val::call("batchNormalization", input, mean, variance).as<MLOperand>();
}

MLOperand MLGraphBuilder::batchNormalization(const MLOperand& input, const MLOperand& mean, const MLOperand& variance, const MLBatchNormalizationOptions& options) {
    return emlite::Val::call("batchNormalization", input, mean, variance, options).as<MLOperand>();
}

MLOperand MLGraphBuilder::cast(const MLOperand& input, const MLOperandDataType& type) {
    return emlite::Val::call("cast", input, type).as<MLOperand>();
}

MLOperand MLGraphBuilder::cast(const MLOperand& input, const MLOperandDataType& type, const MLOperatorOptions& options) {
    return emlite::Val::call("cast", input, type, options).as<MLOperand>();
}

MLOperand MLGraphBuilder::clamp(const MLOperand& input) {
    return emlite::Val::call("clamp", input).as<MLOperand>();
}

MLOperand MLGraphBuilder::clamp(const MLOperand& input, const MLClampOptions& options) {
    return emlite::Val::call("clamp", input, options).as<MLOperand>();
}

MLOperand MLGraphBuilder::concat(const jsbind::TypedArray<MLOperand>& inputs, unsigned long axis) {
    return emlite::Val::call("concat", inputs, axis).as<MLOperand>();
}

MLOperand MLGraphBuilder::concat(const jsbind::TypedArray<MLOperand>& inputs, unsigned long axis, const MLOperatorOptions& options) {
    return emlite::Val::call("concat", inputs, axis, options).as<MLOperand>();
}

MLOperand MLGraphBuilder::conv2d(const MLOperand& input, const MLOperand& filter) {
    return emlite::Val::call("conv2d", input, filter).as<MLOperand>();
}

MLOperand MLGraphBuilder::conv2d(const MLOperand& input, const MLOperand& filter, const MLConv2dOptions& options) {
    return emlite::Val::call("conv2d", input, filter, options).as<MLOperand>();
}

MLOperand MLGraphBuilder::convTranspose2d(const MLOperand& input, const MLOperand& filter) {
    return emlite::Val::call("convTranspose2d", input, filter).as<MLOperand>();
}

MLOperand MLGraphBuilder::convTranspose2d(const MLOperand& input, const MLOperand& filter, const MLConvTranspose2dOptions& options) {
    return emlite::Val::call("convTranspose2d", input, filter, options).as<MLOperand>();
}

MLOperand MLGraphBuilder::cumulativeSum(const MLOperand& input, unsigned long axis) {
    return emlite::Val::call("cumulativeSum", input, axis).as<MLOperand>();
}

MLOperand MLGraphBuilder::cumulativeSum(const MLOperand& input, unsigned long axis, const MLCumulativeSumOptions& options) {
    return emlite::Val::call("cumulativeSum", input, axis, options).as<MLOperand>();
}

MLOperand MLGraphBuilder::add(const MLOperand& a, const MLOperand& b) {
    return emlite::Val::call("add", a, b).as<MLOperand>();
}

MLOperand MLGraphBuilder::add(const MLOperand& a, const MLOperand& b, const MLOperatorOptions& options) {
    return emlite::Val::call("add", a, b, options).as<MLOperand>();
}

MLOperand MLGraphBuilder::sub(const MLOperand& a, const MLOperand& b) {
    return emlite::Val::call("sub", a, b).as<MLOperand>();
}

MLOperand MLGraphBuilder::sub(const MLOperand& a, const MLOperand& b, const MLOperatorOptions& options) {
    return emlite::Val::call("sub", a, b, options).as<MLOperand>();
}

MLOperand MLGraphBuilder::mul(const MLOperand& a, const MLOperand& b) {
    return emlite::Val::call("mul", a, b).as<MLOperand>();
}

MLOperand MLGraphBuilder::mul(const MLOperand& a, const MLOperand& b, const MLOperatorOptions& options) {
    return emlite::Val::call("mul", a, b, options).as<MLOperand>();
}

MLOperand MLGraphBuilder::div(const MLOperand& a, const MLOperand& b) {
    return emlite::Val::call("div", a, b).as<MLOperand>();
}

MLOperand MLGraphBuilder::div(const MLOperand& a, const MLOperand& b, const MLOperatorOptions& options) {
    return emlite::Val::call("div", a, b, options).as<MLOperand>();
}

MLOperand MLGraphBuilder::max(const MLOperand& a, const MLOperand& b) {
    return emlite::Val::call("max", a, b).as<MLOperand>();
}

MLOperand MLGraphBuilder::max(const MLOperand& a, const MLOperand& b, const MLOperatorOptions& options) {
    return emlite::Val::call("max", a, b, options).as<MLOperand>();
}

MLOperand MLGraphBuilder::min(const MLOperand& a, const MLOperand& b) {
    return emlite::Val::call("min", a, b).as<MLOperand>();
}

MLOperand MLGraphBuilder::min(const MLOperand& a, const MLOperand& b, const MLOperatorOptions& options) {
    return emlite::Val::call("min", a, b, options).as<MLOperand>();
}

MLOperand MLGraphBuilder::pow(const MLOperand& a, const MLOperand& b) {
    return emlite::Val::call("pow", a, b).as<MLOperand>();
}

MLOperand MLGraphBuilder::pow(const MLOperand& a, const MLOperand& b, const MLOperatorOptions& options) {
    return emlite::Val::call("pow", a, b, options).as<MLOperand>();
}

MLOperand MLGraphBuilder::equal(const MLOperand& a, const MLOperand& b) {
    return emlite::Val::call("equal", a, b).as<MLOperand>();
}

MLOperand MLGraphBuilder::equal(const MLOperand& a, const MLOperand& b, const MLOperatorOptions& options) {
    return emlite::Val::call("equal", a, b, options).as<MLOperand>();
}

MLOperand MLGraphBuilder::notEqual(const MLOperand& a, const MLOperand& b) {
    return emlite::Val::call("notEqual", a, b).as<MLOperand>();
}

MLOperand MLGraphBuilder::notEqual(const MLOperand& a, const MLOperand& b, const MLOperatorOptions& options) {
    return emlite::Val::call("notEqual", a, b, options).as<MLOperand>();
}

MLOperand MLGraphBuilder::greater(const MLOperand& a, const MLOperand& b) {
    return emlite::Val::call("greater", a, b).as<MLOperand>();
}

MLOperand MLGraphBuilder::greater(const MLOperand& a, const MLOperand& b, const MLOperatorOptions& options) {
    return emlite::Val::call("greater", a, b, options).as<MLOperand>();
}

MLOperand MLGraphBuilder::greaterOrEqual(const MLOperand& a, const MLOperand& b) {
    return emlite::Val::call("greaterOrEqual", a, b).as<MLOperand>();
}

MLOperand MLGraphBuilder::greaterOrEqual(const MLOperand& a, const MLOperand& b, const MLOperatorOptions& options) {
    return emlite::Val::call("greaterOrEqual", a, b, options).as<MLOperand>();
}

MLOperand MLGraphBuilder::lesser(const MLOperand& a, const MLOperand& b) {
    return emlite::Val::call("lesser", a, b).as<MLOperand>();
}

MLOperand MLGraphBuilder::lesser(const MLOperand& a, const MLOperand& b, const MLOperatorOptions& options) {
    return emlite::Val::call("lesser", a, b, options).as<MLOperand>();
}

MLOperand MLGraphBuilder::lesserOrEqual(const MLOperand& a, const MLOperand& b) {
    return emlite::Val::call("lesserOrEqual", a, b).as<MLOperand>();
}

MLOperand MLGraphBuilder::lesserOrEqual(const MLOperand& a, const MLOperand& b, const MLOperatorOptions& options) {
    return emlite::Val::call("lesserOrEqual", a, b, options).as<MLOperand>();
}

MLOperand MLGraphBuilder::logicalNot(const MLOperand& a) {
    return emlite::Val::call("logicalNot", a).as<MLOperand>();
}

MLOperand MLGraphBuilder::logicalNot(const MLOperand& a, const MLOperatorOptions& options) {
    return emlite::Val::call("logicalNot", a, options).as<MLOperand>();
}

MLOperand MLGraphBuilder::logicalAnd(const MLOperand& a, const MLOperand& b) {
    return emlite::Val::call("logicalAnd", a, b).as<MLOperand>();
}

MLOperand MLGraphBuilder::logicalAnd(const MLOperand& a, const MLOperand& b, const MLOperatorOptions& options) {
    return emlite::Val::call("logicalAnd", a, b, options).as<MLOperand>();
}

MLOperand MLGraphBuilder::logicalOr(const MLOperand& a, const MLOperand& b) {
    return emlite::Val::call("logicalOr", a, b).as<MLOperand>();
}

MLOperand MLGraphBuilder::logicalOr(const MLOperand& a, const MLOperand& b, const MLOperatorOptions& options) {
    return emlite::Val::call("logicalOr", a, b, options).as<MLOperand>();
}

MLOperand MLGraphBuilder::logicalXor(const MLOperand& a, const MLOperand& b) {
    return emlite::Val::call("logicalXor", a, b).as<MLOperand>();
}

MLOperand MLGraphBuilder::logicalXor(const MLOperand& a, const MLOperand& b, const MLOperatorOptions& options) {
    return emlite::Val::call("logicalXor", a, b, options).as<MLOperand>();
}

MLOperand MLGraphBuilder::abs(const MLOperand& input) {
    return emlite::Val::call("abs", input).as<MLOperand>();
}

MLOperand MLGraphBuilder::abs(const MLOperand& input, const MLOperatorOptions& options) {
    return emlite::Val::call("abs", input, options).as<MLOperand>();
}

MLOperand MLGraphBuilder::ceil(const MLOperand& input) {
    return emlite::Val::call("ceil", input).as<MLOperand>();
}

MLOperand MLGraphBuilder::ceil(const MLOperand& input, const MLOperatorOptions& options) {
    return emlite::Val::call("ceil", input, options).as<MLOperand>();
}

MLOperand MLGraphBuilder::cos(const MLOperand& input) {
    return emlite::Val::call("cos", input).as<MLOperand>();
}

MLOperand MLGraphBuilder::cos(const MLOperand& input, const MLOperatorOptions& options) {
    return emlite::Val::call("cos", input, options).as<MLOperand>();
}

MLOperand MLGraphBuilder::erf(const MLOperand& input) {
    return emlite::Val::call("erf", input).as<MLOperand>();
}

MLOperand MLGraphBuilder::erf(const MLOperand& input, const MLOperatorOptions& options) {
    return emlite::Val::call("erf", input, options).as<MLOperand>();
}

MLOperand MLGraphBuilder::exp(const MLOperand& input) {
    return emlite::Val::call("exp", input).as<MLOperand>();
}

MLOperand MLGraphBuilder::exp(const MLOperand& input, const MLOperatorOptions& options) {
    return emlite::Val::call("exp", input, options).as<MLOperand>();
}

MLOperand MLGraphBuilder::floor(const MLOperand& input) {
    return emlite::Val::call("floor", input).as<MLOperand>();
}

MLOperand MLGraphBuilder::floor(const MLOperand& input, const MLOperatorOptions& options) {
    return emlite::Val::call("floor", input, options).as<MLOperand>();
}

MLOperand MLGraphBuilder::identity(const MLOperand& input) {
    return emlite::Val::call("identity", input).as<MLOperand>();
}

MLOperand MLGraphBuilder::identity(const MLOperand& input, const MLOperatorOptions& options) {
    return emlite::Val::call("identity", input, options).as<MLOperand>();
}

MLOperand MLGraphBuilder::log(const MLOperand& input) {
    return emlite::Val::call("log", input).as<MLOperand>();
}

MLOperand MLGraphBuilder::log(const MLOperand& input, const MLOperatorOptions& options) {
    return emlite::Val::call("log", input, options).as<MLOperand>();
}

MLOperand MLGraphBuilder::neg(const MLOperand& input) {
    return emlite::Val::call("neg", input).as<MLOperand>();
}

MLOperand MLGraphBuilder::neg(const MLOperand& input, const MLOperatorOptions& options) {
    return emlite::Val::call("neg", input, options).as<MLOperand>();
}

MLOperand MLGraphBuilder::reciprocal(const MLOperand& input) {
    return emlite::Val::call("reciprocal", input).as<MLOperand>();
}

MLOperand MLGraphBuilder::reciprocal(const MLOperand& input, const MLOperatorOptions& options) {
    return emlite::Val::call("reciprocal", input, options).as<MLOperand>();
}

MLOperand MLGraphBuilder::sin(const MLOperand& input) {
    return emlite::Val::call("sin", input).as<MLOperand>();
}

MLOperand MLGraphBuilder::sin(const MLOperand& input, const MLOperatorOptions& options) {
    return emlite::Val::call("sin", input, options).as<MLOperand>();
}

MLOperand MLGraphBuilder::sign(const MLOperand& input) {
    return emlite::Val::call("sign", input).as<MLOperand>();
}

MLOperand MLGraphBuilder::sign(const MLOperand& input, const MLOperatorOptions& options) {
    return emlite::Val::call("sign", input, options).as<MLOperand>();
}

MLOperand MLGraphBuilder::sqrt(const MLOperand& input) {
    return emlite::Val::call("sqrt", input).as<MLOperand>();
}

MLOperand MLGraphBuilder::sqrt(const MLOperand& input, const MLOperatorOptions& options) {
    return emlite::Val::call("sqrt", input, options).as<MLOperand>();
}

MLOperand MLGraphBuilder::tan(const MLOperand& input) {
    return emlite::Val::call("tan", input).as<MLOperand>();
}

MLOperand MLGraphBuilder::tan(const MLOperand& input, const MLOperatorOptions& options) {
    return emlite::Val::call("tan", input, options).as<MLOperand>();
}

MLOperand MLGraphBuilder::dequantizeLinear(const MLOperand& input, const MLOperand& scale, const MLOperand& zeroPoint) {
    return emlite::Val::call("dequantizeLinear", input, scale, zeroPoint).as<MLOperand>();
}

MLOperand MLGraphBuilder::dequantizeLinear(const MLOperand& input, const MLOperand& scale, const MLOperand& zeroPoint, const MLOperatorOptions& options) {
    return emlite::Val::call("dequantizeLinear", input, scale, zeroPoint, options).as<MLOperand>();
}

MLOperand MLGraphBuilder::quantizeLinear(const MLOperand& input, const MLOperand& scale, const MLOperand& zeroPoint) {
    return emlite::Val::call("quantizeLinear", input, scale, zeroPoint).as<MLOperand>();
}

MLOperand MLGraphBuilder::quantizeLinear(const MLOperand& input, const MLOperand& scale, const MLOperand& zeroPoint, const MLOperatorOptions& options) {
    return emlite::Val::call("quantizeLinear", input, scale, zeroPoint, options).as<MLOperand>();
}

MLOperand MLGraphBuilder::elu(const MLOperand& input) {
    return emlite::Val::call("elu", input).as<MLOperand>();
}

MLOperand MLGraphBuilder::elu(const MLOperand& input, const MLEluOptions& options) {
    return emlite::Val::call("elu", input, options).as<MLOperand>();
}

MLOperand MLGraphBuilder::expand(const MLOperand& input, jsbind::TypedArray<unsigned long> newShape) {
    return emlite::Val::call("expand", input, newShape).as<MLOperand>();
}

MLOperand MLGraphBuilder::expand(const MLOperand& input, jsbind::TypedArray<unsigned long> newShape, const MLOperatorOptions& options) {
    return emlite::Val::call("expand", input, newShape, options).as<MLOperand>();
}

MLOperand MLGraphBuilder::gather(const MLOperand& input, const MLOperand& indices) {
    return emlite::Val::call("gather", input, indices).as<MLOperand>();
}

MLOperand MLGraphBuilder::gather(const MLOperand& input, const MLOperand& indices, const MLGatherOptions& options) {
    return emlite::Val::call("gather", input, indices, options).as<MLOperand>();
}

MLOperand MLGraphBuilder::gatherElements(const MLOperand& input, const MLOperand& indices) {
    return emlite::Val::call("gatherElements", input, indices).as<MLOperand>();
}

MLOperand MLGraphBuilder::gatherElements(const MLOperand& input, const MLOperand& indices, const MLGatherOptions& options) {
    return emlite::Val::call("gatherElements", input, indices, options).as<MLOperand>();
}

MLOperand MLGraphBuilder::gatherND(const MLOperand& input, const MLOperand& indices) {
    return emlite::Val::call("gatherND", input, indices).as<MLOperand>();
}

MLOperand MLGraphBuilder::gatherND(const MLOperand& input, const MLOperand& indices, const MLOperatorOptions& options) {
    return emlite::Val::call("gatherND", input, indices, options).as<MLOperand>();
}

MLOperand MLGraphBuilder::gelu(const MLOperand& input) {
    return emlite::Val::call("gelu", input).as<MLOperand>();
}

MLOperand MLGraphBuilder::gelu(const MLOperand& input, const MLOperatorOptions& options) {
    return emlite::Val::call("gelu", input, options).as<MLOperand>();
}

MLOperand MLGraphBuilder::gemm(const MLOperand& a, const MLOperand& b) {
    return emlite::Val::call("gemm", a, b).as<MLOperand>();
}

MLOperand MLGraphBuilder::gemm(const MLOperand& a, const MLOperand& b, const MLGemmOptions& options) {
    return emlite::Val::call("gemm", a, b, options).as<MLOperand>();
}

jsbind::TypedArray<MLOperand> MLGraphBuilder::gru(const MLOperand& input, const MLOperand& weight, const MLOperand& recurrentWeight, unsigned long steps, unsigned long hiddenSize) {
    return emlite::Val::call("gru", input, weight, recurrentWeight, steps, hiddenSize).as<jsbind::TypedArray<MLOperand>>();
}

jsbind::TypedArray<MLOperand> MLGraphBuilder::gru(const MLOperand& input, const MLOperand& weight, const MLOperand& recurrentWeight, unsigned long steps, unsigned long hiddenSize, const MLGruOptions& options) {
    return emlite::Val::call("gru", input, weight, recurrentWeight, steps, hiddenSize, options).as<jsbind::TypedArray<MLOperand>>();
}

MLOperand MLGraphBuilder::gruCell(const MLOperand& input, const MLOperand& weight, const MLOperand& recurrentWeight, const MLOperand& hiddenState, unsigned long hiddenSize) {
    return emlite::Val::call("gruCell", input, weight, recurrentWeight, hiddenState, hiddenSize).as<MLOperand>();
}

MLOperand MLGraphBuilder::gruCell(const MLOperand& input, const MLOperand& weight, const MLOperand& recurrentWeight, const MLOperand& hiddenState, unsigned long hiddenSize, const MLGruCellOptions& options) {
    return emlite::Val::call("gruCell", input, weight, recurrentWeight, hiddenState, hiddenSize, options).as<MLOperand>();
}

MLOperand MLGraphBuilder::hardSigmoid(const MLOperand& input) {
    return emlite::Val::call("hardSigmoid", input).as<MLOperand>();
}

MLOperand MLGraphBuilder::hardSigmoid(const MLOperand& input, const MLHardSigmoidOptions& options) {
    return emlite::Val::call("hardSigmoid", input, options).as<MLOperand>();
}

MLOperand MLGraphBuilder::hardSwish(const MLOperand& input) {
    return emlite::Val::call("hardSwish", input).as<MLOperand>();
}

MLOperand MLGraphBuilder::hardSwish(const MLOperand& input, const MLOperatorOptions& options) {
    return emlite::Val::call("hardSwish", input, options).as<MLOperand>();
}

MLOperand MLGraphBuilder::instanceNormalization(const MLOperand& input) {
    return emlite::Val::call("instanceNormalization", input).as<MLOperand>();
}

MLOperand MLGraphBuilder::instanceNormalization(const MLOperand& input, const MLInstanceNormalizationOptions& options) {
    return emlite::Val::call("instanceNormalization", input, options).as<MLOperand>();
}

MLOperand MLGraphBuilder::layerNormalization(const MLOperand& input) {
    return emlite::Val::call("layerNormalization", input).as<MLOperand>();
}

MLOperand MLGraphBuilder::layerNormalization(const MLOperand& input, const MLLayerNormalizationOptions& options) {
    return emlite::Val::call("layerNormalization", input, options).as<MLOperand>();
}

MLOperand MLGraphBuilder::leakyRelu(const MLOperand& input) {
    return emlite::Val::call("leakyRelu", input).as<MLOperand>();
}

MLOperand MLGraphBuilder::leakyRelu(const MLOperand& input, const MLLeakyReluOptions& options) {
    return emlite::Val::call("leakyRelu", input, options).as<MLOperand>();
}

MLOperand MLGraphBuilder::linear(const MLOperand& input) {
    return emlite::Val::call("linear", input).as<MLOperand>();
}

MLOperand MLGraphBuilder::linear(const MLOperand& input, const MLLinearOptions& options) {
    return emlite::Val::call("linear", input, options).as<MLOperand>();
}

jsbind::TypedArray<MLOperand> MLGraphBuilder::lstm(const MLOperand& input, const MLOperand& weight, const MLOperand& recurrentWeight, unsigned long steps, unsigned long hiddenSize) {
    return emlite::Val::call("lstm", input, weight, recurrentWeight, steps, hiddenSize).as<jsbind::TypedArray<MLOperand>>();
}

jsbind::TypedArray<MLOperand> MLGraphBuilder::lstm(const MLOperand& input, const MLOperand& weight, const MLOperand& recurrentWeight, unsigned long steps, unsigned long hiddenSize, const MLLstmOptions& options) {
    return emlite::Val::call("lstm", input, weight, recurrentWeight, steps, hiddenSize, options).as<jsbind::TypedArray<MLOperand>>();
}

jsbind::TypedArray<MLOperand> MLGraphBuilder::lstmCell(const MLOperand& input, const MLOperand& weight, const MLOperand& recurrentWeight, const MLOperand& hiddenState, const MLOperand& cellState, unsigned long hiddenSize) {
    return emlite::Val::call("lstmCell", input, weight, recurrentWeight, hiddenState, cellState, hiddenSize).as<jsbind::TypedArray<MLOperand>>();
}

jsbind::TypedArray<MLOperand> MLGraphBuilder::lstmCell(const MLOperand& input, const MLOperand& weight, const MLOperand& recurrentWeight, const MLOperand& hiddenState, const MLOperand& cellState, unsigned long hiddenSize, const MLLstmCellOptions& options) {
    return emlite::Val::call("lstmCell", input, weight, recurrentWeight, hiddenState, cellState, hiddenSize, options).as<jsbind::TypedArray<MLOperand>>();
}

MLOperand MLGraphBuilder::matmul(const MLOperand& a, const MLOperand& b) {
    return emlite::Val::call("matmul", a, b).as<MLOperand>();
}

MLOperand MLGraphBuilder::matmul(const MLOperand& a, const MLOperand& b, const MLOperatorOptions& options) {
    return emlite::Val::call("matmul", a, b, options).as<MLOperand>();
}

MLOperand MLGraphBuilder::pad(const MLOperand& input, jsbind::TypedArray<unsigned long> beginningPadding, jsbind::TypedArray<unsigned long> endingPadding) {
    return emlite::Val::call("pad", input, beginningPadding, endingPadding).as<MLOperand>();
}

MLOperand MLGraphBuilder::pad(const MLOperand& input, jsbind::TypedArray<unsigned long> beginningPadding, jsbind::TypedArray<unsigned long> endingPadding, const MLPadOptions& options) {
    return emlite::Val::call("pad", input, beginningPadding, endingPadding, options).as<MLOperand>();
}

MLOperand MLGraphBuilder::averagePool2d(const MLOperand& input) {
    return emlite::Val::call("averagePool2d", input).as<MLOperand>();
}

MLOperand MLGraphBuilder::averagePool2d(const MLOperand& input, const MLPool2dOptions& options) {
    return emlite::Val::call("averagePool2d", input, options).as<MLOperand>();
}

MLOperand MLGraphBuilder::l2Pool2d(const MLOperand& input) {
    return emlite::Val::call("l2Pool2d", input).as<MLOperand>();
}

MLOperand MLGraphBuilder::l2Pool2d(const MLOperand& input, const MLPool2dOptions& options) {
    return emlite::Val::call("l2Pool2d", input, options).as<MLOperand>();
}

MLOperand MLGraphBuilder::maxPool2d(const MLOperand& input) {
    return emlite::Val::call("maxPool2d", input).as<MLOperand>();
}

MLOperand MLGraphBuilder::maxPool2d(const MLOperand& input, const MLPool2dOptions& options) {
    return emlite::Val::call("maxPool2d", input, options).as<MLOperand>();
}

MLOperand MLGraphBuilder::prelu(const MLOperand& input, const MLOperand& slope) {
    return emlite::Val::call("prelu", input, slope).as<MLOperand>();
}

MLOperand MLGraphBuilder::prelu(const MLOperand& input, const MLOperand& slope, const MLOperatorOptions& options) {
    return emlite::Val::call("prelu", input, slope, options).as<MLOperand>();
}

MLOperand MLGraphBuilder::reduceL1(const MLOperand& input) {
    return emlite::Val::call("reduceL1", input).as<MLOperand>();
}

MLOperand MLGraphBuilder::reduceL1(const MLOperand& input, const MLReduceOptions& options) {
    return emlite::Val::call("reduceL1", input, options).as<MLOperand>();
}

MLOperand MLGraphBuilder::reduceL2(const MLOperand& input) {
    return emlite::Val::call("reduceL2", input).as<MLOperand>();
}

MLOperand MLGraphBuilder::reduceL2(const MLOperand& input, const MLReduceOptions& options) {
    return emlite::Val::call("reduceL2", input, options).as<MLOperand>();
}

MLOperand MLGraphBuilder::reduceLogSum(const MLOperand& input) {
    return emlite::Val::call("reduceLogSum", input).as<MLOperand>();
}

MLOperand MLGraphBuilder::reduceLogSum(const MLOperand& input, const MLReduceOptions& options) {
    return emlite::Val::call("reduceLogSum", input, options).as<MLOperand>();
}

MLOperand MLGraphBuilder::reduceLogSumExp(const MLOperand& input) {
    return emlite::Val::call("reduceLogSumExp", input).as<MLOperand>();
}

MLOperand MLGraphBuilder::reduceLogSumExp(const MLOperand& input, const MLReduceOptions& options) {
    return emlite::Val::call("reduceLogSumExp", input, options).as<MLOperand>();
}

MLOperand MLGraphBuilder::reduceMax(const MLOperand& input) {
    return emlite::Val::call("reduceMax", input).as<MLOperand>();
}

MLOperand MLGraphBuilder::reduceMax(const MLOperand& input, const MLReduceOptions& options) {
    return emlite::Val::call("reduceMax", input, options).as<MLOperand>();
}

MLOperand MLGraphBuilder::reduceMean(const MLOperand& input) {
    return emlite::Val::call("reduceMean", input).as<MLOperand>();
}

MLOperand MLGraphBuilder::reduceMean(const MLOperand& input, const MLReduceOptions& options) {
    return emlite::Val::call("reduceMean", input, options).as<MLOperand>();
}

MLOperand MLGraphBuilder::reduceMin(const MLOperand& input) {
    return emlite::Val::call("reduceMin", input).as<MLOperand>();
}

MLOperand MLGraphBuilder::reduceMin(const MLOperand& input, const MLReduceOptions& options) {
    return emlite::Val::call("reduceMin", input, options).as<MLOperand>();
}

MLOperand MLGraphBuilder::reduceProduct(const MLOperand& input) {
    return emlite::Val::call("reduceProduct", input).as<MLOperand>();
}

MLOperand MLGraphBuilder::reduceProduct(const MLOperand& input, const MLReduceOptions& options) {
    return emlite::Val::call("reduceProduct", input, options).as<MLOperand>();
}

MLOperand MLGraphBuilder::reduceSum(const MLOperand& input) {
    return emlite::Val::call("reduceSum", input).as<MLOperand>();
}

MLOperand MLGraphBuilder::reduceSum(const MLOperand& input, const MLReduceOptions& options) {
    return emlite::Val::call("reduceSum", input, options).as<MLOperand>();
}

MLOperand MLGraphBuilder::reduceSumSquare(const MLOperand& input) {
    return emlite::Val::call("reduceSumSquare", input).as<MLOperand>();
}

MLOperand MLGraphBuilder::reduceSumSquare(const MLOperand& input, const MLReduceOptions& options) {
    return emlite::Val::call("reduceSumSquare", input, options).as<MLOperand>();
}

MLOperand MLGraphBuilder::relu(const MLOperand& input) {
    return emlite::Val::call("relu", input).as<MLOperand>();
}

MLOperand MLGraphBuilder::relu(const MLOperand& input, const MLOperatorOptions& options) {
    return emlite::Val::call("relu", input, options).as<MLOperand>();
}

MLOperand MLGraphBuilder::resample2d(const MLOperand& input) {
    return emlite::Val::call("resample2d", input).as<MLOperand>();
}

MLOperand MLGraphBuilder::resample2d(const MLOperand& input, const MLResample2dOptions& options) {
    return emlite::Val::call("resample2d", input, options).as<MLOperand>();
}

MLOperand MLGraphBuilder::reshape(const MLOperand& input, jsbind::TypedArray<unsigned long> newShape) {
    return emlite::Val::call("reshape", input, newShape).as<MLOperand>();
}

MLOperand MLGraphBuilder::reshape(const MLOperand& input, jsbind::TypedArray<unsigned long> newShape, const MLOperatorOptions& options) {
    return emlite::Val::call("reshape", input, newShape, options).as<MLOperand>();
}

MLOperand MLGraphBuilder::reverse(const MLOperand& input) {
    return emlite::Val::call("reverse", input).as<MLOperand>();
}

MLOperand MLGraphBuilder::reverse(const MLOperand& input, const MLReverseOptions& options) {
    return emlite::Val::call("reverse", input, options).as<MLOperand>();
}

MLOperand MLGraphBuilder::scatterElements(const MLOperand& input, const MLOperand& indices, const MLOperand& updates) {
    return emlite::Val::call("scatterElements", input, indices, updates).as<MLOperand>();
}

MLOperand MLGraphBuilder::scatterElements(const MLOperand& input, const MLOperand& indices, const MLOperand& updates, const MLScatterOptions& options) {
    return emlite::Val::call("scatterElements", input, indices, updates, options).as<MLOperand>();
}

MLOperand MLGraphBuilder::scatterND(const MLOperand& input, const MLOperand& indices, const MLOperand& updates) {
    return emlite::Val::call("scatterND", input, indices, updates).as<MLOperand>();
}

MLOperand MLGraphBuilder::scatterND(const MLOperand& input, const MLOperand& indices, const MLOperand& updates, const MLOperatorOptions& options) {
    return emlite::Val::call("scatterND", input, indices, updates, options).as<MLOperand>();
}

MLOperand MLGraphBuilder::sigmoid(const MLOperand& input) {
    return emlite::Val::call("sigmoid", input).as<MLOperand>();
}

MLOperand MLGraphBuilder::sigmoid(const MLOperand& input, const MLOperatorOptions& options) {
    return emlite::Val::call("sigmoid", input, options).as<MLOperand>();
}

MLOperand MLGraphBuilder::slice(const MLOperand& input, jsbind::TypedArray<unsigned long> starts, jsbind::TypedArray<unsigned long> sizes) {
    return emlite::Val::call("slice", input, starts, sizes).as<MLOperand>();
}

MLOperand MLGraphBuilder::slice(const MLOperand& input, jsbind::TypedArray<unsigned long> starts, jsbind::TypedArray<unsigned long> sizes, const MLSliceOptions& options) {
    return emlite::Val::call("slice", input, starts, sizes, options).as<MLOperand>();
}

MLOperand MLGraphBuilder::softmax(const MLOperand& input, unsigned long axis) {
    return emlite::Val::call("softmax", input, axis).as<MLOperand>();
}

MLOperand MLGraphBuilder::softmax(const MLOperand& input, unsigned long axis, const MLOperatorOptions& options) {
    return emlite::Val::call("softmax", input, axis, options).as<MLOperand>();
}

MLOperand MLGraphBuilder::softplus(const MLOperand& input) {
    return emlite::Val::call("softplus", input).as<MLOperand>();
}

MLOperand MLGraphBuilder::softplus(const MLOperand& input, const MLOperatorOptions& options) {
    return emlite::Val::call("softplus", input, options).as<MLOperand>();
}

MLOperand MLGraphBuilder::softsign(const MLOperand& input) {
    return emlite::Val::call("softsign", input).as<MLOperand>();
}

MLOperand MLGraphBuilder::softsign(const MLOperand& input, const MLOperatorOptions& options) {
    return emlite::Val::call("softsign", input, options).as<MLOperand>();
}

jsbind::TypedArray<MLOperand> MLGraphBuilder::split(const MLOperand& input, const jsbind::Any& splits) {
    return emlite::Val::call("split", input, splits).as<jsbind::TypedArray<MLOperand>>();
}

jsbind::TypedArray<MLOperand> MLGraphBuilder::split(const MLOperand& input, const jsbind::Any& splits, const MLSplitOptions& options) {
    return emlite::Val::call("split", input, splits, options).as<jsbind::TypedArray<MLOperand>>();
}

MLOperand MLGraphBuilder::tanh(const MLOperand& input) {
    return emlite::Val::call("tanh", input).as<MLOperand>();
}

MLOperand MLGraphBuilder::tanh(const MLOperand& input, const MLOperatorOptions& options) {
    return emlite::Val::call("tanh", input, options).as<MLOperand>();
}

MLOperand MLGraphBuilder::tile(const MLOperand& input, jsbind::TypedArray<unsigned long> repetitions) {
    return emlite::Val::call("tile", input, repetitions).as<MLOperand>();
}

MLOperand MLGraphBuilder::tile(const MLOperand& input, jsbind::TypedArray<unsigned long> repetitions, const MLOperatorOptions& options) {
    return emlite::Val::call("tile", input, repetitions, options).as<MLOperand>();
}

MLOperand MLGraphBuilder::transpose(const MLOperand& input) {
    return emlite::Val::call("transpose", input).as<MLOperand>();
}

MLOperand MLGraphBuilder::transpose(const MLOperand& input, const MLTransposeOptions& options) {
    return emlite::Val::call("transpose", input, options).as<MLOperand>();
}

MLOperand MLGraphBuilder::triangular(const MLOperand& input) {
    return emlite::Val::call("triangular", input).as<MLOperand>();
}

MLOperand MLGraphBuilder::triangular(const MLOperand& input, const MLTriangularOptions& options) {
    return emlite::Val::call("triangular", input, options).as<MLOperand>();
}

MLOperand MLGraphBuilder::where(const MLOperand& condition, const MLOperand& trueValue, const MLOperand& falseValue) {
    return emlite::Val::call("where", condition, trueValue, falseValue).as<MLOperand>();
}

MLOperand MLGraphBuilder::where(const MLOperand& condition, const MLOperand& trueValue, const MLOperand& falseValue, const MLOperatorOptions& options) {
    return emlite::Val::call("where", condition, trueValue, falseValue, options).as<MLOperand>();
}


} // namespace webbind