#include "webbind/DOMException.hpp"

namespace webbind {

DOMException DOMException::take_ownership(Handle h) noexcept {
        return DOMException(h);
    }
DOMException DOMException::clone() const noexcept { return *this; }
emlite::Val DOMException::instance() noexcept { return emlite::Val::global("DOMException"); }
DOMException::DOMException(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
DOMException::DOMException(const emlite::Val &val) noexcept: emlite::Val(val) {}

DOMException::DOMException() : emlite::Val(emlite::Val::global("DOMException").new_()) {}

DOMException::DOMException(const jsbind::String& message) : emlite::Val(emlite::Val::global("DOMException").new_(message)) {}

DOMException::DOMException(const jsbind::String& message, const jsbind::String& name) : emlite::Val(emlite::Val::global("DOMException").new_(message, name)) {}

jsbind::String DOMException::name() const {
    return emlite::Val::get("name").as<jsbind::String>();
}

jsbind::String DOMException::message() const {
    return emlite::Val::get("message").as<jsbind::String>();
}

unsigned short DOMException::code() const {
    return emlite::Val::get("code").as<unsigned short>();
}


} // namespace webbind