#include <webbind/GPUDepthStencilState.hpp>
#include <webbind/GPUStencilFaceState.hpp>

using emlite::Val;
namespace webbind {

GPUDepthStencilState::GPUDepthStencilState(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
GPUDepthStencilState GPUDepthStencilState::take_ownership(Handle h) noexcept {
        return GPUDepthStencilState(h);
    }
GPUDepthStencilState::GPUDepthStencilState(const emlite::Val &val) noexcept: emlite::Val(val) {}
GPUDepthStencilState::GPUDepthStencilState() noexcept: emlite::Val(emlite::Val::object()) {}
GPUDepthStencilState GPUDepthStencilState::clone() const noexcept { return *this; }

GPUTextureFormat GPUDepthStencilState::format() const {
    return emlite::Val::get("format").as<GPUTextureFormat>();
}

void GPUDepthStencilState::format(const GPUTextureFormat& value) {
    emlite::Val::set("format", value);
}

bool GPUDepthStencilState::depthWriteEnabled() const {
    return emlite::Val::get("depthWriteEnabled").as<bool>();
}

void GPUDepthStencilState::depthWriteEnabled(bool value) {
    emlite::Val::set("depthWriteEnabled", value);
}

GPUCompareFunction GPUDepthStencilState::depthCompare() const {
    return emlite::Val::get("depthCompare").as<GPUCompareFunction>();
}

void GPUDepthStencilState::depthCompare(const GPUCompareFunction& value) {
    emlite::Val::set("depthCompare", value);
}

GPUStencilFaceState GPUDepthStencilState::stencilFront() const {
    return emlite::Val::get("stencilFront").as<GPUStencilFaceState>();
}

void GPUDepthStencilState::stencilFront(const GPUStencilFaceState& value) {
    emlite::Val::set("stencilFront", value);
}

GPUStencilFaceState GPUDepthStencilState::stencilBack() const {
    return emlite::Val::get("stencilBack").as<GPUStencilFaceState>();
}

void GPUDepthStencilState::stencilBack(const GPUStencilFaceState& value) {
    emlite::Val::set("stencilBack", value);
}

jsbind::Any GPUDepthStencilState::stencilReadMask() const {
    return emlite::Val::get("stencilReadMask").as<jsbind::Any>();
}

void GPUDepthStencilState::stencilReadMask(const jsbind::Any& value) {
    emlite::Val::set("stencilReadMask", value);
}

jsbind::Any GPUDepthStencilState::stencilWriteMask() const {
    return emlite::Val::get("stencilWriteMask").as<jsbind::Any>();
}

void GPUDepthStencilState::stencilWriteMask(const jsbind::Any& value) {
    emlite::Val::set("stencilWriteMask", value);
}

jsbind::Any GPUDepthStencilState::depthBias() const {
    return emlite::Val::get("depthBias").as<jsbind::Any>();
}

void GPUDepthStencilState::depthBias(const jsbind::Any& value) {
    emlite::Val::set("depthBias", value);
}

float GPUDepthStencilState::depthBiasSlopeScale() const {
    return emlite::Val::get("depthBiasSlopeScale").as<float>();
}

void GPUDepthStencilState::depthBiasSlopeScale(float value) {
    emlite::Val::set("depthBiasSlopeScale", value);
}

float GPUDepthStencilState::depthBiasClamp() const {
    return emlite::Val::get("depthBiasClamp").as<float>();
}

void GPUDepthStencilState::depthBiasClamp(float value) {
    emlite::Val::set("depthBiasClamp", value);
}


} // namespace webbind