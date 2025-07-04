#include <webbind/Sanitizer.hpp>


SanitizerConfig::SanitizerConfig(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
SanitizerConfig SanitizerConfig::take_ownership(Handle h) noexcept {
        return SanitizerConfig(h);
    }
SanitizerConfig::SanitizerConfig(const emlite::Val &val) noexcept: emlite::Val(val) {}
SanitizerConfig::SanitizerConfig() noexcept: emlite::Val(emlite::Val::object()) {}
SanitizerConfig SanitizerConfig::clone() const noexcept { return *this; }

jsbind::Sequence<jsbind::Any> SanitizerConfig::elements() const {
    return emlite::Val::get("elements").as<jsbind::Sequence<jsbind::Any>>();
}

void SanitizerConfig::elements(const jsbind::Sequence<jsbind::Any>& value) {
    emlite::Val::set("elements", value);
}

jsbind::Sequence<jsbind::Any> SanitizerConfig::removeElements() const {
    return emlite::Val::get("removeElements").as<jsbind::Sequence<jsbind::Any>>();
}

void SanitizerConfig::removeElements(const jsbind::Sequence<jsbind::Any>& value) {
    emlite::Val::set("removeElements", value);
}

jsbind::Sequence<jsbind::Any> SanitizerConfig::replaceWithChildrenElements() const {
    return emlite::Val::get("replaceWithChildrenElements").as<jsbind::Sequence<jsbind::Any>>();
}

void SanitizerConfig::replaceWithChildrenElements(const jsbind::Sequence<jsbind::Any>& value) {
    emlite::Val::set("replaceWithChildrenElements", value);
}

jsbind::Sequence<jsbind::Any> SanitizerConfig::attributes() const {
    return emlite::Val::get("attributes").as<jsbind::Sequence<jsbind::Any>>();
}

void SanitizerConfig::attributes(const jsbind::Sequence<jsbind::Any>& value) {
    emlite::Val::set("attributes", value);
}

jsbind::Sequence<jsbind::Any> SanitizerConfig::removeAttributes() const {
    return emlite::Val::get("removeAttributes").as<jsbind::Sequence<jsbind::Any>>();
}

void SanitizerConfig::removeAttributes(const jsbind::Sequence<jsbind::Any>& value) {
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

Sanitizer Sanitizer::take_ownership(Handle h) noexcept {
        return Sanitizer(h);
    }
Sanitizer Sanitizer::clone() const noexcept { return *this; }
Sanitizer::Sanitizer(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
Sanitizer::Sanitizer(const emlite::Val &val) noexcept: emlite::Val(val) {}


Sanitizer::Sanitizer(const jsbind::Any& configuration): emlite::Val(emlite::Val::global("Sanitizer").new_(configuration)) {}

SanitizerConfig Sanitizer::get() {
    return emlite::Val::call("get").as<SanitizerConfig>();
}

jsbind::Undefined Sanitizer::allowElement(const jsbind::Any& element) {
    return emlite::Val::call("allowElement", element).as<jsbind::Undefined>();
}

jsbind::Undefined Sanitizer::removeElement(const jsbind::Any& element) {
    return emlite::Val::call("removeElement", element).as<jsbind::Undefined>();
}

jsbind::Undefined Sanitizer::replaceElementWithChildren(const jsbind::Any& element) {
    return emlite::Val::call("replaceElementWithChildren", element).as<jsbind::Undefined>();
}

jsbind::Undefined Sanitizer::allowAttribute(const jsbind::Any& attribute) {
    return emlite::Val::call("allowAttribute", attribute).as<jsbind::Undefined>();
}

jsbind::Undefined Sanitizer::removeAttribute(const jsbind::Any& attribute) {
    return emlite::Val::call("removeAttribute", attribute).as<jsbind::Undefined>();
}

jsbind::Undefined Sanitizer::setComments(bool allow) {
    return emlite::Val::call("setComments", allow).as<jsbind::Undefined>();
}

jsbind::Undefined Sanitizer::setDataAttributes(bool allow) {
    return emlite::Val::call("setDataAttributes", allow).as<jsbind::Undefined>();
}

jsbind::Undefined Sanitizer::removeUnsafe() {
    return emlite::Val::call("removeUnsafe").as<jsbind::Undefined>();
}

