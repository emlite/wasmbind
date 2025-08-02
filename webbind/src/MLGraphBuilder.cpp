#include <webbind/MLGraphBuilder.hpp>
#include <webbind/MLOperand.hpp>
#include <webbind/MLContext.hpp>
#include <webbind/MLTensor.hpp>
#include <webbind/MLGraph.hpp>


MLArgMinMaxOptions::MLArgMinMaxOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
MLArgMinMaxOptions MLArgMinMaxOptions::take_ownership(Handle h) noexcept {
        return MLArgMinMaxOptions(h);
    }
MLArgMinMaxOptions::MLArgMinMaxOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
MLArgMinMaxOptions::MLArgMinMaxOptions() noexcept: emlite::Val(emlite::Val::object()) {}
MLArgMinMaxOptions MLArgMinMaxOptions::clone() const noexcept { return *this; }

bool MLArgMinMaxOptions::keepDimensions() const {
    return emlite::Val::get("keepDimensions").as<bool>();
}

void MLArgMinMaxOptions::keepDimensions(bool value) {
    emlite::Val::set("keepDimensions", value);
}

MLOperandDataType MLArgMinMaxOptions::outputDataType() const {
    return emlite::Val::get("outputDataType").as<MLOperandDataType>();
}

void MLArgMinMaxOptions::outputDataType(const MLOperandDataType& value) {
    emlite::Val::set("outputDataType", value);
}

MLBatchNormalizationOptions::MLBatchNormalizationOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
MLBatchNormalizationOptions MLBatchNormalizationOptions::take_ownership(Handle h) noexcept {
        return MLBatchNormalizationOptions(h);
    }
MLBatchNormalizationOptions::MLBatchNormalizationOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
MLBatchNormalizationOptions::MLBatchNormalizationOptions() noexcept: emlite::Val(emlite::Val::object()) {}
MLBatchNormalizationOptions MLBatchNormalizationOptions::clone() const noexcept { return *this; }

MLOperand MLBatchNormalizationOptions::scale() const {
    return emlite::Val::get("scale").as<MLOperand>();
}

void MLBatchNormalizationOptions::scale(const MLOperand& value) {
    emlite::Val::set("scale", value);
}

MLOperand MLBatchNormalizationOptions::bias() const {
    return emlite::Val::get("bias").as<MLOperand>();
}

void MLBatchNormalizationOptions::bias(const MLOperand& value) {
    emlite::Val::set("bias", value);
}

unsigned long MLBatchNormalizationOptions::axis() const {
    return emlite::Val::get("axis").as<unsigned long>();
}

void MLBatchNormalizationOptions::axis(unsigned long value) {
    emlite::Val::set("axis", value);
}

double MLBatchNormalizationOptions::epsilon() const {
    return emlite::Val::get("epsilon").as<double>();
}

void MLBatchNormalizationOptions::epsilon(double value) {
    emlite::Val::set("epsilon", value);
}

MLOperatorOptions::MLOperatorOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
MLOperatorOptions MLOperatorOptions::take_ownership(Handle h) noexcept {
        return MLOperatorOptions(h);
    }
MLOperatorOptions::MLOperatorOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
MLOperatorOptions::MLOperatorOptions() noexcept: emlite::Val(emlite::Val::object()) {}
MLOperatorOptions MLOperatorOptions::clone() const noexcept { return *this; }

jsbind::String MLOperatorOptions::label() const {
    return emlite::Val::get("label").as<jsbind::String>();
}

void MLOperatorOptions::label(const jsbind::String& value) {
    emlite::Val::set("label", value);
}

MLClampOptions::MLClampOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
MLClampOptions MLClampOptions::take_ownership(Handle h) noexcept {
        return MLClampOptions(h);
    }
MLClampOptions::MLClampOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
MLClampOptions::MLClampOptions() noexcept: emlite::Val(emlite::Val::object()) {}
MLClampOptions MLClampOptions::clone() const noexcept { return *this; }

jsbind::Any MLClampOptions::minValue() const {
    return emlite::Val::get("minValue").as<jsbind::Any>();
}

void MLClampOptions::minValue(const jsbind::Any& value) {
    emlite::Val::set("minValue", value);
}

jsbind::Any MLClampOptions::maxValue() const {
    return emlite::Val::get("maxValue").as<jsbind::Any>();
}

void MLClampOptions::maxValue(const jsbind::Any& value) {
    emlite::Val::set("maxValue", value);
}

MLConv2dOptions::MLConv2dOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
MLConv2dOptions MLConv2dOptions::take_ownership(Handle h) noexcept {
        return MLConv2dOptions(h);
    }
MLConv2dOptions::MLConv2dOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
MLConv2dOptions::MLConv2dOptions() noexcept: emlite::Val(emlite::Val::object()) {}
MLConv2dOptions MLConv2dOptions::clone() const noexcept { return *this; }

jsbind::TypedArray<unsigned long> MLConv2dOptions::padding() const {
    return emlite::Val::get("padding").as<jsbind::TypedArray<unsigned long>>();
}

void MLConv2dOptions::padding(jsbind::TypedArray<unsigned long> value) {
    emlite::Val::set("padding", value);
}

jsbind::TypedArray<unsigned long> MLConv2dOptions::strides() const {
    return emlite::Val::get("strides").as<jsbind::TypedArray<unsigned long>>();
}

void MLConv2dOptions::strides(jsbind::TypedArray<unsigned long> value) {
    emlite::Val::set("strides", value);
}

jsbind::TypedArray<unsigned long> MLConv2dOptions::dilations() const {
    return emlite::Val::get("dilations").as<jsbind::TypedArray<unsigned long>>();
}

void MLConv2dOptions::dilations(jsbind::TypedArray<unsigned long> value) {
    emlite::Val::set("dilations", value);
}

unsigned long MLConv2dOptions::groups() const {
    return emlite::Val::get("groups").as<unsigned long>();
}

void MLConv2dOptions::groups(unsigned long value) {
    emlite::Val::set("groups", value);
}

MLInputOperandLayout MLConv2dOptions::inputLayout() const {
    return emlite::Val::get("inputLayout").as<MLInputOperandLayout>();
}

void MLConv2dOptions::inputLayout(const MLInputOperandLayout& value) {
    emlite::Val::set("inputLayout", value);
}

MLConv2dFilterOperandLayout MLConv2dOptions::filterLayout() const {
    return emlite::Val::get("filterLayout").as<MLConv2dFilterOperandLayout>();
}

void MLConv2dOptions::filterLayout(const MLConv2dFilterOperandLayout& value) {
    emlite::Val::set("filterLayout", value);
}

MLOperand MLConv2dOptions::bias() const {
    return emlite::Val::get("bias").as<MLOperand>();
}

void MLConv2dOptions::bias(const MLOperand& value) {
    emlite::Val::set("bias", value);
}

MLConvTranspose2dOptions::MLConvTranspose2dOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
MLConvTranspose2dOptions MLConvTranspose2dOptions::take_ownership(Handle h) noexcept {
        return MLConvTranspose2dOptions(h);
    }
MLConvTranspose2dOptions::MLConvTranspose2dOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
MLConvTranspose2dOptions::MLConvTranspose2dOptions() noexcept: emlite::Val(emlite::Val::object()) {}
MLConvTranspose2dOptions MLConvTranspose2dOptions::clone() const noexcept { return *this; }

jsbind::TypedArray<unsigned long> MLConvTranspose2dOptions::padding() const {
    return emlite::Val::get("padding").as<jsbind::TypedArray<unsigned long>>();
}

void MLConvTranspose2dOptions::padding(jsbind::TypedArray<unsigned long> value) {
    emlite::Val::set("padding", value);
}

jsbind::TypedArray<unsigned long> MLConvTranspose2dOptions::strides() const {
    return emlite::Val::get("strides").as<jsbind::TypedArray<unsigned long>>();
}

void MLConvTranspose2dOptions::strides(jsbind::TypedArray<unsigned long> value) {
    emlite::Val::set("strides", value);
}

jsbind::TypedArray<unsigned long> MLConvTranspose2dOptions::dilations() const {
    return emlite::Val::get("dilations").as<jsbind::TypedArray<unsigned long>>();
}

void MLConvTranspose2dOptions::dilations(jsbind::TypedArray<unsigned long> value) {
    emlite::Val::set("dilations", value);
}

jsbind::TypedArray<unsigned long> MLConvTranspose2dOptions::outputPadding() const {
    return emlite::Val::get("outputPadding").as<jsbind::TypedArray<unsigned long>>();
}

void MLConvTranspose2dOptions::outputPadding(jsbind::TypedArray<unsigned long> value) {
    emlite::Val::set("outputPadding", value);
}

jsbind::TypedArray<unsigned long> MLConvTranspose2dOptions::outputSizes() const {
    return emlite::Val::get("outputSizes").as<jsbind::TypedArray<unsigned long>>();
}

void MLConvTranspose2dOptions::outputSizes(jsbind::TypedArray<unsigned long> value) {
    emlite::Val::set("outputSizes", value);
}

unsigned long MLConvTranspose2dOptions::groups() const {
    return emlite::Val::get("groups").as<unsigned long>();
}

void MLConvTranspose2dOptions::groups(unsigned long value) {
    emlite::Val::set("groups", value);
}

MLInputOperandLayout MLConvTranspose2dOptions::inputLayout() const {
    return emlite::Val::get("inputLayout").as<MLInputOperandLayout>();
}

void MLConvTranspose2dOptions::inputLayout(const MLInputOperandLayout& value) {
    emlite::Val::set("inputLayout", value);
}

MLConvTranspose2dFilterOperandLayout MLConvTranspose2dOptions::filterLayout() const {
    return emlite::Val::get("filterLayout").as<MLConvTranspose2dFilterOperandLayout>();
}

void MLConvTranspose2dOptions::filterLayout(const MLConvTranspose2dFilterOperandLayout& value) {
    emlite::Val::set("filterLayout", value);
}

MLOperand MLConvTranspose2dOptions::bias() const {
    return emlite::Val::get("bias").as<MLOperand>();
}

void MLConvTranspose2dOptions::bias(const MLOperand& value) {
    emlite::Val::set("bias", value);
}

MLCumulativeSumOptions::MLCumulativeSumOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
MLCumulativeSumOptions MLCumulativeSumOptions::take_ownership(Handle h) noexcept {
        return MLCumulativeSumOptions(h);
    }
MLCumulativeSumOptions::MLCumulativeSumOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
MLCumulativeSumOptions::MLCumulativeSumOptions() noexcept: emlite::Val(emlite::Val::object()) {}
MLCumulativeSumOptions MLCumulativeSumOptions::clone() const noexcept { return *this; }

bool MLCumulativeSumOptions::exclusive() const {
    return emlite::Val::get("exclusive").as<bool>();
}

void MLCumulativeSumOptions::exclusive(bool value) {
    emlite::Val::set("exclusive", value);
}

bool MLCumulativeSumOptions::reversed() const {
    return emlite::Val::get("reversed").as<bool>();
}

void MLCumulativeSumOptions::reversed(bool value) {
    emlite::Val::set("reversed", value);
}

MLEluOptions::MLEluOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
MLEluOptions MLEluOptions::take_ownership(Handle h) noexcept {
        return MLEluOptions(h);
    }
MLEluOptions::MLEluOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
MLEluOptions::MLEluOptions() noexcept: emlite::Val(emlite::Val::object()) {}
MLEluOptions MLEluOptions::clone() const noexcept { return *this; }

double MLEluOptions::alpha() const {
    return emlite::Val::get("alpha").as<double>();
}

void MLEluOptions::alpha(double value) {
    emlite::Val::set("alpha", value);
}

MLGatherOptions::MLGatherOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
MLGatherOptions MLGatherOptions::take_ownership(Handle h) noexcept {
        return MLGatherOptions(h);
    }
MLGatherOptions::MLGatherOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
MLGatherOptions::MLGatherOptions() noexcept: emlite::Val(emlite::Val::object()) {}
MLGatherOptions MLGatherOptions::clone() const noexcept { return *this; }

unsigned long MLGatherOptions::axis() const {
    return emlite::Val::get("axis").as<unsigned long>();
}

void MLGatherOptions::axis(unsigned long value) {
    emlite::Val::set("axis", value);
}

MLGemmOptions::MLGemmOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
MLGemmOptions MLGemmOptions::take_ownership(Handle h) noexcept {
        return MLGemmOptions(h);
    }
MLGemmOptions::MLGemmOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
MLGemmOptions::MLGemmOptions() noexcept: emlite::Val(emlite::Val::object()) {}
MLGemmOptions MLGemmOptions::clone() const noexcept { return *this; }

MLOperand MLGemmOptions::c() const {
    return emlite::Val::get("c").as<MLOperand>();
}

void MLGemmOptions::c(const MLOperand& value) {
    emlite::Val::set("c", value);
}

double MLGemmOptions::alpha() const {
    return emlite::Val::get("alpha").as<double>();
}

void MLGemmOptions::alpha(double value) {
    emlite::Val::set("alpha", value);
}

double MLGemmOptions::beta() const {
    return emlite::Val::get("beta").as<double>();
}

void MLGemmOptions::beta(double value) {
    emlite::Val::set("beta", value);
}

bool MLGemmOptions::aTranspose() const {
    return emlite::Val::get("aTranspose").as<bool>();
}

void MLGemmOptions::aTranspose(bool value) {
    emlite::Val::set("aTranspose", value);
}

bool MLGemmOptions::bTranspose() const {
    return emlite::Val::get("bTranspose").as<bool>();
}

void MLGemmOptions::bTranspose(bool value) {
    emlite::Val::set("bTranspose", value);
}

MLGruOptions::MLGruOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
MLGruOptions MLGruOptions::take_ownership(Handle h) noexcept {
        return MLGruOptions(h);
    }
MLGruOptions::MLGruOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
MLGruOptions::MLGruOptions() noexcept: emlite::Val(emlite::Val::object()) {}
MLGruOptions MLGruOptions::clone() const noexcept { return *this; }

MLOperand MLGruOptions::bias() const {
    return emlite::Val::get("bias").as<MLOperand>();
}

void MLGruOptions::bias(const MLOperand& value) {
    emlite::Val::set("bias", value);
}

MLOperand MLGruOptions::recurrentBias() const {
    return emlite::Val::get("recurrentBias").as<MLOperand>();
}

void MLGruOptions::recurrentBias(const MLOperand& value) {
    emlite::Val::set("recurrentBias", value);
}

MLOperand MLGruOptions::initialHiddenState() const {
    return emlite::Val::get("initialHiddenState").as<MLOperand>();
}

void MLGruOptions::initialHiddenState(const MLOperand& value) {
    emlite::Val::set("initialHiddenState", value);
}

bool MLGruOptions::resetAfter() const {
    return emlite::Val::get("resetAfter").as<bool>();
}

void MLGruOptions::resetAfter(bool value) {
    emlite::Val::set("resetAfter", value);
}

bool MLGruOptions::returnSequence() const {
    return emlite::Val::get("returnSequence").as<bool>();
}

void MLGruOptions::returnSequence(bool value) {
    emlite::Val::set("returnSequence", value);
}

MLRecurrentNetworkDirection MLGruOptions::direction() const {
    return emlite::Val::get("direction").as<MLRecurrentNetworkDirection>();
}

void MLGruOptions::direction(const MLRecurrentNetworkDirection& value) {
    emlite::Val::set("direction", value);
}

MLGruWeightLayout MLGruOptions::layout() const {
    return emlite::Val::get("layout").as<MLGruWeightLayout>();
}

void MLGruOptions::layout(const MLGruWeightLayout& value) {
    emlite::Val::set("layout", value);
}

jsbind::TypedArray<MLRecurrentNetworkActivation> MLGruOptions::activations() const {
    return emlite::Val::get("activations").as<jsbind::TypedArray<MLRecurrentNetworkActivation>>();
}

void MLGruOptions::activations(const jsbind::TypedArray<MLRecurrentNetworkActivation>& value) {
    emlite::Val::set("activations", value);
}

MLGruCellOptions::MLGruCellOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
MLGruCellOptions MLGruCellOptions::take_ownership(Handle h) noexcept {
        return MLGruCellOptions(h);
    }
MLGruCellOptions::MLGruCellOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
MLGruCellOptions::MLGruCellOptions() noexcept: emlite::Val(emlite::Val::object()) {}
MLGruCellOptions MLGruCellOptions::clone() const noexcept { return *this; }

MLOperand MLGruCellOptions::bias() const {
    return emlite::Val::get("bias").as<MLOperand>();
}

void MLGruCellOptions::bias(const MLOperand& value) {
    emlite::Val::set("bias", value);
}

MLOperand MLGruCellOptions::recurrentBias() const {
    return emlite::Val::get("recurrentBias").as<MLOperand>();
}

void MLGruCellOptions::recurrentBias(const MLOperand& value) {
    emlite::Val::set("recurrentBias", value);
}

bool MLGruCellOptions::resetAfter() const {
    return emlite::Val::get("resetAfter").as<bool>();
}

void MLGruCellOptions::resetAfter(bool value) {
    emlite::Val::set("resetAfter", value);
}

MLGruWeightLayout MLGruCellOptions::layout() const {
    return emlite::Val::get("layout").as<MLGruWeightLayout>();
}

void MLGruCellOptions::layout(const MLGruWeightLayout& value) {
    emlite::Val::set("layout", value);
}

jsbind::TypedArray<MLRecurrentNetworkActivation> MLGruCellOptions::activations() const {
    return emlite::Val::get("activations").as<jsbind::TypedArray<MLRecurrentNetworkActivation>>();
}

void MLGruCellOptions::activations(const jsbind::TypedArray<MLRecurrentNetworkActivation>& value) {
    emlite::Val::set("activations", value);
}

MLHardSigmoidOptions::MLHardSigmoidOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
MLHardSigmoidOptions MLHardSigmoidOptions::take_ownership(Handle h) noexcept {
        return MLHardSigmoidOptions(h);
    }
MLHardSigmoidOptions::MLHardSigmoidOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
MLHardSigmoidOptions::MLHardSigmoidOptions() noexcept: emlite::Val(emlite::Val::object()) {}
MLHardSigmoidOptions MLHardSigmoidOptions::clone() const noexcept { return *this; }

double MLHardSigmoidOptions::alpha() const {
    return emlite::Val::get("alpha").as<double>();
}

void MLHardSigmoidOptions::alpha(double value) {
    emlite::Val::set("alpha", value);
}

double MLHardSigmoidOptions::beta() const {
    return emlite::Val::get("beta").as<double>();
}

void MLHardSigmoidOptions::beta(double value) {
    emlite::Val::set("beta", value);
}

MLInstanceNormalizationOptions::MLInstanceNormalizationOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
MLInstanceNormalizationOptions MLInstanceNormalizationOptions::take_ownership(Handle h) noexcept {
        return MLInstanceNormalizationOptions(h);
    }
MLInstanceNormalizationOptions::MLInstanceNormalizationOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
MLInstanceNormalizationOptions::MLInstanceNormalizationOptions() noexcept: emlite::Val(emlite::Val::object()) {}
MLInstanceNormalizationOptions MLInstanceNormalizationOptions::clone() const noexcept { return *this; }

MLOperand MLInstanceNormalizationOptions::scale() const {
    return emlite::Val::get("scale").as<MLOperand>();
}

void MLInstanceNormalizationOptions::scale(const MLOperand& value) {
    emlite::Val::set("scale", value);
}

MLOperand MLInstanceNormalizationOptions::bias() const {
    return emlite::Val::get("bias").as<MLOperand>();
}

void MLInstanceNormalizationOptions::bias(const MLOperand& value) {
    emlite::Val::set("bias", value);
}

double MLInstanceNormalizationOptions::epsilon() const {
    return emlite::Val::get("epsilon").as<double>();
}

void MLInstanceNormalizationOptions::epsilon(double value) {
    emlite::Val::set("epsilon", value);
}

MLInputOperandLayout MLInstanceNormalizationOptions::layout() const {
    return emlite::Val::get("layout").as<MLInputOperandLayout>();
}

void MLInstanceNormalizationOptions::layout(const MLInputOperandLayout& value) {
    emlite::Val::set("layout", value);
}

MLLayerNormalizationOptions::MLLayerNormalizationOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
MLLayerNormalizationOptions MLLayerNormalizationOptions::take_ownership(Handle h) noexcept {
        return MLLayerNormalizationOptions(h);
    }
MLLayerNormalizationOptions::MLLayerNormalizationOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
MLLayerNormalizationOptions::MLLayerNormalizationOptions() noexcept: emlite::Val(emlite::Val::object()) {}
MLLayerNormalizationOptions MLLayerNormalizationOptions::clone() const noexcept { return *this; }

MLOperand MLLayerNormalizationOptions::scale() const {
    return emlite::Val::get("scale").as<MLOperand>();
}

void MLLayerNormalizationOptions::scale(const MLOperand& value) {
    emlite::Val::set("scale", value);
}

MLOperand MLLayerNormalizationOptions::bias() const {
    return emlite::Val::get("bias").as<MLOperand>();
}

void MLLayerNormalizationOptions::bias(const MLOperand& value) {
    emlite::Val::set("bias", value);
}

jsbind::TypedArray<unsigned long> MLLayerNormalizationOptions::axes() const {
    return emlite::Val::get("axes").as<jsbind::TypedArray<unsigned long>>();
}

void MLLayerNormalizationOptions::axes(jsbind::TypedArray<unsigned long> value) {
    emlite::Val::set("axes", value);
}

double MLLayerNormalizationOptions::epsilon() const {
    return emlite::Val::get("epsilon").as<double>();
}

void MLLayerNormalizationOptions::epsilon(double value) {
    emlite::Val::set("epsilon", value);
}

MLLeakyReluOptions::MLLeakyReluOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
MLLeakyReluOptions MLLeakyReluOptions::take_ownership(Handle h) noexcept {
        return MLLeakyReluOptions(h);
    }
MLLeakyReluOptions::MLLeakyReluOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
MLLeakyReluOptions::MLLeakyReluOptions() noexcept: emlite::Val(emlite::Val::object()) {}
MLLeakyReluOptions MLLeakyReluOptions::clone() const noexcept { return *this; }

double MLLeakyReluOptions::alpha() const {
    return emlite::Val::get("alpha").as<double>();
}

void MLLeakyReluOptions::alpha(double value) {
    emlite::Val::set("alpha", value);
}

MLLinearOptions::MLLinearOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
MLLinearOptions MLLinearOptions::take_ownership(Handle h) noexcept {
        return MLLinearOptions(h);
    }
MLLinearOptions::MLLinearOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
MLLinearOptions::MLLinearOptions() noexcept: emlite::Val(emlite::Val::object()) {}
MLLinearOptions MLLinearOptions::clone() const noexcept { return *this; }

double MLLinearOptions::alpha() const {
    return emlite::Val::get("alpha").as<double>();
}

void MLLinearOptions::alpha(double value) {
    emlite::Val::set("alpha", value);
}

double MLLinearOptions::beta() const {
    return emlite::Val::get("beta").as<double>();
}

void MLLinearOptions::beta(double value) {
    emlite::Val::set("beta", value);
}

MLLstmOptions::MLLstmOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
MLLstmOptions MLLstmOptions::take_ownership(Handle h) noexcept {
        return MLLstmOptions(h);
    }
MLLstmOptions::MLLstmOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
MLLstmOptions::MLLstmOptions() noexcept: emlite::Val(emlite::Val::object()) {}
MLLstmOptions MLLstmOptions::clone() const noexcept { return *this; }

MLOperand MLLstmOptions::bias() const {
    return emlite::Val::get("bias").as<MLOperand>();
}

void MLLstmOptions::bias(const MLOperand& value) {
    emlite::Val::set("bias", value);
}

MLOperand MLLstmOptions::recurrentBias() const {
    return emlite::Val::get("recurrentBias").as<MLOperand>();
}

void MLLstmOptions::recurrentBias(const MLOperand& value) {
    emlite::Val::set("recurrentBias", value);
}

MLOperand MLLstmOptions::peepholeWeight() const {
    return emlite::Val::get("peepholeWeight").as<MLOperand>();
}

void MLLstmOptions::peepholeWeight(const MLOperand& value) {
    emlite::Val::set("peepholeWeight", value);
}

MLOperand MLLstmOptions::initialHiddenState() const {
    return emlite::Val::get("initialHiddenState").as<MLOperand>();
}

void MLLstmOptions::initialHiddenState(const MLOperand& value) {
    emlite::Val::set("initialHiddenState", value);
}

MLOperand MLLstmOptions::initialCellState() const {
    return emlite::Val::get("initialCellState").as<MLOperand>();
}

void MLLstmOptions::initialCellState(const MLOperand& value) {
    emlite::Val::set("initialCellState", value);
}

bool MLLstmOptions::returnSequence() const {
    return emlite::Val::get("returnSequence").as<bool>();
}

void MLLstmOptions::returnSequence(bool value) {
    emlite::Val::set("returnSequence", value);
}

MLRecurrentNetworkDirection MLLstmOptions::direction() const {
    return emlite::Val::get("direction").as<MLRecurrentNetworkDirection>();
}

void MLLstmOptions::direction(const MLRecurrentNetworkDirection& value) {
    emlite::Val::set("direction", value);
}

MLLstmWeightLayout MLLstmOptions::layout() const {
    return emlite::Val::get("layout").as<MLLstmWeightLayout>();
}

void MLLstmOptions::layout(const MLLstmWeightLayout& value) {
    emlite::Val::set("layout", value);
}

jsbind::TypedArray<MLRecurrentNetworkActivation> MLLstmOptions::activations() const {
    return emlite::Val::get("activations").as<jsbind::TypedArray<MLRecurrentNetworkActivation>>();
}

void MLLstmOptions::activations(const jsbind::TypedArray<MLRecurrentNetworkActivation>& value) {
    emlite::Val::set("activations", value);
}

MLLstmCellOptions::MLLstmCellOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
MLLstmCellOptions MLLstmCellOptions::take_ownership(Handle h) noexcept {
        return MLLstmCellOptions(h);
    }
MLLstmCellOptions::MLLstmCellOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
MLLstmCellOptions::MLLstmCellOptions() noexcept: emlite::Val(emlite::Val::object()) {}
MLLstmCellOptions MLLstmCellOptions::clone() const noexcept { return *this; }

MLOperand MLLstmCellOptions::bias() const {
    return emlite::Val::get("bias").as<MLOperand>();
}

void MLLstmCellOptions::bias(const MLOperand& value) {
    emlite::Val::set("bias", value);
}

MLOperand MLLstmCellOptions::recurrentBias() const {
    return emlite::Val::get("recurrentBias").as<MLOperand>();
}

void MLLstmCellOptions::recurrentBias(const MLOperand& value) {
    emlite::Val::set("recurrentBias", value);
}

MLOperand MLLstmCellOptions::peepholeWeight() const {
    return emlite::Val::get("peepholeWeight").as<MLOperand>();
}

void MLLstmCellOptions::peepholeWeight(const MLOperand& value) {
    emlite::Val::set("peepholeWeight", value);
}

MLLstmWeightLayout MLLstmCellOptions::layout() const {
    return emlite::Val::get("layout").as<MLLstmWeightLayout>();
}

void MLLstmCellOptions::layout(const MLLstmWeightLayout& value) {
    emlite::Val::set("layout", value);
}

jsbind::TypedArray<MLRecurrentNetworkActivation> MLLstmCellOptions::activations() const {
    return emlite::Val::get("activations").as<jsbind::TypedArray<MLRecurrentNetworkActivation>>();
}

void MLLstmCellOptions::activations(const jsbind::TypedArray<MLRecurrentNetworkActivation>& value) {
    emlite::Val::set("activations", value);
}

MLPadOptions::MLPadOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
MLPadOptions MLPadOptions::take_ownership(Handle h) noexcept {
        return MLPadOptions(h);
    }
MLPadOptions::MLPadOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
MLPadOptions::MLPadOptions() noexcept: emlite::Val(emlite::Val::object()) {}
MLPadOptions MLPadOptions::clone() const noexcept { return *this; }

MLPaddingMode MLPadOptions::mode() const {
    return emlite::Val::get("mode").as<MLPaddingMode>();
}

void MLPadOptions::mode(const MLPaddingMode& value) {
    emlite::Val::set("mode", value);
}

jsbind::Any MLPadOptions::value() const {
    return emlite::Val::get("value").as<jsbind::Any>();
}

void MLPadOptions::value(const jsbind::Any& value) {
    emlite::Val::set("value", value);
}

MLPool2dOptions::MLPool2dOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
MLPool2dOptions MLPool2dOptions::take_ownership(Handle h) noexcept {
        return MLPool2dOptions(h);
    }
MLPool2dOptions::MLPool2dOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
MLPool2dOptions::MLPool2dOptions() noexcept: emlite::Val(emlite::Val::object()) {}
MLPool2dOptions MLPool2dOptions::clone() const noexcept { return *this; }

jsbind::TypedArray<unsigned long> MLPool2dOptions::windowDimensions() const {
    return emlite::Val::get("windowDimensions").as<jsbind::TypedArray<unsigned long>>();
}

void MLPool2dOptions::windowDimensions(jsbind::TypedArray<unsigned long> value) {
    emlite::Val::set("windowDimensions", value);
}

jsbind::TypedArray<unsigned long> MLPool2dOptions::padding() const {
    return emlite::Val::get("padding").as<jsbind::TypedArray<unsigned long>>();
}

void MLPool2dOptions::padding(jsbind::TypedArray<unsigned long> value) {
    emlite::Val::set("padding", value);
}

jsbind::TypedArray<unsigned long> MLPool2dOptions::strides() const {
    return emlite::Val::get("strides").as<jsbind::TypedArray<unsigned long>>();
}

void MLPool2dOptions::strides(jsbind::TypedArray<unsigned long> value) {
    emlite::Val::set("strides", value);
}

jsbind::TypedArray<unsigned long> MLPool2dOptions::dilations() const {
    return emlite::Val::get("dilations").as<jsbind::TypedArray<unsigned long>>();
}

void MLPool2dOptions::dilations(jsbind::TypedArray<unsigned long> value) {
    emlite::Val::set("dilations", value);
}

MLInputOperandLayout MLPool2dOptions::layout() const {
    return emlite::Val::get("layout").as<MLInputOperandLayout>();
}

void MLPool2dOptions::layout(const MLInputOperandLayout& value) {
    emlite::Val::set("layout", value);
}

MLRoundingType MLPool2dOptions::roundingType() const {
    return emlite::Val::get("roundingType").as<MLRoundingType>();
}

void MLPool2dOptions::roundingType(const MLRoundingType& value) {
    emlite::Val::set("roundingType", value);
}

jsbind::TypedArray<unsigned long> MLPool2dOptions::outputSizes() const {
    return emlite::Val::get("outputSizes").as<jsbind::TypedArray<unsigned long>>();
}

void MLPool2dOptions::outputSizes(jsbind::TypedArray<unsigned long> value) {
    emlite::Val::set("outputSizes", value);
}

MLReduceOptions::MLReduceOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
MLReduceOptions MLReduceOptions::take_ownership(Handle h) noexcept {
        return MLReduceOptions(h);
    }
MLReduceOptions::MLReduceOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
MLReduceOptions::MLReduceOptions() noexcept: emlite::Val(emlite::Val::object()) {}
MLReduceOptions MLReduceOptions::clone() const noexcept { return *this; }

jsbind::TypedArray<unsigned long> MLReduceOptions::axes() const {
    return emlite::Val::get("axes").as<jsbind::TypedArray<unsigned long>>();
}

void MLReduceOptions::axes(jsbind::TypedArray<unsigned long> value) {
    emlite::Val::set("axes", value);
}

bool MLReduceOptions::keepDimensions() const {
    return emlite::Val::get("keepDimensions").as<bool>();
}

void MLReduceOptions::keepDimensions(bool value) {
    emlite::Val::set("keepDimensions", value);
}

MLResample2dOptions::MLResample2dOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
MLResample2dOptions MLResample2dOptions::take_ownership(Handle h) noexcept {
        return MLResample2dOptions(h);
    }
MLResample2dOptions::MLResample2dOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
MLResample2dOptions::MLResample2dOptions() noexcept: emlite::Val(emlite::Val::object()) {}
MLResample2dOptions MLResample2dOptions::clone() const noexcept { return *this; }

MLInterpolationMode MLResample2dOptions::mode() const {
    return emlite::Val::get("mode").as<MLInterpolationMode>();
}

void MLResample2dOptions::mode(const MLInterpolationMode& value) {
    emlite::Val::set("mode", value);
}

jsbind::TypedArray<float> MLResample2dOptions::scales() const {
    return emlite::Val::get("scales").as<jsbind::TypedArray<float>>();
}

void MLResample2dOptions::scales(jsbind::TypedArray<float> value) {
    emlite::Val::set("scales", value);
}

jsbind::TypedArray<unsigned long> MLResample2dOptions::sizes() const {
    return emlite::Val::get("sizes").as<jsbind::TypedArray<unsigned long>>();
}

void MLResample2dOptions::sizes(jsbind::TypedArray<unsigned long> value) {
    emlite::Val::set("sizes", value);
}

jsbind::TypedArray<unsigned long> MLResample2dOptions::axes() const {
    return emlite::Val::get("axes").as<jsbind::TypedArray<unsigned long>>();
}

void MLResample2dOptions::axes(jsbind::TypedArray<unsigned long> value) {
    emlite::Val::set("axes", value);
}

MLReverseOptions::MLReverseOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
MLReverseOptions MLReverseOptions::take_ownership(Handle h) noexcept {
        return MLReverseOptions(h);
    }
MLReverseOptions::MLReverseOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
MLReverseOptions::MLReverseOptions() noexcept: emlite::Val(emlite::Val::object()) {}
MLReverseOptions MLReverseOptions::clone() const noexcept { return *this; }

jsbind::TypedArray<unsigned long> MLReverseOptions::axes() const {
    return emlite::Val::get("axes").as<jsbind::TypedArray<unsigned long>>();
}

void MLReverseOptions::axes(jsbind::TypedArray<unsigned long> value) {
    emlite::Val::set("axes", value);
}

MLScatterOptions::MLScatterOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
MLScatterOptions MLScatterOptions::take_ownership(Handle h) noexcept {
        return MLScatterOptions(h);
    }
MLScatterOptions::MLScatterOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
MLScatterOptions::MLScatterOptions() noexcept: emlite::Val(emlite::Val::object()) {}
MLScatterOptions MLScatterOptions::clone() const noexcept { return *this; }

unsigned long MLScatterOptions::axis() const {
    return emlite::Val::get("axis").as<unsigned long>();
}

void MLScatterOptions::axis(unsigned long value) {
    emlite::Val::set("axis", value);
}

MLSliceOptions::MLSliceOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
MLSliceOptions MLSliceOptions::take_ownership(Handle h) noexcept {
        return MLSliceOptions(h);
    }
MLSliceOptions::MLSliceOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
MLSliceOptions::MLSliceOptions() noexcept: emlite::Val(emlite::Val::object()) {}
MLSliceOptions MLSliceOptions::clone() const noexcept { return *this; }

jsbind::TypedArray<unsigned long> MLSliceOptions::strides() const {
    return emlite::Val::get("strides").as<jsbind::TypedArray<unsigned long>>();
}

void MLSliceOptions::strides(jsbind::TypedArray<unsigned long> value) {
    emlite::Val::set("strides", value);
}

MLSplitOptions::MLSplitOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
MLSplitOptions MLSplitOptions::take_ownership(Handle h) noexcept {
        return MLSplitOptions(h);
    }
MLSplitOptions::MLSplitOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
MLSplitOptions::MLSplitOptions() noexcept: emlite::Val(emlite::Val::object()) {}
MLSplitOptions MLSplitOptions::clone() const noexcept { return *this; }

unsigned long MLSplitOptions::axis() const {
    return emlite::Val::get("axis").as<unsigned long>();
}

void MLSplitOptions::axis(unsigned long value) {
    emlite::Val::set("axis", value);
}

MLTransposeOptions::MLTransposeOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
MLTransposeOptions MLTransposeOptions::take_ownership(Handle h) noexcept {
        return MLTransposeOptions(h);
    }
MLTransposeOptions::MLTransposeOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
MLTransposeOptions::MLTransposeOptions() noexcept: emlite::Val(emlite::Val::object()) {}
MLTransposeOptions MLTransposeOptions::clone() const noexcept { return *this; }

jsbind::TypedArray<unsigned long> MLTransposeOptions::permutation() const {
    return emlite::Val::get("permutation").as<jsbind::TypedArray<unsigned long>>();
}

void MLTransposeOptions::permutation(jsbind::TypedArray<unsigned long> value) {
    emlite::Val::set("permutation", value);
}

MLTriangularOptions::MLTriangularOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
MLTriangularOptions MLTriangularOptions::take_ownership(Handle h) noexcept {
        return MLTriangularOptions(h);
    }
MLTriangularOptions::MLTriangularOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
MLTriangularOptions::MLTriangularOptions() noexcept: emlite::Val(emlite::Val::object()) {}
MLTriangularOptions MLTriangularOptions::clone() const noexcept { return *this; }

bool MLTriangularOptions::upper() const {
    return emlite::Val::get("upper").as<bool>();
}

void MLTriangularOptions::upper(bool value) {
    emlite::Val::set("upper", value);
}

long MLTriangularOptions::diagonal() const {
    return emlite::Val::get("diagonal").as<long>();
}

void MLTriangularOptions::diagonal(long value) {
    emlite::Val::set("diagonal", value);
}

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

