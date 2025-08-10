#include "webbind/GPUBindGroupEntry.hpp"

using emlite::Val;
namespace webbind {

GPUBindGroupEntry::GPUBindGroupEntry(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
GPUBindGroupEntry GPUBindGroupEntry::take_ownership(Handle h) noexcept {
        return GPUBindGroupEntry(h);
    }
GPUBindGroupEntry::GPUBindGroupEntry(const emlite::Val &val) noexcept: emlite::Val(val) {}
GPUBindGroupEntry::GPUBindGroupEntry() noexcept: emlite::Val(emlite::Val::object()) {}
GPUBindGroupEntry GPUBindGroupEntry::clone() const noexcept { return *this; }

jsbind::Any GPUBindGroupEntry::binding() const {
    return emlite::Val::get("binding").as<jsbind::Any>();
}

void GPUBindGroupEntry::binding(const jsbind::Any& value) {
    emlite::Val::set("binding", value);
}

jsbind::Any GPUBindGroupEntry::resource() const {
    return emlite::Val::get("resource").as<jsbind::Any>();
}

void GPUBindGroupEntry::resource(const jsbind::Any& value) {
    emlite::Val::set("resource", value);
}


} // namespace webbind