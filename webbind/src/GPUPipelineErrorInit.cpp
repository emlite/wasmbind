#include "webbind/GPUPipelineErrorInit.hpp"

using emlite::Val;
namespace webbind {

GPUPipelineErrorInit::GPUPipelineErrorInit(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
GPUPipelineErrorInit GPUPipelineErrorInit::take_ownership(Handle h) noexcept {
        return GPUPipelineErrorInit(h);
    }
GPUPipelineErrorInit::GPUPipelineErrorInit(const emlite::Val &val) noexcept: emlite::Val(val) {}
GPUPipelineErrorInit::GPUPipelineErrorInit() noexcept: emlite::Val(emlite::Val::object()) {}
GPUPipelineErrorInit GPUPipelineErrorInit::clone() const noexcept { return *this; }

GPUPipelineErrorReason GPUPipelineErrorInit::reason() const {
    return emlite::Val::get("reason").as<GPUPipelineErrorReason>();
}

void GPUPipelineErrorInit::reason(const GPUPipelineErrorReason& value) {
    emlite::Val::set("reason", value);
}


} // namespace webbind