#include "webbind/GPUCanvasToneMapping.hpp"

using emlite::Val;
namespace webbind {

GPUCanvasToneMapping::GPUCanvasToneMapping(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
GPUCanvasToneMapping GPUCanvasToneMapping::take_ownership(Handle h) noexcept {
        return GPUCanvasToneMapping(h);
    }
GPUCanvasToneMapping::GPUCanvasToneMapping(const emlite::Val &val) noexcept: emlite::Val(val) {}
GPUCanvasToneMapping::GPUCanvasToneMapping() noexcept: emlite::Val(emlite::Val::object()) {}
GPUCanvasToneMapping GPUCanvasToneMapping::clone() const noexcept { return *this; }

GPUCanvasToneMappingMode GPUCanvasToneMapping::mode() const {
    return emlite::Val::get("mode").as<GPUCanvasToneMappingMode>();
}

void GPUCanvasToneMapping::mode(const GPUCanvasToneMappingMode& value) {
    emlite::Val::set("mode", value);
}


} // namespace webbind