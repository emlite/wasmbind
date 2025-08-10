#include "webbind/Sanitizer.hpp"
#include "webbind/SanitizerConfig.hpp"

namespace webbind {

Sanitizer Sanitizer::take_ownership(Handle h) noexcept {
        return Sanitizer(h);
    }
Sanitizer Sanitizer::clone() const noexcept { return *this; }
emlite::Val Sanitizer::instance() noexcept { return emlite::Val::global("Sanitizer"); }
Sanitizer::Sanitizer(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
Sanitizer::Sanitizer(const emlite::Val &val) noexcept: emlite::Val(val) {}

Sanitizer::Sanitizer() : emlite::Val(emlite::Val::global("Sanitizer").new_()) {}

Sanitizer::Sanitizer(const jsbind::Any& configuration) : emlite::Val(emlite::Val::global("Sanitizer").new_(configuration)) {}

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


} // namespace webbind