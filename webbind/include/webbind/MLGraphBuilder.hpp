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
    [[nodiscard]] MLArgMinMaxOptions clone() const noexcept;
    [[nodiscard]] bool keepDimensions() const;
    void keepDimensions(bool value);
    [[nodiscard]] MLOperandDataType outputDataType() const;
    void outputDataType(const MLOperandDataType& value);
};

class MLBatchNormalizationOptions : public emlite::Val {
  explicit MLBatchNormalizationOptions(Handle h) noexcept;
public:
    static MLBatchNormalizationOptions take_ownership(Handle h) noexcept;
    explicit MLBatchNormalizationOptions(const emlite::Val &val) noexcept;
    MLBatchNormalizationOptions() noexcept;
    [[nodiscard]] MLBatchNormalizationOptions clone() const noexcept;
    [[nodiscard]] MLOperand scale() const;
    void scale(const MLOperand& value);
    [[nodiscard]] MLOperand bias() const;
    void bias(const MLOperand& value);
    [[nodiscard]] unsigned long axis() const;
    void axis(unsigned long value);
    [[nodiscard]] double epsilon() const;
    void epsilon(double value);
};

class MLOperatorOptions : public emlite::Val {
  explicit MLOperatorOptions(Handle h) noexcept;
public:
    static MLOperatorOptions take_ownership(Handle h) noexcept;
    explicit MLOperatorOptions(const emlite::Val &val) noexcept;
    MLOperatorOptions() noexcept;
    [[nodiscard]] MLOperatorOptions clone() const noexcept;
    [[nodiscard]] jsbind::String label() const;
    void label(const jsbind::String& value);
};

class MLClampOptions : public emlite::Val {
  explicit MLClampOptions(Handle h) noexcept;
public:
    static MLClampOptions take_ownership(Handle h) noexcept;
    explicit MLClampOptions(const emlite::Val &val) noexcept;
    MLClampOptions() noexcept;
    [[nodiscard]] MLClampOptions clone() const noexcept;
    [[nodiscard]] jsbind::Any minValue() const;
    void minValue(const jsbind::Any& value);
    [[nodiscard]] jsbind::Any maxValue() const;
    void maxValue(const jsbind::Any& value);
};

class MLConv2dOptions : public emlite::Val {
  explicit MLConv2dOptions(Handle h) noexcept;
public:
    static MLConv2dOptions take_ownership(Handle h) noexcept;
    explicit MLConv2dOptions(const emlite::Val &val) noexcept;
    MLConv2dOptions() noexcept;
    [[nodiscard]] MLConv2dOptions clone() const noexcept;
    [[nodiscard]] jsbind::TypedArray<unsigned long> padding() const;
    void padding(jsbind::TypedArray<unsigned long> value);
    [[nodiscard]] jsbind::TypedArray<unsigned long> strides() const;
    void strides(jsbind::TypedArray<unsigned long> value);
    [[nodiscard]] jsbind::TypedArray<unsigned long> dilations() const;
    void dilations(jsbind::TypedArray<unsigned long> value);
    [[nodiscard]] unsigned long groups() const;
    void groups(unsigned long value);
    [[nodiscard]] MLInputOperandLayout inputLayout() const;
    void inputLayout(const MLInputOperandLayout& value);
    [[nodiscard]] MLConv2dFilterOperandLayout filterLayout() const;
    void filterLayout(const MLConv2dFilterOperandLayout& value);
    [[nodiscard]] MLOperand bias() const;
    void bias(const MLOperand& value);
};

class MLConvTranspose2dOptions : public emlite::Val {
  explicit MLConvTranspose2dOptions(Handle h) noexcept;
public:
    static MLConvTranspose2dOptions take_ownership(Handle h) noexcept;
    explicit MLConvTranspose2dOptions(const emlite::Val &val) noexcept;
    MLConvTranspose2dOptions() noexcept;
    [[nodiscard]] MLConvTranspose2dOptions clone() const noexcept;
    [[nodiscard]] jsbind::TypedArray<unsigned long> padding() const;
    void padding(jsbind::TypedArray<unsigned long> value);
    [[nodiscard]] jsbind::TypedArray<unsigned long> strides() const;
    void strides(jsbind::TypedArray<unsigned long> value);
    [[nodiscard]] jsbind::TypedArray<unsigned long> dilations() const;
    void dilations(jsbind::TypedArray<unsigned long> value);
    [[nodiscard]] jsbind::TypedArray<unsigned long> outputPadding() const;
    void outputPadding(jsbind::TypedArray<unsigned long> value);
    [[nodiscard]] jsbind::TypedArray<unsigned long> outputSizes() const;
    void outputSizes(jsbind::TypedArray<unsigned long> value);
    [[nodiscard]] unsigned long groups() const;
    void groups(unsigned long value);
    [[nodiscard]] MLInputOperandLayout inputLayout() const;
    void inputLayout(const MLInputOperandLayout& value);
    [[nodiscard]] MLConvTranspose2dFilterOperandLayout filterLayout() const;
    void filterLayout(const MLConvTranspose2dFilterOperandLayout& value);
    [[nodiscard]] MLOperand bias() const;
    void bias(const MLOperand& value);
};

class MLCumulativeSumOptions : public emlite::Val {
  explicit MLCumulativeSumOptions(Handle h) noexcept;
public:
    static MLCumulativeSumOptions take_ownership(Handle h) noexcept;
    explicit MLCumulativeSumOptions(const emlite::Val &val) noexcept;
    MLCumulativeSumOptions() noexcept;
    [[nodiscard]] MLCumulativeSumOptions clone() const noexcept;
    [[nodiscard]] bool exclusive() const;
    void exclusive(bool value);
    [[nodiscard]] bool reversed() const;
    void reversed(bool value);
};

class MLEluOptions : public emlite::Val {
  explicit MLEluOptions(Handle h) noexcept;
public:
    static MLEluOptions take_ownership(Handle h) noexcept;
    explicit MLEluOptions(const emlite::Val &val) noexcept;
    MLEluOptions() noexcept;
    [[nodiscard]] MLEluOptions clone() const noexcept;
    [[nodiscard]] double alpha() const;
    void alpha(double value);
};

class MLGatherOptions : public emlite::Val {
  explicit MLGatherOptions(Handle h) noexcept;
public:
    static MLGatherOptions take_ownership(Handle h) noexcept;
    explicit MLGatherOptions(const emlite::Val &val) noexcept;
    MLGatherOptions() noexcept;
    [[nodiscard]] MLGatherOptions clone() const noexcept;
    [[nodiscard]] unsigned long axis() const;
    void axis(unsigned long value);
};

class MLGemmOptions : public emlite::Val {
  explicit MLGemmOptions(Handle h) noexcept;
public:
    static MLGemmOptions take_ownership(Handle h) noexcept;
    explicit MLGemmOptions(const emlite::Val &val) noexcept;
    MLGemmOptions() noexcept;
    [[nodiscard]] MLGemmOptions clone() const noexcept;
    [[nodiscard]] MLOperand c() const;
    void c(const MLOperand& value);
    [[nodiscard]] double alpha() const;
    void alpha(double value);
    [[nodiscard]] double beta() const;
    void beta(double value);
    [[nodiscard]] bool aTranspose() const;
    void aTranspose(bool value);
    [[nodiscard]] bool bTranspose() const;
    void bTranspose(bool value);
};

class MLGruOptions : public emlite::Val {
  explicit MLGruOptions(Handle h) noexcept;
public:
    static MLGruOptions take_ownership(Handle h) noexcept;
    explicit MLGruOptions(const emlite::Val &val) noexcept;
    MLGruOptions() noexcept;
    [[nodiscard]] MLGruOptions clone() const noexcept;
    [[nodiscard]] MLOperand bias() const;
    void bias(const MLOperand& value);
    [[nodiscard]] MLOperand recurrentBias() const;
    void recurrentBias(const MLOperand& value);
    [[nodiscard]] MLOperand initialHiddenState() const;
    void initialHiddenState(const MLOperand& value);
    [[nodiscard]] bool resetAfter() const;
    void resetAfter(bool value);
    [[nodiscard]] bool returnSequence() const;
    void returnSequence(bool value);
    [[nodiscard]] MLRecurrentNetworkDirection direction() const;
    void direction(const MLRecurrentNetworkDirection& value);
    [[nodiscard]] MLGruWeightLayout layout() const;
    void layout(const MLGruWeightLayout& value);
    [[nodiscard]] jsbind::TypedArray<MLRecurrentNetworkActivation> activations() const;
    void activations(const jsbind::TypedArray<MLRecurrentNetworkActivation>& value);
};

class MLGruCellOptions : public emlite::Val {
  explicit MLGruCellOptions(Handle h) noexcept;
public:
    static MLGruCellOptions take_ownership(Handle h) noexcept;
    explicit MLGruCellOptions(const emlite::Val &val) noexcept;
    MLGruCellOptions() noexcept;
    [[nodiscard]] MLGruCellOptions clone() const noexcept;
    [[nodiscard]] MLOperand bias() const;
    void bias(const MLOperand& value);
    [[nodiscard]] MLOperand recurrentBias() const;
    void recurrentBias(const MLOperand& value);
    [[nodiscard]] bool resetAfter() const;
    void resetAfter(bool value);
    [[nodiscard]] MLGruWeightLayout layout() const;
    void layout(const MLGruWeightLayout& value);
    [[nodiscard]] jsbind::TypedArray<MLRecurrentNetworkActivation> activations() const;
    void activations(const jsbind::TypedArray<MLRecurrentNetworkActivation>& value);
};

class MLHardSigmoidOptions : public emlite::Val {
  explicit MLHardSigmoidOptions(Handle h) noexcept;
public:
    static MLHardSigmoidOptions take_ownership(Handle h) noexcept;
    explicit MLHardSigmoidOptions(const emlite::Val &val) noexcept;
    MLHardSigmoidOptions() noexcept;
    [[nodiscard]] MLHardSigmoidOptions clone() const noexcept;
    [[nodiscard]] double alpha() const;
    void alpha(double value);
    [[nodiscard]] double beta() const;
    void beta(double value);
};

class MLInstanceNormalizationOptions : public emlite::Val {
  explicit MLInstanceNormalizationOptions(Handle h) noexcept;
public:
    static MLInstanceNormalizationOptions take_ownership(Handle h) noexcept;
    explicit MLInstanceNormalizationOptions(const emlite::Val &val) noexcept;
    MLInstanceNormalizationOptions() noexcept;
    [[nodiscard]] MLInstanceNormalizationOptions clone() const noexcept;
    [[nodiscard]] MLOperand scale() const;
    void scale(const MLOperand& value);
    [[nodiscard]] MLOperand bias() const;
    void bias(const MLOperand& value);
    [[nodiscard]] double epsilon() const;
    void epsilon(double value);
    [[nodiscard]] MLInputOperandLayout layout() const;
    void layout(const MLInputOperandLayout& value);
};

class MLLayerNormalizationOptions : public emlite::Val {
  explicit MLLayerNormalizationOptions(Handle h) noexcept;
public:
    static MLLayerNormalizationOptions take_ownership(Handle h) noexcept;
    explicit MLLayerNormalizationOptions(const emlite::Val &val) noexcept;
    MLLayerNormalizationOptions() noexcept;
    [[nodiscard]] MLLayerNormalizationOptions clone() const noexcept;
    [[nodiscard]] MLOperand scale() const;
    void scale(const MLOperand& value);
    [[nodiscard]] MLOperand bias() const;
    void bias(const MLOperand& value);
    [[nodiscard]] jsbind::TypedArray<unsigned long> axes() const;
    void axes(jsbind::TypedArray<unsigned long> value);
    [[nodiscard]] double epsilon() const;
    void epsilon(double value);
};

class MLLeakyReluOptions : public emlite::Val {
  explicit MLLeakyReluOptions(Handle h) noexcept;
public:
    static MLLeakyReluOptions take_ownership(Handle h) noexcept;
    explicit MLLeakyReluOptions(const emlite::Val &val) noexcept;
    MLLeakyReluOptions() noexcept;
    [[nodiscard]] MLLeakyReluOptions clone() const noexcept;
    [[nodiscard]] double alpha() const;
    void alpha(double value);
};

class MLLinearOptions : public emlite::Val {
  explicit MLLinearOptions(Handle h) noexcept;
public:
    static MLLinearOptions take_ownership(Handle h) noexcept;
    explicit MLLinearOptions(const emlite::Val &val) noexcept;
    MLLinearOptions() noexcept;
    [[nodiscard]] MLLinearOptions clone() const noexcept;
    [[nodiscard]] double alpha() const;
    void alpha(double value);
    [[nodiscard]] double beta() const;
    void beta(double value);
};

class MLLstmOptions : public emlite::Val {
  explicit MLLstmOptions(Handle h) noexcept;
public:
    static MLLstmOptions take_ownership(Handle h) noexcept;
    explicit MLLstmOptions(const emlite::Val &val) noexcept;
    MLLstmOptions() noexcept;
    [[nodiscard]] MLLstmOptions clone() const noexcept;
    [[nodiscard]] MLOperand bias() const;
    void bias(const MLOperand& value);
    [[nodiscard]] MLOperand recurrentBias() const;
    void recurrentBias(const MLOperand& value);
    [[nodiscard]] MLOperand peepholeWeight() const;
    void peepholeWeight(const MLOperand& value);
    [[nodiscard]] MLOperand initialHiddenState() const;
    void initialHiddenState(const MLOperand& value);
    [[nodiscard]] MLOperand initialCellState() const;
    void initialCellState(const MLOperand& value);
    [[nodiscard]] bool returnSequence() const;
    void returnSequence(bool value);
    [[nodiscard]] MLRecurrentNetworkDirection direction() const;
    void direction(const MLRecurrentNetworkDirection& value);
    [[nodiscard]] MLLstmWeightLayout layout() const;
    void layout(const MLLstmWeightLayout& value);
    [[nodiscard]] jsbind::TypedArray<MLRecurrentNetworkActivation> activations() const;
    void activations(const jsbind::TypedArray<MLRecurrentNetworkActivation>& value);
};

class MLLstmCellOptions : public emlite::Val {
  explicit MLLstmCellOptions(Handle h) noexcept;
public:
    static MLLstmCellOptions take_ownership(Handle h) noexcept;
    explicit MLLstmCellOptions(const emlite::Val &val) noexcept;
    MLLstmCellOptions() noexcept;
    [[nodiscard]] MLLstmCellOptions clone() const noexcept;
    [[nodiscard]] MLOperand bias() const;
    void bias(const MLOperand& value);
    [[nodiscard]] MLOperand recurrentBias() const;
    void recurrentBias(const MLOperand& value);
    [[nodiscard]] MLOperand peepholeWeight() const;
    void peepholeWeight(const MLOperand& value);
    [[nodiscard]] MLLstmWeightLayout layout() const;
    void layout(const MLLstmWeightLayout& value);
    [[nodiscard]] jsbind::TypedArray<MLRecurrentNetworkActivation> activations() const;
    void activations(const jsbind::TypedArray<MLRecurrentNetworkActivation>& value);
};

class MLPadOptions : public emlite::Val {
  explicit MLPadOptions(Handle h) noexcept;
public:
    static MLPadOptions take_ownership(Handle h) noexcept;
    explicit MLPadOptions(const emlite::Val &val) noexcept;
    MLPadOptions() noexcept;
    [[nodiscard]] MLPadOptions clone() const noexcept;
    [[nodiscard]] MLPaddingMode mode() const;
    void mode(const MLPaddingMode& value);
    [[nodiscard]] jsbind::Any value() const;
    void value(const jsbind::Any& value);
};

class MLPool2dOptions : public emlite::Val {
  explicit MLPool2dOptions(Handle h) noexcept;
public:
    static MLPool2dOptions take_ownership(Handle h) noexcept;
    explicit MLPool2dOptions(const emlite::Val &val) noexcept;
    MLPool2dOptions() noexcept;
    [[nodiscard]] MLPool2dOptions clone() const noexcept;
    [[nodiscard]] jsbind::TypedArray<unsigned long> windowDimensions() const;
    void windowDimensions(jsbind::TypedArray<unsigned long> value);
    [[nodiscard]] jsbind::TypedArray<unsigned long> padding() const;
    void padding(jsbind::TypedArray<unsigned long> value);
    [[nodiscard]] jsbind::TypedArray<unsigned long> strides() const;
    void strides(jsbind::TypedArray<unsigned long> value);
    [[nodiscard]] jsbind::TypedArray<unsigned long> dilations() const;
    void dilations(jsbind::TypedArray<unsigned long> value);
    [[nodiscard]] MLInputOperandLayout layout() const;
    void layout(const MLInputOperandLayout& value);
    [[nodiscard]] MLRoundingType roundingType() const;
    void roundingType(const MLRoundingType& value);
    [[nodiscard]] jsbind::TypedArray<unsigned long> outputSizes() const;
    void outputSizes(jsbind::TypedArray<unsigned long> value);
};

class MLReduceOptions : public emlite::Val {
  explicit MLReduceOptions(Handle h) noexcept;
public:
    static MLReduceOptions take_ownership(Handle h) noexcept;
    explicit MLReduceOptions(const emlite::Val &val) noexcept;
    MLReduceOptions() noexcept;
    [[nodiscard]] MLReduceOptions clone() const noexcept;
    [[nodiscard]] jsbind::TypedArray<unsigned long> axes() const;
    void axes(jsbind::TypedArray<unsigned long> value);
    [[nodiscard]] bool keepDimensions() const;
    void keepDimensions(bool value);
};

class MLResample2dOptions : public emlite::Val {
  explicit MLResample2dOptions(Handle h) noexcept;
public:
    static MLResample2dOptions take_ownership(Handle h) noexcept;
    explicit MLResample2dOptions(const emlite::Val &val) noexcept;
    MLResample2dOptions() noexcept;
    [[nodiscard]] MLResample2dOptions clone() const noexcept;
    [[nodiscard]] MLInterpolationMode mode() const;
    void mode(const MLInterpolationMode& value);
    [[nodiscard]] jsbind::TypedArray<float> scales() const;
    void scales(jsbind::TypedArray<float> value);
    [[nodiscard]] jsbind::TypedArray<unsigned long> sizes() const;
    void sizes(jsbind::TypedArray<unsigned long> value);
    [[nodiscard]] jsbind::TypedArray<unsigned long> axes() const;
    void axes(jsbind::TypedArray<unsigned long> value);
};

class MLReverseOptions : public emlite::Val {
  explicit MLReverseOptions(Handle h) noexcept;
public:
    static MLReverseOptions take_ownership(Handle h) noexcept;
    explicit MLReverseOptions(const emlite::Val &val) noexcept;
    MLReverseOptions() noexcept;
    [[nodiscard]] MLReverseOptions clone() const noexcept;
    [[nodiscard]] jsbind::TypedArray<unsigned long> axes() const;
    void axes(jsbind::TypedArray<unsigned long> value);
};

class MLScatterOptions : public emlite::Val {
  explicit MLScatterOptions(Handle h) noexcept;
public:
    static MLScatterOptions take_ownership(Handle h) noexcept;
    explicit MLScatterOptions(const emlite::Val &val) noexcept;
    MLScatterOptions() noexcept;
    [[nodiscard]] MLScatterOptions clone() const noexcept;
    [[nodiscard]] unsigned long axis() const;
    void axis(unsigned long value);
};

class MLSliceOptions : public emlite::Val {
  explicit MLSliceOptions(Handle h) noexcept;
public:
    static MLSliceOptions take_ownership(Handle h) noexcept;
    explicit MLSliceOptions(const emlite::Val &val) noexcept;
    MLSliceOptions() noexcept;
    [[nodiscard]] MLSliceOptions clone() const noexcept;
    [[nodiscard]] jsbind::TypedArray<unsigned long> strides() const;
    void strides(jsbind::TypedArray<unsigned long> value);
};

class MLSplitOptions : public emlite::Val {
  explicit MLSplitOptions(Handle h) noexcept;
public:
    static MLSplitOptions take_ownership(Handle h) noexcept;
    explicit MLSplitOptions(const emlite::Val &val) noexcept;
    MLSplitOptions() noexcept;
    [[nodiscard]] MLSplitOptions clone() const noexcept;
    [[nodiscard]] unsigned long axis() const;
    void axis(unsigned long value);
};

class MLTransposeOptions : public emlite::Val {
  explicit MLTransposeOptions(Handle h) noexcept;
public:
    static MLTransposeOptions take_ownership(Handle h) noexcept;
    explicit MLTransposeOptions(const emlite::Val &val) noexcept;
    MLTransposeOptions() noexcept;
    [[nodiscard]] MLTransposeOptions clone() const noexcept;
    [[nodiscard]] jsbind::TypedArray<unsigned long> permutation() const;
    void permutation(jsbind::TypedArray<unsigned long> value);
};

class MLTriangularOptions : public emlite::Val {
  explicit MLTriangularOptions(Handle h) noexcept;
public:
    static MLTriangularOptions take_ownership(Handle h) noexcept;
    explicit MLTriangularOptions(const emlite::Val &val) noexcept;
    MLTriangularOptions() noexcept;
    [[nodiscard]] MLTriangularOptions clone() const noexcept;
    [[nodiscard]] bool upper() const;
    void upper(bool value);
    [[nodiscard]] long diagonal() const;
    void diagonal(long value);
};

/// The MLGraphBuilder class.
/// [`MLGraphBuilder`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder)
class MLGraphBuilder : public emlite::Val {
    explicit MLGraphBuilder(Handle h) noexcept;

public:
    explicit MLGraphBuilder(const emlite::Val &val) noexcept;
    static MLGraphBuilder take_ownership(Handle h) noexcept;

    [[nodiscard]] MLGraphBuilder clone() const noexcept;
    /// The `new MLGraphBuilder(..)` constructor, creating a new MLGraphBuilder instance
    MLGraphBuilder(const MLContext& context);
    /// The input method.
    /// [`MLGraphBuilder.input`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/input)
    MLOperand input(const jsbind::String& name, const MLOperandDescriptor& descriptor);
    /// The constant method.
    /// [`MLGraphBuilder.constant`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/constant)
    MLOperand constant(const MLTensor& tensor);
    /// The build method.
    /// [`MLGraphBuilder.build`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/build)
    jsbind::Promise<MLGraph> build(const jsbind::Any& outputs);
    /// The argMin method.
    /// [`MLGraphBuilder.argMin`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/argMin)
    MLOperand argMin(const MLOperand& input, unsigned long axis);
    /// The argMin method.
    /// [`MLGraphBuilder.argMin`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/argMin)
    MLOperand argMin(const MLOperand& input, unsigned long axis, const MLArgMinMaxOptions& options);
    /// The argMax method.
    /// [`MLGraphBuilder.argMax`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/argMax)
    MLOperand argMax(const MLOperand& input, unsigned long axis);
    /// The argMax method.
    /// [`MLGraphBuilder.argMax`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/argMax)
    MLOperand argMax(const MLOperand& input, unsigned long axis, const MLArgMinMaxOptions& options);
    /// The batchNormalization method.
    /// [`MLGraphBuilder.batchNormalization`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/batchNormalization)
    MLOperand batchNormalization(const MLOperand& input, const MLOperand& mean, const MLOperand& variance);
    /// The batchNormalization method.
    /// [`MLGraphBuilder.batchNormalization`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/batchNormalization)
    MLOperand batchNormalization(const MLOperand& input, const MLOperand& mean, const MLOperand& variance, const MLBatchNormalizationOptions& options);
    /// The cast method.
    /// [`MLGraphBuilder.cast`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/cast)
    MLOperand cast(const MLOperand& input, const MLOperandDataType& type);
    /// The cast method.
    /// [`MLGraphBuilder.cast`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/cast)
    MLOperand cast(const MLOperand& input, const MLOperandDataType& type, const MLOperatorOptions& options);
    /// The clamp method.
    /// [`MLGraphBuilder.clamp`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/clamp)
    MLOperand clamp(const MLOperand& input);
    /// The clamp method.
    /// [`MLGraphBuilder.clamp`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/clamp)
    MLOperand clamp(const MLOperand& input, const MLClampOptions& options);
    /// The concat method.
    /// [`MLGraphBuilder.concat`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/concat)
    MLOperand concat(const jsbind::TypedArray<MLOperand>& inputs, unsigned long axis);
    /// The concat method.
    /// [`MLGraphBuilder.concat`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/concat)
    MLOperand concat(const jsbind::TypedArray<MLOperand>& inputs, unsigned long axis, const MLOperatorOptions& options);
    /// The conv2d method.
    /// [`MLGraphBuilder.conv2d`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/conv2d)
    MLOperand conv2d(const MLOperand& input, const MLOperand& filter);
    /// The conv2d method.
    /// [`MLGraphBuilder.conv2d`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/conv2d)
    MLOperand conv2d(const MLOperand& input, const MLOperand& filter, const MLConv2dOptions& options);
    /// The convTranspose2d method.
    /// [`MLGraphBuilder.convTranspose2d`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/convTranspose2d)
    MLOperand convTranspose2d(const MLOperand& input, const MLOperand& filter);
    /// The convTranspose2d method.
    /// [`MLGraphBuilder.convTranspose2d`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/convTranspose2d)
    MLOperand convTranspose2d(const MLOperand& input, const MLOperand& filter, const MLConvTranspose2dOptions& options);
    /// The cumulativeSum method.
    /// [`MLGraphBuilder.cumulativeSum`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/cumulativeSum)
    MLOperand cumulativeSum(const MLOperand& input, unsigned long axis);
    /// The cumulativeSum method.
    /// [`MLGraphBuilder.cumulativeSum`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/cumulativeSum)
    MLOperand cumulativeSum(const MLOperand& input, unsigned long axis, const MLCumulativeSumOptions& options);
    /// The add method.
    /// [`MLGraphBuilder.add`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/add)
    MLOperand add(const MLOperand& a, const MLOperand& b);
    /// The add method.
    /// [`MLGraphBuilder.add`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/add)
    MLOperand add(const MLOperand& a, const MLOperand& b, const MLOperatorOptions& options);
    /// The sub method.
    /// [`MLGraphBuilder.sub`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/sub)
    MLOperand sub(const MLOperand& a, const MLOperand& b);
    /// The sub method.
    /// [`MLGraphBuilder.sub`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/sub)
    MLOperand sub(const MLOperand& a, const MLOperand& b, const MLOperatorOptions& options);
    /// The mul method.
    /// [`MLGraphBuilder.mul`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/mul)
    MLOperand mul(const MLOperand& a, const MLOperand& b);
    /// The mul method.
    /// [`MLGraphBuilder.mul`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/mul)
    MLOperand mul(const MLOperand& a, const MLOperand& b, const MLOperatorOptions& options);
    /// The div method.
    /// [`MLGraphBuilder.div`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/div)
    MLOperand div(const MLOperand& a, const MLOperand& b);
    /// The div method.
    /// [`MLGraphBuilder.div`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/div)
    MLOperand div(const MLOperand& a, const MLOperand& b, const MLOperatorOptions& options);
    /// The max method.
    /// [`MLGraphBuilder.max`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/max)
    MLOperand max(const MLOperand& a, const MLOperand& b);
    /// The max method.
    /// [`MLGraphBuilder.max`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/max)
    MLOperand max(const MLOperand& a, const MLOperand& b, const MLOperatorOptions& options);
    /// The min method.
    /// [`MLGraphBuilder.min`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/min)
    MLOperand min(const MLOperand& a, const MLOperand& b);
    /// The min method.
    /// [`MLGraphBuilder.min`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/min)
    MLOperand min(const MLOperand& a, const MLOperand& b, const MLOperatorOptions& options);
    /// The pow method.
    /// [`MLGraphBuilder.pow`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/pow)
    MLOperand pow(const MLOperand& a, const MLOperand& b);
    /// The pow method.
    /// [`MLGraphBuilder.pow`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/pow)
    MLOperand pow(const MLOperand& a, const MLOperand& b, const MLOperatorOptions& options);
    /// The equal method.
    /// [`MLGraphBuilder.equal`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/equal)
    MLOperand equal(const MLOperand& a, const MLOperand& b);
    /// The equal method.
    /// [`MLGraphBuilder.equal`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/equal)
    MLOperand equal(const MLOperand& a, const MLOperand& b, const MLOperatorOptions& options);
    /// The notEqual method.
    /// [`MLGraphBuilder.notEqual`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/notEqual)
    MLOperand notEqual(const MLOperand& a, const MLOperand& b);
    /// The notEqual method.
    /// [`MLGraphBuilder.notEqual`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/notEqual)
    MLOperand notEqual(const MLOperand& a, const MLOperand& b, const MLOperatorOptions& options);
    /// The greater method.
    /// [`MLGraphBuilder.greater`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/greater)
    MLOperand greater(const MLOperand& a, const MLOperand& b);
    /// The greater method.
    /// [`MLGraphBuilder.greater`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/greater)
    MLOperand greater(const MLOperand& a, const MLOperand& b, const MLOperatorOptions& options);
    /// The greaterOrEqual method.
    /// [`MLGraphBuilder.greaterOrEqual`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/greaterOrEqual)
    MLOperand greaterOrEqual(const MLOperand& a, const MLOperand& b);
    /// The greaterOrEqual method.
    /// [`MLGraphBuilder.greaterOrEqual`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/greaterOrEqual)
    MLOperand greaterOrEqual(const MLOperand& a, const MLOperand& b, const MLOperatorOptions& options);
    /// The lesser method.
    /// [`MLGraphBuilder.lesser`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/lesser)
    MLOperand lesser(const MLOperand& a, const MLOperand& b);
    /// The lesser method.
    /// [`MLGraphBuilder.lesser`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/lesser)
    MLOperand lesser(const MLOperand& a, const MLOperand& b, const MLOperatorOptions& options);
    /// The lesserOrEqual method.
    /// [`MLGraphBuilder.lesserOrEqual`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/lesserOrEqual)
    MLOperand lesserOrEqual(const MLOperand& a, const MLOperand& b);
    /// The lesserOrEqual method.
    /// [`MLGraphBuilder.lesserOrEqual`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/lesserOrEqual)
    MLOperand lesserOrEqual(const MLOperand& a, const MLOperand& b, const MLOperatorOptions& options);
    /// The logicalNot method.
    /// [`MLGraphBuilder.logicalNot`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/logicalNot)
    MLOperand logicalNot(const MLOperand& a);
    /// The logicalNot method.
    /// [`MLGraphBuilder.logicalNot`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/logicalNot)
    MLOperand logicalNot(const MLOperand& a, const MLOperatorOptions& options);
    /// The logicalAnd method.
    /// [`MLGraphBuilder.logicalAnd`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/logicalAnd)
    MLOperand logicalAnd(const MLOperand& a, const MLOperand& b);
    /// The logicalAnd method.
    /// [`MLGraphBuilder.logicalAnd`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/logicalAnd)
    MLOperand logicalAnd(const MLOperand& a, const MLOperand& b, const MLOperatorOptions& options);
    /// The logicalOr method.
    /// [`MLGraphBuilder.logicalOr`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/logicalOr)
    MLOperand logicalOr(const MLOperand& a, const MLOperand& b);
    /// The logicalOr method.
    /// [`MLGraphBuilder.logicalOr`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/logicalOr)
    MLOperand logicalOr(const MLOperand& a, const MLOperand& b, const MLOperatorOptions& options);
    /// The logicalXor method.
    /// [`MLGraphBuilder.logicalXor`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/logicalXor)
    MLOperand logicalXor(const MLOperand& a, const MLOperand& b);
    /// The logicalXor method.
    /// [`MLGraphBuilder.logicalXor`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/logicalXor)
    MLOperand logicalXor(const MLOperand& a, const MLOperand& b, const MLOperatorOptions& options);
    /// The abs method.
    /// [`MLGraphBuilder.abs`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/abs)
    MLOperand abs(const MLOperand& input);
    /// The abs method.
    /// [`MLGraphBuilder.abs`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/abs)
    MLOperand abs(const MLOperand& input, const MLOperatorOptions& options);
    /// The ceil method.
    /// [`MLGraphBuilder.ceil`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/ceil)
    MLOperand ceil(const MLOperand& input);
    /// The ceil method.
    /// [`MLGraphBuilder.ceil`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/ceil)
    MLOperand ceil(const MLOperand& input, const MLOperatorOptions& options);
    /// The cos method.
    /// [`MLGraphBuilder.cos`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/cos)
    MLOperand cos(const MLOperand& input);
    /// The cos method.
    /// [`MLGraphBuilder.cos`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/cos)
    MLOperand cos(const MLOperand& input, const MLOperatorOptions& options);
    /// The erf method.
    /// [`MLGraphBuilder.erf`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/erf)
    MLOperand erf(const MLOperand& input);
    /// The erf method.
    /// [`MLGraphBuilder.erf`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/erf)
    MLOperand erf(const MLOperand& input, const MLOperatorOptions& options);
    /// The exp method.
    /// [`MLGraphBuilder.exp`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/exp)
    MLOperand exp(const MLOperand& input);
    /// The exp method.
    /// [`MLGraphBuilder.exp`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/exp)
    MLOperand exp(const MLOperand& input, const MLOperatorOptions& options);
    /// The floor method.
    /// [`MLGraphBuilder.floor`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/floor)
    MLOperand floor(const MLOperand& input);
    /// The floor method.
    /// [`MLGraphBuilder.floor`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/floor)
    MLOperand floor(const MLOperand& input, const MLOperatorOptions& options);
    /// The identity method.
    /// [`MLGraphBuilder.identity`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/identity)
    MLOperand identity(const MLOperand& input);
    /// The identity method.
    /// [`MLGraphBuilder.identity`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/identity)
    MLOperand identity(const MLOperand& input, const MLOperatorOptions& options);
    /// The log method.
    /// [`MLGraphBuilder.log`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/log)
    MLOperand log(const MLOperand& input);
    /// The log method.
    /// [`MLGraphBuilder.log`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/log)
    MLOperand log(const MLOperand& input, const MLOperatorOptions& options);
    /// The neg method.
    /// [`MLGraphBuilder.neg`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/neg)
    MLOperand neg(const MLOperand& input);
    /// The neg method.
    /// [`MLGraphBuilder.neg`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/neg)
    MLOperand neg(const MLOperand& input, const MLOperatorOptions& options);
    /// The reciprocal method.
    /// [`MLGraphBuilder.reciprocal`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/reciprocal)
    MLOperand reciprocal(const MLOperand& input);
    /// The reciprocal method.
    /// [`MLGraphBuilder.reciprocal`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/reciprocal)
    MLOperand reciprocal(const MLOperand& input, const MLOperatorOptions& options);
    /// The sin method.
    /// [`MLGraphBuilder.sin`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/sin)
    MLOperand sin(const MLOperand& input);
    /// The sin method.
    /// [`MLGraphBuilder.sin`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/sin)
    MLOperand sin(const MLOperand& input, const MLOperatorOptions& options);
    /// The sign method.
    /// [`MLGraphBuilder.sign`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/sign)
    MLOperand sign(const MLOperand& input);
    /// The sign method.
    /// [`MLGraphBuilder.sign`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/sign)
    MLOperand sign(const MLOperand& input, const MLOperatorOptions& options);
    /// The sqrt method.
    /// [`MLGraphBuilder.sqrt`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/sqrt)
    MLOperand sqrt(const MLOperand& input);
    /// The sqrt method.
    /// [`MLGraphBuilder.sqrt`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/sqrt)
    MLOperand sqrt(const MLOperand& input, const MLOperatorOptions& options);
    /// The tan method.
    /// [`MLGraphBuilder.tan`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/tan)
    MLOperand tan(const MLOperand& input);
    /// The tan method.
    /// [`MLGraphBuilder.tan`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/tan)
    MLOperand tan(const MLOperand& input, const MLOperatorOptions& options);
    /// The dequantizeLinear method.
    /// [`MLGraphBuilder.dequantizeLinear`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/dequantizeLinear)
    MLOperand dequantizeLinear(const MLOperand& input, const MLOperand& scale, const MLOperand& zeroPoint);
    /// The dequantizeLinear method.
    /// [`MLGraphBuilder.dequantizeLinear`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/dequantizeLinear)
    MLOperand dequantizeLinear(const MLOperand& input, const MLOperand& scale, const MLOperand& zeroPoint, const MLOperatorOptions& options);
    /// The quantizeLinear method.
    /// [`MLGraphBuilder.quantizeLinear`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/quantizeLinear)
    MLOperand quantizeLinear(const MLOperand& input, const MLOperand& scale, const MLOperand& zeroPoint);
    /// The quantizeLinear method.
    /// [`MLGraphBuilder.quantizeLinear`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/quantizeLinear)
    MLOperand quantizeLinear(const MLOperand& input, const MLOperand& scale, const MLOperand& zeroPoint, const MLOperatorOptions& options);
    /// The elu method.
    /// [`MLGraphBuilder.elu`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/elu)
    MLOperand elu(const MLOperand& input);
    /// The elu method.
    /// [`MLGraphBuilder.elu`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/elu)
    MLOperand elu(const MLOperand& input, const MLEluOptions& options);
    /// The expand method.
    /// [`MLGraphBuilder.expand`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/expand)
    MLOperand expand(const MLOperand& input, jsbind::TypedArray<unsigned long> newShape);
    /// The expand method.
    /// [`MLGraphBuilder.expand`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/expand)
    MLOperand expand(const MLOperand& input, jsbind::TypedArray<unsigned long> newShape, const MLOperatorOptions& options);
    /// The gather method.
    /// [`MLGraphBuilder.gather`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/gather)
    MLOperand gather(const MLOperand& input, const MLOperand& indices);
    /// The gather method.
    /// [`MLGraphBuilder.gather`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/gather)
    MLOperand gather(const MLOperand& input, const MLOperand& indices, const MLGatherOptions& options);
    /// The gatherElements method.
    /// [`MLGraphBuilder.gatherElements`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/gatherElements)
    MLOperand gatherElements(const MLOperand& input, const MLOperand& indices);
    /// The gatherElements method.
    /// [`MLGraphBuilder.gatherElements`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/gatherElements)
    MLOperand gatherElements(const MLOperand& input, const MLOperand& indices, const MLGatherOptions& options);
    /// The gatherND method.
    /// [`MLGraphBuilder.gatherND`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/gatherND)
    MLOperand gatherND(const MLOperand& input, const MLOperand& indices);
    /// The gatherND method.
    /// [`MLGraphBuilder.gatherND`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/gatherND)
    MLOperand gatherND(const MLOperand& input, const MLOperand& indices, const MLOperatorOptions& options);
    /// The gelu method.
    /// [`MLGraphBuilder.gelu`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/gelu)
    MLOperand gelu(const MLOperand& input);
    /// The gelu method.
    /// [`MLGraphBuilder.gelu`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/gelu)
    MLOperand gelu(const MLOperand& input, const MLOperatorOptions& options);
    /// The gemm method.
    /// [`MLGraphBuilder.gemm`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/gemm)
    MLOperand gemm(const MLOperand& a, const MLOperand& b);
    /// The gemm method.
    /// [`MLGraphBuilder.gemm`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/gemm)
    MLOperand gemm(const MLOperand& a, const MLOperand& b, const MLGemmOptions& options);
    /// The gru method.
    /// [`MLGraphBuilder.gru`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/gru)
    jsbind::TypedArray<MLOperand> gru(const MLOperand& input, const MLOperand& weight, const MLOperand& recurrentWeight, unsigned long steps, unsigned long hiddenSize);
    /// The gru method.
    /// [`MLGraphBuilder.gru`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/gru)
    jsbind::TypedArray<MLOperand> gru(const MLOperand& input, const MLOperand& weight, const MLOperand& recurrentWeight, unsigned long steps, unsigned long hiddenSize, const MLGruOptions& options);
    /// The gruCell method.
    /// [`MLGraphBuilder.gruCell`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/gruCell)
    MLOperand gruCell(const MLOperand& input, const MLOperand& weight, const MLOperand& recurrentWeight, const MLOperand& hiddenState, unsigned long hiddenSize);
    /// The gruCell method.
    /// [`MLGraphBuilder.gruCell`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/gruCell)
    MLOperand gruCell(const MLOperand& input, const MLOperand& weight, const MLOperand& recurrentWeight, const MLOperand& hiddenState, unsigned long hiddenSize, const MLGruCellOptions& options);
    /// The hardSigmoid method.
    /// [`MLGraphBuilder.hardSigmoid`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/hardSigmoid)
    MLOperand hardSigmoid(const MLOperand& input);
    /// The hardSigmoid method.
    /// [`MLGraphBuilder.hardSigmoid`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/hardSigmoid)
    MLOperand hardSigmoid(const MLOperand& input, const MLHardSigmoidOptions& options);
    /// The hardSwish method.
    /// [`MLGraphBuilder.hardSwish`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/hardSwish)
    MLOperand hardSwish(const MLOperand& input);
    /// The hardSwish method.
    /// [`MLGraphBuilder.hardSwish`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/hardSwish)
    MLOperand hardSwish(const MLOperand& input, const MLOperatorOptions& options);
    /// The instanceNormalization method.
    /// [`MLGraphBuilder.instanceNormalization`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/instanceNormalization)
    MLOperand instanceNormalization(const MLOperand& input);
    /// The instanceNormalization method.
    /// [`MLGraphBuilder.instanceNormalization`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/instanceNormalization)
    MLOperand instanceNormalization(const MLOperand& input, const MLInstanceNormalizationOptions& options);
    /// The layerNormalization method.
    /// [`MLGraphBuilder.layerNormalization`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/layerNormalization)
    MLOperand layerNormalization(const MLOperand& input);
    /// The layerNormalization method.
    /// [`MLGraphBuilder.layerNormalization`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/layerNormalization)
    MLOperand layerNormalization(const MLOperand& input, const MLLayerNormalizationOptions& options);
    /// The leakyRelu method.
    /// [`MLGraphBuilder.leakyRelu`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/leakyRelu)
    MLOperand leakyRelu(const MLOperand& input);
    /// The leakyRelu method.
    /// [`MLGraphBuilder.leakyRelu`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/leakyRelu)
    MLOperand leakyRelu(const MLOperand& input, const MLLeakyReluOptions& options);
    /// The linear method.
    /// [`MLGraphBuilder.linear`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/linear)
    MLOperand linear(const MLOperand& input);
    /// The linear method.
    /// [`MLGraphBuilder.linear`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/linear)
    MLOperand linear(const MLOperand& input, const MLLinearOptions& options);
    /// The lstm method.
    /// [`MLGraphBuilder.lstm`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/lstm)
    jsbind::TypedArray<MLOperand> lstm(const MLOperand& input, const MLOperand& weight, const MLOperand& recurrentWeight, unsigned long steps, unsigned long hiddenSize);
    /// The lstm method.
    /// [`MLGraphBuilder.lstm`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/lstm)
    jsbind::TypedArray<MLOperand> lstm(const MLOperand& input, const MLOperand& weight, const MLOperand& recurrentWeight, unsigned long steps, unsigned long hiddenSize, const MLLstmOptions& options);
    /// The lstmCell method.
    /// [`MLGraphBuilder.lstmCell`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/lstmCell)
    jsbind::TypedArray<MLOperand> lstmCell(const MLOperand& input, const MLOperand& weight, const MLOperand& recurrentWeight, const MLOperand& hiddenState, const MLOperand& cellState, unsigned long hiddenSize);
    /// The lstmCell method.
    /// [`MLGraphBuilder.lstmCell`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/lstmCell)
    jsbind::TypedArray<MLOperand> lstmCell(const MLOperand& input, const MLOperand& weight, const MLOperand& recurrentWeight, const MLOperand& hiddenState, const MLOperand& cellState, unsigned long hiddenSize, const MLLstmCellOptions& options);
    /// The matmul method.
    /// [`MLGraphBuilder.matmul`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/matmul)
    MLOperand matmul(const MLOperand& a, const MLOperand& b);
    /// The matmul method.
    /// [`MLGraphBuilder.matmul`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/matmul)
    MLOperand matmul(const MLOperand& a, const MLOperand& b, const MLOperatorOptions& options);
    /// The pad method.
    /// [`MLGraphBuilder.pad`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/pad)
    MLOperand pad(const MLOperand& input, jsbind::TypedArray<unsigned long> beginningPadding, jsbind::TypedArray<unsigned long> endingPadding);
    /// The pad method.
    /// [`MLGraphBuilder.pad`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/pad)
    MLOperand pad(const MLOperand& input, jsbind::TypedArray<unsigned long> beginningPadding, jsbind::TypedArray<unsigned long> endingPadding, const MLPadOptions& options);
    /// The averagePool2d method.
    /// [`MLGraphBuilder.averagePool2d`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/averagePool2d)
    MLOperand averagePool2d(const MLOperand& input);
    /// The averagePool2d method.
    /// [`MLGraphBuilder.averagePool2d`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/averagePool2d)
    MLOperand averagePool2d(const MLOperand& input, const MLPool2dOptions& options);
    /// The l2Pool2d method.
    /// [`MLGraphBuilder.l2Pool2d`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/l2Pool2d)
    MLOperand l2Pool2d(const MLOperand& input);
    /// The l2Pool2d method.
    /// [`MLGraphBuilder.l2Pool2d`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/l2Pool2d)
    MLOperand l2Pool2d(const MLOperand& input, const MLPool2dOptions& options);
    /// The maxPool2d method.
    /// [`MLGraphBuilder.maxPool2d`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/maxPool2d)
    MLOperand maxPool2d(const MLOperand& input);
    /// The maxPool2d method.
    /// [`MLGraphBuilder.maxPool2d`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/maxPool2d)
    MLOperand maxPool2d(const MLOperand& input, const MLPool2dOptions& options);
    /// The prelu method.
    /// [`MLGraphBuilder.prelu`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/prelu)
    MLOperand prelu(const MLOperand& input, const MLOperand& slope);
    /// The prelu method.
    /// [`MLGraphBuilder.prelu`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/prelu)
    MLOperand prelu(const MLOperand& input, const MLOperand& slope, const MLOperatorOptions& options);
    /// The reduceL1 method.
    /// [`MLGraphBuilder.reduceL1`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/reduceL1)
    MLOperand reduceL1(const MLOperand& input);
    /// The reduceL1 method.
    /// [`MLGraphBuilder.reduceL1`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/reduceL1)
    MLOperand reduceL1(const MLOperand& input, const MLReduceOptions& options);
    /// The reduceL2 method.
    /// [`MLGraphBuilder.reduceL2`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/reduceL2)
    MLOperand reduceL2(const MLOperand& input);
    /// The reduceL2 method.
    /// [`MLGraphBuilder.reduceL2`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/reduceL2)
    MLOperand reduceL2(const MLOperand& input, const MLReduceOptions& options);
    /// The reduceLogSum method.
    /// [`MLGraphBuilder.reduceLogSum`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/reduceLogSum)
    MLOperand reduceLogSum(const MLOperand& input);
    /// The reduceLogSum method.
    /// [`MLGraphBuilder.reduceLogSum`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/reduceLogSum)
    MLOperand reduceLogSum(const MLOperand& input, const MLReduceOptions& options);
    /// The reduceLogSumExp method.
    /// [`MLGraphBuilder.reduceLogSumExp`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/reduceLogSumExp)
    MLOperand reduceLogSumExp(const MLOperand& input);
    /// The reduceLogSumExp method.
    /// [`MLGraphBuilder.reduceLogSumExp`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/reduceLogSumExp)
    MLOperand reduceLogSumExp(const MLOperand& input, const MLReduceOptions& options);
    /// The reduceMax method.
    /// [`MLGraphBuilder.reduceMax`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/reduceMax)
    MLOperand reduceMax(const MLOperand& input);
    /// The reduceMax method.
    /// [`MLGraphBuilder.reduceMax`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/reduceMax)
    MLOperand reduceMax(const MLOperand& input, const MLReduceOptions& options);
    /// The reduceMean method.
    /// [`MLGraphBuilder.reduceMean`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/reduceMean)
    MLOperand reduceMean(const MLOperand& input);
    /// The reduceMean method.
    /// [`MLGraphBuilder.reduceMean`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/reduceMean)
    MLOperand reduceMean(const MLOperand& input, const MLReduceOptions& options);
    /// The reduceMin method.
    /// [`MLGraphBuilder.reduceMin`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/reduceMin)
    MLOperand reduceMin(const MLOperand& input);
    /// The reduceMin method.
    /// [`MLGraphBuilder.reduceMin`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/reduceMin)
    MLOperand reduceMin(const MLOperand& input, const MLReduceOptions& options);
    /// The reduceProduct method.
    /// [`MLGraphBuilder.reduceProduct`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/reduceProduct)
    MLOperand reduceProduct(const MLOperand& input);
    /// The reduceProduct method.
    /// [`MLGraphBuilder.reduceProduct`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/reduceProduct)
    MLOperand reduceProduct(const MLOperand& input, const MLReduceOptions& options);
    /// The reduceSum method.
    /// [`MLGraphBuilder.reduceSum`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/reduceSum)
    MLOperand reduceSum(const MLOperand& input);
    /// The reduceSum method.
    /// [`MLGraphBuilder.reduceSum`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/reduceSum)
    MLOperand reduceSum(const MLOperand& input, const MLReduceOptions& options);
    /// The reduceSumSquare method.
    /// [`MLGraphBuilder.reduceSumSquare`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/reduceSumSquare)
    MLOperand reduceSumSquare(const MLOperand& input);
    /// The reduceSumSquare method.
    /// [`MLGraphBuilder.reduceSumSquare`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/reduceSumSquare)
    MLOperand reduceSumSquare(const MLOperand& input, const MLReduceOptions& options);
    /// The relu method.
    /// [`MLGraphBuilder.relu`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/relu)
    MLOperand relu(const MLOperand& input);
    /// The relu method.
    /// [`MLGraphBuilder.relu`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/relu)
    MLOperand relu(const MLOperand& input, const MLOperatorOptions& options);
    /// The resample2d method.
    /// [`MLGraphBuilder.resample2d`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/resample2d)
    MLOperand resample2d(const MLOperand& input);
    /// The resample2d method.
    /// [`MLGraphBuilder.resample2d`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/resample2d)
    MLOperand resample2d(const MLOperand& input, const MLResample2dOptions& options);
    /// The reshape method.
    /// [`MLGraphBuilder.reshape`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/reshape)
    MLOperand reshape(const MLOperand& input, jsbind::TypedArray<unsigned long> newShape);
    /// The reshape method.
    /// [`MLGraphBuilder.reshape`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/reshape)
    MLOperand reshape(const MLOperand& input, jsbind::TypedArray<unsigned long> newShape, const MLOperatorOptions& options);
    /// The reverse method.
    /// [`MLGraphBuilder.reverse`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/reverse)
    MLOperand reverse(const MLOperand& input);
    /// The reverse method.
    /// [`MLGraphBuilder.reverse`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/reverse)
    MLOperand reverse(const MLOperand& input, const MLReverseOptions& options);
    /// The scatterElements method.
    /// [`MLGraphBuilder.scatterElements`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/scatterElements)
    MLOperand scatterElements(const MLOperand& input, const MLOperand& indices, const MLOperand& updates);
    /// The scatterElements method.
    /// [`MLGraphBuilder.scatterElements`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/scatterElements)
    MLOperand scatterElements(const MLOperand& input, const MLOperand& indices, const MLOperand& updates, const MLScatterOptions& options);
    /// The scatterND method.
    /// [`MLGraphBuilder.scatterND`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/scatterND)
    MLOperand scatterND(const MLOperand& input, const MLOperand& indices, const MLOperand& updates);
    /// The scatterND method.
    /// [`MLGraphBuilder.scatterND`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/scatterND)
    MLOperand scatterND(const MLOperand& input, const MLOperand& indices, const MLOperand& updates, const MLOperatorOptions& options);
    /// The sigmoid method.
    /// [`MLGraphBuilder.sigmoid`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/sigmoid)
    MLOperand sigmoid(const MLOperand& input);
    /// The sigmoid method.
    /// [`MLGraphBuilder.sigmoid`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/sigmoid)
    MLOperand sigmoid(const MLOperand& input, const MLOperatorOptions& options);
    /// The slice method.
    /// [`MLGraphBuilder.slice`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/slice)
    MLOperand slice(const MLOperand& input, jsbind::TypedArray<unsigned long> starts, jsbind::TypedArray<unsigned long> sizes);
    /// The slice method.
    /// [`MLGraphBuilder.slice`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/slice)
    MLOperand slice(const MLOperand& input, jsbind::TypedArray<unsigned long> starts, jsbind::TypedArray<unsigned long> sizes, const MLSliceOptions& options);
    /// The softmax method.
    /// [`MLGraphBuilder.softmax`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/softmax)
    MLOperand softmax(const MLOperand& input, unsigned long axis);
    /// The softmax method.
    /// [`MLGraphBuilder.softmax`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/softmax)
    MLOperand softmax(const MLOperand& input, unsigned long axis, const MLOperatorOptions& options);
    /// The softplus method.
    /// [`MLGraphBuilder.softplus`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/softplus)
    MLOperand softplus(const MLOperand& input);
    /// The softplus method.
    /// [`MLGraphBuilder.softplus`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/softplus)
    MLOperand softplus(const MLOperand& input, const MLOperatorOptions& options);
    /// The softsign method.
    /// [`MLGraphBuilder.softsign`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/softsign)
    MLOperand softsign(const MLOperand& input);
    /// The softsign method.
    /// [`MLGraphBuilder.softsign`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/softsign)
    MLOperand softsign(const MLOperand& input, const MLOperatorOptions& options);
    /// The split method.
    /// [`MLGraphBuilder.split`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/split)
    jsbind::TypedArray<MLOperand> split(const MLOperand& input, const jsbind::Any& splits);
    /// The split method.
    /// [`MLGraphBuilder.split`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/split)
    jsbind::TypedArray<MLOperand> split(const MLOperand& input, const jsbind::Any& splits, const MLSplitOptions& options);
    /// The tanh method.
    /// [`MLGraphBuilder.tanh`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/tanh)
    MLOperand tanh(const MLOperand& input);
    /// The tanh method.
    /// [`MLGraphBuilder.tanh`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/tanh)
    MLOperand tanh(const MLOperand& input, const MLOperatorOptions& options);
    /// The tile method.
    /// [`MLGraphBuilder.tile`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/tile)
    MLOperand tile(const MLOperand& input, jsbind::TypedArray<unsigned long> repetitions);
    /// The tile method.
    /// [`MLGraphBuilder.tile`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/tile)
    MLOperand tile(const MLOperand& input, jsbind::TypedArray<unsigned long> repetitions, const MLOperatorOptions& options);
    /// The transpose method.
    /// [`MLGraphBuilder.transpose`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/transpose)
    MLOperand transpose(const MLOperand& input);
    /// The transpose method.
    /// [`MLGraphBuilder.transpose`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/transpose)
    MLOperand transpose(const MLOperand& input, const MLTransposeOptions& options);
    /// The triangular method.
    /// [`MLGraphBuilder.triangular`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/triangular)
    MLOperand triangular(const MLOperand& input);
    /// The triangular method.
    /// [`MLGraphBuilder.triangular`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/triangular)
    MLOperand triangular(const MLOperand& input, const MLTriangularOptions& options);
    /// The where method.
    /// [`MLGraphBuilder.where`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/where)
    MLOperand where(const MLOperand& condition, const MLOperand& trueValue, const MLOperand& falseValue);
    /// The where method.
    /// [`MLGraphBuilder.where`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder/where)
    MLOperand where(const MLOperand& condition, const MLOperand& trueValue, const MLOperand& falseValue, const MLOperatorOptions& options);
};

