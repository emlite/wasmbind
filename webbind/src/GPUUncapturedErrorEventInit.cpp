#include <webbind/GPUUncapturedErrorEventInit.hpp>
#include <webbind/GPUError.hpp>

using emlite::Val;
namespace webbind {

GPUUncapturedErrorEventInit::GPUUncapturedErrorEventInit(Handle h) noexcept : EventInit(emlite::Val::take_ownership(h)) {}
GPUUncapturedErrorEventInit GPUUncapturedErrorEventInit::take_ownership(Handle h) noexcept {
        return GPUUncapturedErrorEventInit(h);
    }
GPUUncapturedErrorEventInit::GPUUncapturedErrorEventInit(const emlite::Val &val) noexcept: EventInit(val) {}
GPUUncapturedErrorEventInit::GPUUncapturedErrorEventInit() noexcept: EventInit(emlite::Val::object()) {}
GPUUncapturedErrorEventInit GPUUncapturedErrorEventInit::clone() const noexcept { return *this; }

GPUError GPUUncapturedErrorEventInit::error() const {
    return emlite::Val::get("error").as<GPUError>();
}

void GPUUncapturedErrorEventInit::error(const GPUError& value) {
    emlite::Val::set("error", value);
}


} // namespace webbind