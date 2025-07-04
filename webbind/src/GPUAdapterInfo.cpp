#include <webbind/GPUAdapterInfo.hpp>


GPUAdapterInfo GPUAdapterInfo::take_ownership(Handle h) noexcept {
        return GPUAdapterInfo(h);
    }
GPUAdapterInfo GPUAdapterInfo::clone() const noexcept { return *this; }
GPUAdapterInfo::GPUAdapterInfo(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
GPUAdapterInfo::GPUAdapterInfo(const emlite::Val &val) noexcept: emlite::Val(val) {}


jsbind::DOMString GPUAdapterInfo::vendor() const {
    return emlite::Val::get("vendor").as<jsbind::DOMString>();
}

jsbind::DOMString GPUAdapterInfo::architecture() const {
    return emlite::Val::get("architecture").as<jsbind::DOMString>();
}

jsbind::DOMString GPUAdapterInfo::device() const {
    return emlite::Val::get("device").as<jsbind::DOMString>();
}

jsbind::DOMString GPUAdapterInfo::description() const {
    return emlite::Val::get("description").as<jsbind::DOMString>();
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

