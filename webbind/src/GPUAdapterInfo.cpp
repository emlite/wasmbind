#include "webbind/GPUAdapterInfo.hpp"

namespace webbind {

GPUAdapterInfo GPUAdapterInfo::take_ownership(Handle h) noexcept {
        return GPUAdapterInfo(h);
    }
GPUAdapterInfo GPUAdapterInfo::clone() const noexcept { return *this; }
emlite::Val GPUAdapterInfo::instance() noexcept { return emlite::Val::global("GPUAdapterInfo"); }
GPUAdapterInfo::GPUAdapterInfo(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
GPUAdapterInfo::GPUAdapterInfo(const emlite::Val &val) noexcept: emlite::Val(val) {}

jsbind::String GPUAdapterInfo::vendor() const {
    return emlite::Val::get("vendor").as<jsbind::String>();
}

jsbind::String GPUAdapterInfo::architecture() const {
    return emlite::Val::get("architecture").as<jsbind::String>();
}

jsbind::String GPUAdapterInfo::device() const {
    return emlite::Val::get("device").as<jsbind::String>();
}

jsbind::String GPUAdapterInfo::description() const {
    return emlite::Val::get("description").as<jsbind::String>();
}

unsigned long GPUAdapterInfo::subgroupMinSize() const {
    return emlite::Val::get("subgroupMinSize").as<unsigned long>();
}

unsigned long GPUAdapterInfo::subgroupMaxSize() const {
    return emlite::Val::get("subgroupMaxSize").as<unsigned long>();
}

bool GPUAdapterInfo::isFallbackAdapter() const {
    return emlite::Val::get("isFallbackAdapter").as<bool>();
}


} // namespace webbind