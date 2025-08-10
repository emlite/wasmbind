#include "webbind/SanitizerElementNamespace.hpp"

using emlite::Val;
namespace webbind {

SanitizerElementNamespace::SanitizerElementNamespace(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
SanitizerElementNamespace SanitizerElementNamespace::take_ownership(Handle h) noexcept {
        return SanitizerElementNamespace(h);
    }
SanitizerElementNamespace::SanitizerElementNamespace(const emlite::Val &val) noexcept: emlite::Val(val) {}
SanitizerElementNamespace::SanitizerElementNamespace() noexcept: emlite::Val(emlite::Val::object()) {}
SanitizerElementNamespace SanitizerElementNamespace::clone() const noexcept { return *this; }

jsbind::String SanitizerElementNamespace::name() const {
    return emlite::Val::get("name").as<jsbind::String>();
}

void SanitizerElementNamespace::name(const jsbind::String& value) {
    emlite::Val::set("name", value);
}

jsbind::String SanitizerElementNamespace::namespace_() const {
    return emlite::Val::get("namespace").as<jsbind::String>();
}

void SanitizerElementNamespace::namespace_(const jsbind::String& value) {
    emlite::Val::set("namespace", value);
}


} // namespace webbind