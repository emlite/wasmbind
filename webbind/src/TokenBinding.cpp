#include <webbind/TokenBinding.hpp>

namespace webbind {

TokenBinding::TokenBinding(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
TokenBinding TokenBinding::take_ownership(Handle h) noexcept {
    return TokenBinding(h);
}

TokenBinding::TokenBinding(const emlite::Val &val) noexcept: emlite::Val(val) {}

TokenBinding::TokenBinding() noexcept: emlite::Val(emlite::Val::object()) {}

TokenBinding TokenBinding::clone() const noexcept { return *this; }

jsbind::String TokenBinding::status() const {
    return emlite::Val::get("status").as<jsbind::String>();
}

void TokenBinding::status(const jsbind::String& value) {
    emlite::Val::set("status", value);
}

jsbind::String TokenBinding::id() const {
    return emlite::Val::get("id").as<jsbind::String>();
}

void TokenBinding::id(const jsbind::String& value) {
    emlite::Val::set("id", value);
}


} // namespace webbind