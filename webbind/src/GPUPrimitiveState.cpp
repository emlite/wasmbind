#include "webbind/GPUPrimitiveState.hpp"

using emlite::Val;
namespace webbind {

GPUPrimitiveState::GPUPrimitiveState(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
GPUPrimitiveState GPUPrimitiveState::take_ownership(Handle h) noexcept {
        return GPUPrimitiveState(h);
    }
GPUPrimitiveState::GPUPrimitiveState(const emlite::Val &val) noexcept: emlite::Val(val) {}
GPUPrimitiveState::GPUPrimitiveState() noexcept: emlite::Val(emlite::Val::object()) {}
GPUPrimitiveState GPUPrimitiveState::clone() const noexcept { return *this; }

GPUPrimitiveTopology GPUPrimitiveState::topology() const {
    return emlite::Val::get("topology").as<GPUPrimitiveTopology>();
}

void GPUPrimitiveState::topology(const GPUPrimitiveTopology& value) {
    emlite::Val::set("topology", value);
}

GPUIndexFormat GPUPrimitiveState::stripIndexFormat() const {
    return emlite::Val::get("stripIndexFormat").as<GPUIndexFormat>();
}

void GPUPrimitiveState::stripIndexFormat(const GPUIndexFormat& value) {
    emlite::Val::set("stripIndexFormat", value);
}

GPUFrontFace GPUPrimitiveState::frontFace() const {
    return emlite::Val::get("frontFace").as<GPUFrontFace>();
}

void GPUPrimitiveState::frontFace(const GPUFrontFace& value) {
    emlite::Val::set("frontFace", value);
}

GPUCullMode GPUPrimitiveState::cullMode() const {
    return emlite::Val::get("cullMode").as<GPUCullMode>();
}

void GPUPrimitiveState::cullMode(const GPUCullMode& value) {
    emlite::Val::set("cullMode", value);
}

bool GPUPrimitiveState::unclippedDepth() const {
    return emlite::Val::get("unclippedDepth").as<bool>();
}

void GPUPrimitiveState::unclippedDepth(bool value) {
    emlite::Val::set("unclippedDepth", value);
}


} // namespace webbind