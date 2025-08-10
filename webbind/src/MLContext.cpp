#include <webbind/MLContext.hpp>
#include <webbind/MLGraph.hpp>
#include <webbind/MLTensor.hpp>
#include <webbind/MLTensorDescriptor.hpp>
#include <webbind/MLOperandDescriptor.hpp>
#include <webbind/MLOpSupportLimits.hpp>
#include <webbind/MLContextLostInfo.hpp>

namespace webbind {

MLContext MLContext::take_ownership(Handle h) noexcept {
    return MLContext(h);
}

MLContext MLContext::clone() const noexcept { return *this; }

emlite::Val MLContext::instance() noexcept { return emlite::Val::global("MLContext"); }

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


} // namespace webbind