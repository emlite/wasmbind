#include <webbind/GPUCompilationInfo.hpp>
#include <webbind/GPUCompilationMessage.hpp>


GPUCompilationInfo GPUCompilationInfo::take_ownership(Handle h) noexcept {
        return GPUCompilationInfo(h);
    }
GPUCompilationInfo GPUCompilationInfo::clone() const noexcept { return *this; }
GPUCompilationInfo::GPUCompilationInfo(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
GPUCompilationInfo::GPUCompilationInfo(const emlite::Val &val) noexcept: emlite::Val(val) {}


jsbind::FrozenArray<GPUCompilationMessage> GPUCompilationInfo::messages() const {
    return emlite::Val::get("messages").as<jsbind::FrozenArray<GPUCompilationMessage>>();
}

