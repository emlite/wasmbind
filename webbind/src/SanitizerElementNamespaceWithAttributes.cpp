#include <webbind/SanitizerElementNamespaceWithAttributes.hpp>

using emlite::Val;
namespace webbind {

SanitizerElementNamespaceWithAttributes::SanitizerElementNamespaceWithAttributes(Handle h) noexcept : SanitizerElementNamespace(emlite::Val::take_ownership(h)) {}
SanitizerElementNamespaceWithAttributes SanitizerElementNamespaceWithAttributes::take_ownership(Handle h) noexcept {
        return SanitizerElementNamespaceWithAttributes(h);
    }
SanitizerElementNamespaceWithAttributes::SanitizerElementNamespaceWithAttributes(const emlite::Val &val) noexcept: SanitizerElementNamespace(val) {}
SanitizerElementNamespaceWithAttributes::SanitizerElementNamespaceWithAttributes() noexcept: SanitizerElementNamespace(emlite::Val::object()) {}
SanitizerElementNamespaceWithAttributes SanitizerElementNamespaceWithAttributes::clone() const noexcept { return *this; }

jsbind::TypedArray<jsbind::Any> SanitizerElementNamespaceWithAttributes::attributes() const {
    return emlite::Val::get("attributes").as<jsbind::TypedArray<jsbind::Any>>();
}

void SanitizerElementNamespaceWithAttributes::attributes(const jsbind::TypedArray<jsbind::Any>& value) {
    emlite::Val::set("attributes", value);
}

jsbind::TypedArray<jsbind::Any> SanitizerElementNamespaceWithAttributes::removeAttributes() const {
    return emlite::Val::get("removeAttributes").as<jsbind::TypedArray<jsbind::Any>>();
}

void SanitizerElementNamespaceWithAttributes::removeAttributes(const jsbind::TypedArray<jsbind::Any>& value) {
    emlite::Val::set("removeAttributes", value);
}


} // namespace webbind