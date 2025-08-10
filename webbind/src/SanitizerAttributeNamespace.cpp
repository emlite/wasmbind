#include <webbind/SanitizerAttributeNamespace.hpp>

namespace webbind {

SanitizerAttributeNamespace::SanitizerAttributeNamespace(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
SanitizerAttributeNamespace SanitizerAttributeNamespace::take_ownership(Handle h) noexcept {
    return SanitizerAttributeNamespace(h);
}

SanitizerAttributeNamespace::SanitizerAttributeNamespace(const emlite::Val &val) noexcept: emlite::Val(val) {}

SanitizerAttributeNamespace::SanitizerAttributeNamespace() noexcept: emlite::Val(emlite::Val::object()) {}

SanitizerAttributeNamespace SanitizerAttributeNamespace::clone() const noexcept { return *this; }

jsbind::String SanitizerAttributeNamespace::name() const {
    return emlite::Val::get("name").as<jsbind::String>();
}

void SanitizerAttributeNamespace::name(const jsbind::String& value) {
    emlite::Val::set("name", value);
}

jsbind::String SanitizerAttributeNamespace::namespace_() const {
    return emlite::Val::get("namespace").as<jsbind::String>();
}

void SanitizerAttributeNamespace::namespace_(const jsbind::String& value) {
    emlite::Val::set("namespace", value);
}


} // namespace webbind