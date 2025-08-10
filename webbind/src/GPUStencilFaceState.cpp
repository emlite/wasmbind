#include "webbind/GPUStencilFaceState.hpp"

using emlite::Val;
namespace webbind {

GPUStencilFaceState::GPUStencilFaceState(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
GPUStencilFaceState GPUStencilFaceState::take_ownership(Handle h) noexcept {
        return GPUStencilFaceState(h);
    }
GPUStencilFaceState::GPUStencilFaceState(const emlite::Val &val) noexcept: emlite::Val(val) {}
GPUStencilFaceState::GPUStencilFaceState() noexcept: emlite::Val(emlite::Val::object()) {}
GPUStencilFaceState GPUStencilFaceState::clone() const noexcept { return *this; }

GPUCompareFunction GPUStencilFaceState::compare() const {
    return emlite::Val::get("compare").as<GPUCompareFunction>();
}

void GPUStencilFaceState::compare(const GPUCompareFunction& value) {
    emlite::Val::set("compare", value);
}

GPUStencilOperation GPUStencilFaceState::failOp() const {
    return emlite::Val::get("failOp").as<GPUStencilOperation>();
}

void GPUStencilFaceState::failOp(const GPUStencilOperation& value) {
    emlite::Val::set("failOp", value);
}

GPUStencilOperation GPUStencilFaceState::depthFailOp() const {
    return emlite::Val::get("depthFailOp").as<GPUStencilOperation>();
}

void GPUStencilFaceState::depthFailOp(const GPUStencilOperation& value) {
    emlite::Val::set("depthFailOp", value);
}

GPUStencilOperation GPUStencilFaceState::passOp() const {
    return emlite::Val::get("passOp").as<GPUStencilOperation>();
}

void GPUStencilFaceState::passOp(const GPUStencilOperation& value) {
    emlite::Val::set("passOp", value);
}


} // namespace webbind