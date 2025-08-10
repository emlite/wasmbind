#include <webbind/SanitizerConfig.hpp>

namespace webbind {

SanitizerConfig::SanitizerConfig(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
SanitizerConfig SanitizerConfig::take_ownership(Handle h) noexcept {
    return SanitizerConfig(h);
}

SanitizerConfig::SanitizerConfig(const emlite::Val &val) noexcept: emlite::Val(val) {}

SanitizerConfig::SanitizerConfig() noexcept: emlite::Val(emlite::Val::object()) {}

SanitizerConfig SanitizerConfig::clone() const noexcept { return *this; }

jsbind::TypedArray<jsbind::Any> SanitizerConfig::elements() const {
    return emlite::Val::get("elements").as<jsbind::TypedArray<jsbind::Any>>();
}

void SanitizerConfig::elements(const jsbind::TypedArray<jsbind::Any>& value) {
    emlite::Val::set("elements", value);
}

jsbind::TypedArray<jsbind::Any> SanitizerConfig::removeElements() const {
    return emlite::Val::get("removeElements").as<jsbind::TypedArray<jsbind::Any>>();
}

void SanitizerConfig::removeElements(const jsbind::TypedArray<jsbind::Any>& value) {
    emlite::Val::set("removeElements", value);
}

jsbind::TypedArray<jsbind::Any> SanitizerConfig::replaceWithChildrenElements() const {
    return emlite::Val::get("replaceWithChildrenElements").as<jsbind::TypedArray<jsbind::Any>>();
}

void SanitizerConfig::replaceWithChildrenElements(const jsbind::TypedArray<jsbind::Any>& value) {
    emlite::Val::set("replaceWithChildrenElements", value);
}

jsbind::TypedArray<jsbind::Any> SanitizerConfig::attributes() const {
    return emlite::Val::get("attributes").as<jsbind::TypedArray<jsbind::Any>>();
}

void SanitizerConfig::attributes(const jsbind::TypedArray<jsbind::Any>& value) {
    emlite::Val::set("attributes", value);
}

jsbind::TypedArray<jsbind::Any> SanitizerConfig::removeAttributes() const {
    return emlite::Val::get("removeAttributes").as<jsbind::TypedArray<jsbind::Any>>();
}

void SanitizerConfig::removeAttributes(const jsbind::TypedArray<jsbind::Any>& value) {
    emlite::Val::set("removeAttributes", value);
}

bool SanitizerConfig::comments() const {
    return emlite::Val::get("comments").as<bool>();
}

void SanitizerConfig::comments(bool value) {
    emlite::Val::set("comments", value);
}

bool SanitizerConfig::dataAttributes() const {
    return emlite::Val::get("dataAttributes").as<bool>();
}

void SanitizerConfig::dataAttributes(bool value) {
    emlite::Val::set("dataAttributes", value);
}


} // namespace webbind