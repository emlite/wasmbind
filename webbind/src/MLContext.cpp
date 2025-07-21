#include <webbind/MLContext.hpp>
#include <webbind/MLGraph.hpp>
#include <webbind/MLTensor.hpp>


MLTensorDescriptor::MLTensorDescriptor(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
MLTensorDescriptor MLTensorDescriptor::take_ownership(Handle h) noexcept {
        return MLTensorDescriptor(h);
    }
MLTensorDescriptor::MLTensorDescriptor(const emlite::Val &val) noexcept: emlite::Val(val) {}
MLTensorDescriptor::MLTensorDescriptor() noexcept: emlite::Val(emlite::Val::object()) {}
MLTensorDescriptor MLTensorDescriptor::clone() const noexcept { return *this; }

bool MLTensorDescriptor::readable() const {
    return emlite::Val::get("readable").as<bool>();
}

void MLTensorDescriptor::readable(bool value) {
    emlite::Val::set("readable", value);
}

bool MLTensorDescriptor::writable() const {
    return emlite::Val::get("writable").as<bool>();
}

void MLTensorDescriptor::writable(bool value) {
    emlite::Val::set("writable", value);
}

MLOperandDescriptor::MLOperandDescriptor(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
MLOperandDescriptor MLOperandDescriptor::take_ownership(Handle h) noexcept {
        return MLOperandDescriptor(h);
    }
MLOperandDescriptor::MLOperandDescriptor(const emlite::Val &val) noexcept: emlite::Val(val) {}
MLOperandDescriptor::MLOperandDescriptor() noexcept: emlite::Val(emlite::Val::object()) {}
MLOperandDescriptor MLOperandDescriptor::clone() const noexcept { return *this; }

MLOperandDataType MLOperandDescriptor::dataType() const {
    return emlite::Val::get("dataType").as<MLOperandDataType>();
}

void MLOperandDescriptor::dataType(const MLOperandDataType& value) {
    emlite::Val::set("dataType", value);
}

jsbind::Sequence<unsigned long> MLOperandDescriptor::shape() const {
    return emlite::Val::get("shape").as<jsbind::Sequence<unsigned long>>();
}

void MLOperandDescriptor::shape(jsbind::Sequence<unsigned long> value) {
    emlite::Val::set("shape", value);
}

MLOpSupportLimits::MLOpSupportLimits(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
MLOpSupportLimits MLOpSupportLimits::take_ownership(Handle h) noexcept {
        return MLOpSupportLimits(h);
    }
MLOpSupportLimits::MLOpSupportLimits(const emlite::Val &val) noexcept: emlite::Val(val) {}
MLOpSupportLimits::MLOpSupportLimits() noexcept: emlite::Val(emlite::Val::object()) {}
MLOpSupportLimits MLOpSupportLimits::clone() const noexcept { return *this; }

jsbind::Any MLOpSupportLimits::where() const {
    return emlite::Val::get("where").as<jsbind::Any>();
}

void MLOpSupportLimits::where(const jsbind::Any& value) {
    emlite::Val::set("where", value);
}

MLContextLostInfo::MLContextLostInfo(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
MLContextLostInfo MLContextLostInfo::take_ownership(Handle h) noexcept {
        return MLContextLostInfo(h);
    }
MLContextLostInfo::MLContextLostInfo(const emlite::Val &val) noexcept: emlite::Val(val) {}
MLContextLostInfo::MLContextLostInfo() noexcept: emlite::Val(emlite::Val::object()) {}
MLContextLostInfo MLContextLostInfo::clone() const noexcept { return *this; }

jsbind::DOMString MLContextLostInfo::message() const {
    return emlite::Val::get("message").as<jsbind::DOMString>();
}

void MLContextLostInfo::message(const jsbind::DOMString& value) {
    emlite::Val::set("message", value);
}

MLContext MLContext::take_ownership(Handle h) noexcept {
        return MLContext(h);
    }
MLContext MLContext::clone() const noexcept { return *this; }
MLContext::MLContext(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
MLContext::MLContext(const emlite::Val &val) noexcept: emlite::Val(val) {}


jsbind::Undefined MLContext::dispatch(const MLGraph& graph, const jsbind::Any& inputs, const jsbind::Any& outputs) {
    return emlite::Val::call("dispatch", graph, inputs, outputs).as<jsbind::Undefined>();
}

jsbind::Promise<MLTensor> MLContext::createTensor(const MLTensorDescriptor& descriptor) {
    return emlite::Val::call("createTensor", descriptor).as<jsbind::Promise<MLTensor>>();
}

jsbind::Promise<MLTensor> MLContext::createConstantTensor(const MLOperandDescriptor& descriptor, const jsbind::Any& inputData) {
    return emlite::Val::call("createConstantTensor", descriptor, inputData).as<jsbind::Promise<MLTensor>>();
}

jsbind::Promise<jsbind::Undefined> MLContext::readTensor(const MLTensor& tensor, const jsbind::Any& outputData) {
    return emlite::Val::call("readTensor", tensor, outputData).as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Undefined MLContext::writeTensor(const MLTensor& tensor, const jsbind::Any& inputData) {
    return emlite::Val::call("writeTensor", tensor, inputData).as<jsbind::Undefined>();
}

MLOpSupportLimits MLContext::opSupportLimits() {
    return emlite::Val::call("opSupportLimits").as<MLOpSupportLimits>();
}

jsbind::Undefined MLContext::destroy() {
    return emlite::Val::call("destroy").as<jsbind::Undefined>();
}

jsbind::Promise<MLContextLostInfo> MLContext::lost() const {
    return emlite::Val::get("lost").as<jsbind::Promise<MLContextLostInfo>>();
}

