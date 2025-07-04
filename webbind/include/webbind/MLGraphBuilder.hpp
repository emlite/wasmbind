#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "MLContext.hpp"
#include "enums.hpp"

class MLOperand;
class MLTensor;
class MLGraph;
class MLArgMinMaxOptions;
class MLBatchNormalizationOptions;
class MLOperatorOptions;
class MLClampOptions;
class MLConv2dOptions;
class MLConvTranspose2dOptions;
class MLCumulativeSumOptions;
class MLEluOptions;
class MLGatherOptions;
class MLGemmOptions;
class MLGruOptions;
class MLGruCellOptions;
class MLHardSigmoidOptions;
class MLInstanceNormalizationOptions;
class MLLayerNormalizationOptions;
class MLLeakyReluOptions;
class MLLinearOptions;
class MLLstmOptions;
class MLLstmCellOptions;
class MLPadOptions;
class MLPool2dOptions;
class MLReduceOptions;
class MLResample2dOptions;
class MLReverseOptions;
class MLScatterOptions;
class MLSliceOptions;
class MLSplitOptions;
class MLTransposeOptions;
class MLTriangularOptions;


class MLArgMinMaxOptions : public emlite::Val {
  explicit MLArgMinMaxOptions(Handle h) noexcept;
public:
    static MLArgMinMaxOptions take_ownership(Handle h) noexcept;
    explicit MLArgMinMaxOptions(const emlite::Val &val) noexcept;
    MLArgMinMaxOptions() noexcept;
    MLArgMinMaxOptions clone() const noexcept;
    bool keepDimensions() const;
    void keepDimensions(bool value);
    MLOperandDataType outputDataType() const;
    void outputDataType(const MLOperandDataType& value);
};

class MLBatchNormalizationOptions : public emlite::Val {
  explicit MLBatchNormalizationOptions(Handle h) noexcept;
public:
    static MLBatchNormalizationOptions take_ownership(Handle h) noexcept;
    explicit MLBatchNormalizationOptions(const emlite::Val &val) noexcept;
    MLBatchNormalizationOptions() noexcept;
    MLBatchNormalizationOptions clone() const noexcept;
    MLOperand scale() const;
    void scale(const MLOperand& value);
    MLOperand bias() const;
    void bias(const MLOperand& value);
    unsigned long axis() const;
    void axis(unsigned long value);
    double epsilon() const;
    void epsilon(double value);
};

class MLOperatorOptions : public emlite::Val {
  explicit MLOperatorOptions(Handle h) noexcept;
public:
    static MLOperatorOptions take_ownership(Handle h) noexcept;
    explicit MLOperatorOptions(const emlite::Val &val) noexcept;
    MLOperatorOptions() noexcept;
    MLOperatorOptions clone() const noexcept;
    jsbind::USVString label() const;
    void label(const jsbind::USVString& value);
};

class MLClampOptions : public emlite::Val {
  explicit MLClampOptions(Handle h) noexcept;
public:
    static MLClampOptions take_ownership(Handle h) noexcept;
    explicit MLClampOptions(const emlite::Val &val) noexcept;
    MLClampOptions() noexcept;
    MLClampOptions clone() const noexcept;
    jsbind::Any minValue() const;
    void minValue(const jsbind::Any& value);
    jsbind::Any maxValue() const;
    void maxValue(const jsbind::Any& value);
};

class MLConv2dOptions : public emlite::Val {
  explicit MLConv2dOptions(Handle h) noexcept;
public:
    static MLConv2dOptions take_ownership(Handle h) noexcept;
    explicit MLConv2dOptions(const emlite::Val &val) noexcept;
    MLConv2dOptions() noexcept;
    MLConv2dOptions clone() const noexcept;
    jsbind::Sequence<unsigned long> padding() const;
    void padding(jsbind::Sequence<unsigned long> value);
    jsbind::Sequence<unsigned long> strides() const;
    void strides(jsbind::Sequence<unsigned long> value);
    jsbind::Sequence<unsigned long> dilations() const;
    void dilations(jsbind::Sequence<unsigned long> value);
    unsigned long groups() const;
    void groups(unsigned long value);
    MLInputOperandLayout inputLayout() const;
    void inputLayout(const MLInputOperandLayout& value);
    MLConv2dFilterOperandLayout filterLayout() const;
    void filterLayout(const MLConv2dFilterOperandLayout& value);
    MLOperand bias() const;
    void bias(const MLOperand& value);
};

class MLConvTranspose2dOptions : public emlite::Val {
  explicit MLConvTranspose2dOptions(Handle h) noexcept;
public:
    static MLConvTranspose2dOptions take_ownership(Handle h) noexcept;
    explicit MLConvTranspose2dOptions(const emlite::Val &val) noexcept;
    MLConvTranspose2dOptions() noexcept;
    MLConvTranspose2dOptions clone() const noexcept;
    jsbind::Sequence<unsigned long> padding() const;
    void padding(jsbind::Sequence<unsigned long> value);
    jsbind::Sequence<unsigned long> strides() const;
    void strides(jsbind::Sequence<unsigned long> value);
    jsbind::Sequence<unsigned long> dilations() const;
    void dilations(jsbind::Sequence<unsigned long> value);
    jsbind::Sequence<unsigned long> outputPadding() const;
    void outputPadding(jsbind::Sequence<unsigned long> value);
    jsbind::Sequence<unsigned long> outputSizes() const;
    void outputSizes(jsbind::Sequence<unsigned long> value);
    unsigned long groups() const;
    void groups(unsigned long value);
    MLInputOperandLayout inputLayout() const;
    void inputLayout(const MLInputOperandLayout& value);
    MLConvTranspose2dFilterOperandLayout filterLayout() const;
    void filterLayout(const MLConvTranspose2dFilterOperandLayout& value);
    MLOperand bias() const;
    void bias(const MLOperand& value);
};

class MLCumulativeSumOptions : public emlite::Val {
  explicit MLCumulativeSumOptions(Handle h) noexcept;
public:
    static MLCumulativeSumOptions take_ownership(Handle h) noexcept;
    explicit MLCumulativeSumOptions(const emlite::Val &val) noexcept;
    MLCumulativeSumOptions() noexcept;
    MLCumulativeSumOptions clone() const noexcept;
    bool exclusive() const;
    void exclusive(bool value);
    bool reversed() const;
    void reversed(bool value);
};

class MLEluOptions : public emlite::Val {
  explicit MLEluOptions(Handle h) noexcept;
public:
    static MLEluOptions take_ownership(Handle h) noexcept;
    explicit MLEluOptions(const emlite::Val &val) noexcept;
    MLEluOptions() noexcept;
    MLEluOptions clone() const noexcept;
    double alpha() const;
    void alpha(double value);
};

class MLGatherOptions : public emlite::Val {
  explicit MLGatherOptions(Handle h) noexcept;
public:
    static MLGatherOptions take_ownership(Handle h) noexcept;
    explicit MLGatherOptions(const emlite::Val &val) noexcept;
    MLGatherOptions() noexcept;
    MLGatherOptions clone() const noexcept;
    unsigned long axis() const;
    void axis(unsigned long value);
};

class MLGemmOptions : public emlite::Val {
  explicit MLGemmOptions(Handle h) noexcept;
public:
    static MLGemmOptions take_ownership(Handle h) noexcept;
    explicit MLGemmOptions(const emlite::Val &val) noexcept;
    MLGemmOptions() noexcept;
    MLGemmOptions clone() const noexcept;
    MLOperand c() const;
    void c(const MLOperand& value);
    double alpha() const;
    void alpha(double value);
    double beta() const;
    void beta(double value);
    bool aTranspose() const;
    void aTranspose(bool value);
    bool bTranspose() const;
    void bTranspose(bool value);
};

class MLGruOptions : public emlite::Val {
  explicit MLGruOptions(Handle h) noexcept;
public:
    static MLGruOptions take_ownership(Handle h) noexcept;
    explicit MLGruOptions(const emlite::Val &val) noexcept;
    MLGruOptions() noexcept;
    MLGruOptions clone() const noexcept;
    MLOperand bias() const;
    void bias(const MLOperand& value);
    MLOperand recurrentBias() const;
    void recurrentBias(const MLOperand& value);
    MLOperand initialHiddenState() const;
    void initialHiddenState(const MLOperand& value);
    bool resetAfter() const;
    void resetAfter(bool value);
    bool returnSequence() const;
    void returnSequence(bool value);
    MLRecurrentNetworkDirection direction() const;
    void direction(const MLRecurrentNetworkDirection& value);
    MLGruWeightLayout layout() const;
    void layout(const MLGruWeightLayout& value);
    jsbind::Sequence<MLRecurrentNetworkActivation> activations() const;
    void activations(const jsbind::Sequence<MLRecurrentNetworkActivation>& value);
};

class MLGruCellOptions : public emlite::Val {
  explicit MLGruCellOptions(Handle h) noexcept;
public:
    static MLGruCellOptions take_ownership(Handle h) noexcept;
    explicit MLGruCellOptions(const emlite::Val &val) noexcept;
    MLGruCellOptions() noexcept;
    MLGruCellOptions clone() const noexcept;
    MLOperand bias() const;
    void bias(const MLOperand& value);
    MLOperand recurrentBias() const;
    void recurrentBias(const MLOperand& value);
    bool resetAfter() const;
    void resetAfter(bool value);
    MLGruWeightLayout layout() const;
    void layout(const MLGruWeightLayout& value);
    jsbind::Sequence<MLRecurrentNetworkActivation> activations() const;
    void activations(const jsbind::Sequence<MLRecurrentNetworkActivation>& value);
};

class MLHardSigmoidOptions : public emlite::Val {
  explicit MLHardSigmoidOptions(Handle h) noexcept;
public:
    static MLHardSigmoidOptions take_ownership(Handle h) noexcept;
    explicit MLHardSigmoidOptions(const emlite::Val &val) noexcept;
    MLHardSigmoidOptions() noexcept;
    MLHardSigmoidOptions clone() const noexcept;
    double alpha() const;
    void alpha(double value);
    double beta() const;
    void beta(double value);
};

class MLInstanceNormalizationOptions : public emlite::Val {
  explicit MLInstanceNormalizationOptions(Handle h) noexcept;
public:
    static MLInstanceNormalizationOptions take_ownership(Handle h) noexcept;
    explicit MLInstanceNormalizationOptions(const emlite::Val &val) noexcept;
    MLInstanceNormalizationOptions() noexcept;
    MLInstanceNormalizationOptions clone() const noexcept;
    MLOperand scale() const;
    void scale(const MLOperand& value);
    MLOperand bias() const;
    void bias(const MLOperand& value);
    double epsilon() const;
    void epsilon(double value);
    MLInputOperandLayout layout() const;
    void layout(const MLInputOperandLayout& value);
};

class MLLayerNormalizationOptions : public emlite::Val {
  explicit MLLayerNormalizationOptions(Handle h) noexcept;
public:
    static MLLayerNormalizationOptions take_ownership(Handle h) noexcept;
    explicit MLLayerNormalizationOptions(const emlite::Val &val) noexcept;
    MLLayerNormalizationOptions() noexcept;
    MLLayerNormalizationOptions clone() const noexcept;
    MLOperand scale() const;
    void scale(const MLOperand& value);
    MLOperand bias() const;
    void bias(const MLOperand& value);
    jsbind::Sequence<unsigned long> axes() const;
    void axes(jsbind::Sequence<unsigned long> value);
    double epsilon() const;
    void epsilon(double value);
};

class MLLeakyReluOptions : public emlite::Val {
  explicit MLLeakyReluOptions(Handle h) noexcept;
public:
    static MLLeakyReluOptions take_ownership(Handle h) noexcept;
    explicit MLLeakyReluOptions(const emlite::Val &val) noexcept;
    MLLeakyReluOptions() noexcept;
    MLLeakyReluOptions clone() const noexcept;
    double alpha() const;
    void alpha(double value);
};

class MLLinearOptions : public emlite::Val {
  explicit MLLinearOptions(Handle h) noexcept;
public:
    static MLLinearOptions take_ownership(Handle h) noexcept;
    explicit MLLinearOptions(const emlite::Val &val) noexcept;
    MLLinearOptions() noexcept;
    MLLinearOptions clone() const noexcept;
    double alpha() const;
    void alpha(double value);
    double beta() const;
    void beta(double value);
};

class MLLstmOptions : public emlite::Val {
  explicit MLLstmOptions(Handle h) noexcept;
public:
    static MLLstmOptions take_ownership(Handle h) noexcept;
    explicit MLLstmOptions(const emlite::Val &val) noexcept;
    MLLstmOptions() noexcept;
    MLLstmOptions clone() const noexcept;
    MLOperand bias() const;
    void bias(const MLOperand& value);
    MLOperand recurrentBias() const;
    void recurrentBias(const MLOperand& value);
    MLOperand peepholeWeight() const;
    void peepholeWeight(const MLOperand& value);
    MLOperand initialHiddenState() const;
    void initialHiddenState(const MLOperand& value);
    MLOperand initialCellState() const;
    void initialCellState(const MLOperand& value);
    bool returnSequence() const;
    void returnSequence(bool value);
    MLRecurrentNetworkDirection direction() const;
    void direction(const MLRecurrentNetworkDirection& value);
    MLLstmWeightLayout layout() const;
    void layout(const MLLstmWeightLayout& value);
    jsbind::Sequence<MLRecurrentNetworkActivation> activations() const;
    void activations(const jsbind::Sequence<MLRecurrentNetworkActivation>& value);
};

class MLLstmCellOptions : public emlite::Val {
  explicit MLLstmCellOptions(Handle h) noexcept;
public:
    static MLLstmCellOptions take_ownership(Handle h) noexcept;
    explicit MLLstmCellOptions(const emlite::Val &val) noexcept;
    MLLstmCellOptions() noexcept;
    MLLstmCellOptions clone() const noexcept;
    MLOperand bias() const;
    void bias(const MLOperand& value);
    MLOperand recurrentBias() const;
    void recurrentBias(const MLOperand& value);
    MLOperand peepholeWeight() const;
    void peepholeWeight(const MLOperand& value);
    MLLstmWeightLayout layout() const;
    void layout(const MLLstmWeightLayout& value);
    jsbind::Sequence<MLRecurrentNetworkActivation> activations() const;
    void activations(const jsbind::Sequence<MLRecurrentNetworkActivation>& value);
};

class MLPadOptions : public emlite::Val {
  explicit MLPadOptions(Handle h) noexcept;
public:
    static MLPadOptions take_ownership(Handle h) noexcept;
    explicit MLPadOptions(const emlite::Val &val) noexcept;
    MLPadOptions() noexcept;
    MLPadOptions clone() const noexcept;
    MLPaddingMode mode() const;
    void mode(const MLPaddingMode& value);
    jsbind::Any value() const;
    void value(const jsbind::Any& value);
};

class MLPool2dOptions : public emlite::Val {
  explicit MLPool2dOptions(Handle h) noexcept;
public:
    static MLPool2dOptions take_ownership(Handle h) noexcept;
    explicit MLPool2dOptions(const emlite::Val &val) noexcept;
    MLPool2dOptions() noexcept;
    MLPool2dOptions clone() const noexcept;
    jsbind::Sequence<unsigned long> windowDimensions() const;
    void windowDimensions(jsbind::Sequence<unsigned long> value);
    jsbind::Sequence<unsigned long> padding() const;
    void padding(jsbind::Sequence<unsigned long> value);
    jsbind::Sequence<unsigned long> strides() const;
    void strides(jsbind::Sequence<unsigned long> value);
    jsbind::Sequence<unsigned long> dilations() const;
    void dilations(jsbind::Sequence<unsigned long> value);
    MLInputOperandLayout layout() const;
    void layout(const MLInputOperandLayout& value);
    MLRoundingType roundingType() const;
    void roundingType(const MLRoundingType& value);
    jsbind::Sequence<unsigned long> outputSizes() const;
    void outputSizes(jsbind::Sequence<unsigned long> value);
};

class MLReduceOptions : public emlite::Val {
  explicit MLReduceOptions(Handle h) noexcept;
public:
    static MLReduceOptions take_ownership(Handle h) noexcept;
    explicit MLReduceOptions(const emlite::Val &val) noexcept;
    MLReduceOptions() noexcept;
    MLReduceOptions clone() const noexcept;
    jsbind::Sequence<unsigned long> axes() const;
    void axes(jsbind::Sequence<unsigned long> value);
    bool keepDimensions() const;
    void keepDimensions(bool value);
};

class MLResample2dOptions : public emlite::Val {
  explicit MLResample2dOptions(Handle h) noexcept;
public:
    static MLResample2dOptions take_ownership(Handle h) noexcept;
    explicit MLResample2dOptions(const emlite::Val &val) noexcept;
    MLResample2dOptions() noexcept;
    MLResample2dOptions clone() const noexcept;
    MLInterpolationMode mode() const;
    void mode(const MLInterpolationMode& value);
    jsbind::Sequence<float> scales() const;
    void scales(jsbind::Sequence<float> value);
    jsbind::Sequence<unsigned long> sizes() const;
    void sizes(jsbind::Sequence<unsigned long> value);
    jsbind::Sequence<unsigned long> axes() const;
    void axes(jsbind::Sequence<unsigned long> value);
};

class MLReverseOptions : public emlite::Val {
  explicit MLReverseOptions(Handle h) noexcept;
public:
    static MLReverseOptions take_ownership(Handle h) noexcept;
    explicit MLReverseOptions(const emlite::Val &val) noexcept;
    MLReverseOptions() noexcept;
    MLReverseOptions clone() const noexcept;
    jsbind::Sequence<unsigned long> axes() const;
    void axes(jsbind::Sequence<unsigned long> value);
};

class MLScatterOptions : public emlite::Val {
  explicit MLScatterOptions(Handle h) noexcept;
public:
    static MLScatterOptions take_ownership(Handle h) noexcept;
    explicit MLScatterOptions(const emlite::Val &val) noexcept;
    MLScatterOptions() noexcept;
    MLScatterOptions clone() const noexcept;
    unsigned long axis() const;
    void axis(unsigned long value);
};

class MLSliceOptions : public emlite::Val {
  explicit MLSliceOptions(Handle h) noexcept;
public:
    static MLSliceOptions take_ownership(Handle h) noexcept;
    explicit MLSliceOptions(const emlite::Val &val) noexcept;
    MLSliceOptions() noexcept;
    MLSliceOptions clone() const noexcept;
    jsbind::Sequence<unsigned long> strides() const;
    void strides(jsbind::Sequence<unsigned long> value);
};

class MLSplitOptions : public emlite::Val {
  explicit MLSplitOptions(Handle h) noexcept;
public:
    static MLSplitOptions take_ownership(Handle h) noexcept;
    explicit MLSplitOptions(const emlite::Val &val) noexcept;
    MLSplitOptions() noexcept;
    MLSplitOptions clone() const noexcept;
    unsigned long axis() const;
    void axis(unsigned long value);
};

class MLTransposeOptions : public emlite::Val {
  explicit MLTransposeOptions(Handle h) noexcept;
public:
    static MLTransposeOptions take_ownership(Handle h) noexcept;
    explicit MLTransposeOptions(const emlite::Val &val) noexcept;
    MLTransposeOptions() noexcept;
    MLTransposeOptions clone() const noexcept;
    jsbind::Sequence<unsigned long> permutation() const;
    void permutation(jsbind::Sequence<unsigned long> value);
};

class MLTriangularOptions : public emlite::Val {
  explicit MLTriangularOptions(Handle h) noexcept;
public:
    static MLTriangularOptions take_ownership(Handle h) noexcept;
    explicit MLTriangularOptions(const emlite::Val &val) noexcept;
    MLTriangularOptions() noexcept;
    MLTriangularOptions clone() const noexcept;
    bool upper() const;
    void upper(bool value);
    long diagonal() const;
    void diagonal(long value);
};

class MLGraphBuilder : public emlite::Val {
    explicit MLGraphBuilder(Handle h) noexcept;

public:
    explicit MLGraphBuilder(const emlite::Val &val) noexcept;
    static MLGraphBuilder take_ownership(Handle h) noexcept;

    MLGraphBuilder clone() const noexcept;
    MLGraphBuilder(const MLContext& context);
    MLOperand input(const jsbind::USVString& name, const MLOperandDescriptor& descriptor);
    MLOperand constant(const MLTensor& tensor);
    jsbind::Promise build(const jsbind::Any& outputs);
    MLOperand argMin(const MLOperand& input, unsigned long axis, const MLArgMinMaxOptions& options);
    MLOperand argMax(const MLOperand& input, unsigned long axis, const MLArgMinMaxOptions& options);
    MLOperand batchNormalization(const MLOperand& input, const MLOperand& mean, const MLOperand& variance, const MLBatchNormalizationOptions& options);
    MLOperand cast(const MLOperand& input, const MLOperandDataType& type, const MLOperatorOptions& options);
    MLOperand clamp(const MLOperand& input, const MLClampOptions& options);
    MLOperand concat(const jsbind::Sequence<MLOperand>& inputs, unsigned long axis, const MLOperatorOptions& options);
    MLOperand conv2d(const MLOperand& input, const MLOperand& filter, const MLConv2dOptions& options);
    MLOperand convTranspose2d(const MLOperand& input, const MLOperand& filter, const MLConvTranspose2dOptions& options);
    MLOperand cumulativeSum(const MLOperand& input, unsigned long axis, const MLCumulativeSumOptions& options);
    MLOperand add(const MLOperand& a, const MLOperand& b, const MLOperatorOptions& options);
    MLOperand sub(const MLOperand& a, const MLOperand& b, const MLOperatorOptions& options);
    MLOperand mul(const MLOperand& a, const MLOperand& b, const MLOperatorOptions& options);
    MLOperand div(const MLOperand& a, const MLOperand& b, const MLOperatorOptions& options);
    MLOperand max(const MLOperand& a, const MLOperand& b, const MLOperatorOptions& options);
    MLOperand min(const MLOperand& a, const MLOperand& b, const MLOperatorOptions& options);
    MLOperand pow(const MLOperand& a, const MLOperand& b, const MLOperatorOptions& options);
    MLOperand equal(const MLOperand& a, const MLOperand& b, const MLOperatorOptions& options);
    MLOperand notEqual(const MLOperand& a, const MLOperand& b, const MLOperatorOptions& options);
    MLOperand greater(const MLOperand& a, const MLOperand& b, const MLOperatorOptions& options);
    MLOperand greaterOrEqual(const MLOperand& a, const MLOperand& b, const MLOperatorOptions& options);
    MLOperand lesser(const MLOperand& a, const MLOperand& b, const MLOperatorOptions& options);
    MLOperand lesserOrEqual(const MLOperand& a, const MLOperand& b, const MLOperatorOptions& options);
    MLOperand logicalNot(const MLOperand& a, const MLOperatorOptions& options);
    MLOperand logicalAnd(const MLOperand& a, const MLOperand& b, const MLOperatorOptions& options);
    MLOperand logicalOr(const MLOperand& a, const MLOperand& b, const MLOperatorOptions& options);
    MLOperand logicalXor(const MLOperand& a, const MLOperand& b, const MLOperatorOptions& options);
    MLOperand abs(const MLOperand& input, const MLOperatorOptions& options);
    MLOperand ceil(const MLOperand& input, const MLOperatorOptions& options);
    MLOperand cos(const MLOperand& input, const MLOperatorOptions& options);
    MLOperand erf(const MLOperand& input, const MLOperatorOptions& options);
    MLOperand exp(const MLOperand& input, const MLOperatorOptions& options);
    MLOperand floor(const MLOperand& input, const MLOperatorOptions& options);
    MLOperand identity(const MLOperand& input, const MLOperatorOptions& options);
    MLOperand log(const MLOperand& input, const MLOperatorOptions& options);
    MLOperand neg(const MLOperand& input, const MLOperatorOptions& options);
    MLOperand reciprocal(const MLOperand& input, const MLOperatorOptions& options);
    MLOperand sin(const MLOperand& input, const MLOperatorOptions& options);
    MLOperand sign(const MLOperand& input, const MLOperatorOptions& options);
    MLOperand sqrt(const MLOperand& input, const MLOperatorOptions& options);
    MLOperand tan(const MLOperand& input, const MLOperatorOptions& options);
    MLOperand dequantizeLinear(const MLOperand& input, const MLOperand& scale, const MLOperand& zeroPoint, const MLOperatorOptions& options);
    MLOperand quantizeLinear(const MLOperand& input, const MLOperand& scale, const MLOperand& zeroPoint, const MLOperatorOptions& options);
    MLOperand elu(const MLOperand& input, const MLEluOptions& options);
    MLOperand expand(const MLOperand& input, jsbind::Sequence<unsigned long> newShape, const MLOperatorOptions& options);
    MLOperand gather(const MLOperand& input, const MLOperand& indices, const MLGatherOptions& options);
    MLOperand gatherElements(const MLOperand& input, const MLOperand& indices, const MLGatherOptions& options);
    MLOperand gatherND(const MLOperand& input, const MLOperand& indices, const MLOperatorOptions& options);
    MLOperand gelu(const MLOperand& input, const MLOperatorOptions& options);
    MLOperand gemm(const MLOperand& a, const MLOperand& b, const MLGemmOptions& options);
    jsbind::Sequence<MLOperand> gru(const MLOperand& input, const MLOperand& weight, const MLOperand& recurrentWeight, unsigned long steps, unsigned long hiddenSize, const MLGruOptions& options);
    MLOperand gruCell(const MLOperand& input, const MLOperand& weight, const MLOperand& recurrentWeight, const MLOperand& hiddenState, unsigned long hiddenSize, const MLGruCellOptions& options);
    MLOperand hardSigmoid(const MLOperand& input, const MLHardSigmoidOptions& options);
    MLOperand hardSwish(const MLOperand& input, const MLOperatorOptions& options);
    MLOperand instanceNormalization(const MLOperand& input, const MLInstanceNormalizationOptions& options);
    MLOperand layerNormalization(const MLOperand& input, const MLLayerNormalizationOptions& options);
    MLOperand leakyRelu(const MLOperand& input, const MLLeakyReluOptions& options);
    MLOperand linear(const MLOperand& input, const MLLinearOptions& options);
    jsbind::Sequence<MLOperand> lstm(const MLOperand& input, const MLOperand& weight, const MLOperand& recurrentWeight, unsigned long steps, unsigned long hiddenSize, const MLLstmOptions& options);
    jsbind::Sequence<MLOperand> lstmCell(const MLOperand& input, const MLOperand& weight, const MLOperand& recurrentWeight, const MLOperand& hiddenState, const MLOperand& cellState, unsigned long hiddenSize, const MLLstmCellOptions& options);
    MLOperand matmul(const MLOperand& a, const MLOperand& b, const MLOperatorOptions& options);
    MLOperand pad(const MLOperand& input, jsbind::Sequence<unsigned long> beginningPadding, jsbind::Sequence<unsigned long> endingPadding, const MLPadOptions& options);
    MLOperand averagePool2d(const MLOperand& input, const MLPool2dOptions& options);
    MLOperand l2Pool2d(const MLOperand& input, const MLPool2dOptions& options);
    MLOperand maxPool2d(const MLOperand& input, const MLPool2dOptions& options);
    MLOperand prelu(const MLOperand& input, const MLOperand& slope, const MLOperatorOptions& options);
    MLOperand reduceL1(const MLOperand& input, const MLReduceOptions& options);
    MLOperand reduceL2(const MLOperand& input, const MLReduceOptions& options);
    MLOperand reduceLogSum(const MLOperand& input, const MLReduceOptions& options);
    MLOperand reduceLogSumExp(const MLOperand& input, const MLReduceOptions& options);
    MLOperand reduceMax(const MLOperand& input, const MLReduceOptions& options);
    MLOperand reduceMean(const MLOperand& input, const MLReduceOptions& options);
    MLOperand reduceMin(const MLOperand& input, const MLReduceOptions& options);
    MLOperand reduceProduct(const MLOperand& input, const MLReduceOptions& options);
    MLOperand reduceSum(const MLOperand& input, const MLReduceOptions& options);
    MLOperand reduceSumSquare(const MLOperand& input, const MLReduceOptions& options);
    MLOperand relu(const MLOperand& input, const MLOperatorOptions& options);
    MLOperand resample2d(const MLOperand& input, const MLResample2dOptions& options);
    MLOperand reshape(const MLOperand& input, jsbind::Sequence<unsigned long> newShape, const MLOperatorOptions& options);
    MLOperand reverse(const MLOperand& input, const MLReverseOptions& options);
    MLOperand scatterElements(const MLOperand& input, const MLOperand& indices, const MLOperand& updates, const MLScatterOptions& options);
    MLOperand scatterND(const MLOperand& input, const MLOperand& indices, const MLOperand& updates, const MLOperatorOptions& options);
    MLOperand sigmoid(const MLOperand& input, const MLOperatorOptions& options);
    MLOperand slice(const MLOperand& input, jsbind::Sequence<unsigned long> starts, jsbind::Sequence<unsigned long> sizes, const MLSliceOptions& options);
    MLOperand softmax(const MLOperand& input, unsigned long axis, const MLOperatorOptions& options);
    MLOperand softplus(const MLOperand& input, const MLOperatorOptions& options);
    MLOperand softsign(const MLOperand& input, const MLOperatorOptions& options);
    jsbind::Sequence<MLOperand> split(const MLOperand& input, const jsbind::Any& splits, const MLSplitOptions& options);
    MLOperand tanh(const MLOperand& input, const MLOperatorOptions& options);
    MLOperand tile(const MLOperand& input, jsbind::Sequence<unsigned long> repetitions, const MLOperatorOptions& options);
    MLOperand transpose(const MLOperand& input, const MLTransposeOptions& options);
    MLOperand triangular(const MLOperand& input, const MLTriangularOptions& options);
    MLOperand where(const MLOperand& condition, const MLOperand& trueValue, const MLOperand& falseValue, const MLOperatorOptions& options);
};

