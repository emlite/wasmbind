#include <webbind/GPUQuerySet.hpp>

namespace webbind {

GPUQuerySet GPUQuerySet::take_ownership(Handle h) noexcept {
    return GPUQuerySet(h);
}

GPUQuerySet GPUQuerySet::clone() const noexcept { return *this; }

emlite::Val GPUQuerySet::instance() noexcept { return emlite::Val::global("GPUQuerySet"); }

GPUQuerySet::GPUQuerySet(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}

GPUQuerySet::GPUQuerySet(const emlite::Val &val) noexcept: emlite::Val(val) {}

jsbind::Undefined GPUQuerySet::destroy() {
    return emlite::Val::call("destroy").as<jsbind::Undefined>();
}

GPUQueryType GPUQuerySet::type() const {
    return emlite::Val::get("type").as<GPUQueryType>();
}

jsbind::Any GPUQuerySet::count() const {
    return emlite::Val::get("count").as<jsbind::Any>();
}

jsbind::String GPUQuerySet::label() const {
    return emlite::Val::get("label").as<jsbind::String>();
}

void GPUQuerySet::label(const jsbind::String& value) {
    emlite::Val::set("label", value);
}


} // namespace webbind