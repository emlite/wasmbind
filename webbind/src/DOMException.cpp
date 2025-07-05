#include <webbind/DOMException.hpp>


DOMException DOMException::take_ownership(Handle h) noexcept {
        return DOMException(h);
    }
DOMException DOMException::clone() const noexcept { return *this; }
DOMException::DOMException(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
DOMException::DOMException(const emlite::Val &val) noexcept: emlite::Val(val) {}


DOMException::DOMException() : emlite::Val(emlite::Val::global("DOMException").new_()) {}

DOMException::DOMException(const jsbind::DOMString& message) : emlite::Val(emlite::Val::global("DOMException").new_(message)) {}

DOMException::DOMException(const jsbind::DOMString& message, const jsbind::DOMString& name) : emlite::Val(emlite::Val::global("DOMException").new_(message, name)) {}

jsbind::DOMString DOMException::name() const {
    return emlite::Val::get("name").as<jsbind::DOMString>();
}

jsbind::DOMString DOMException::message() const {
    return emlite::Val::get("message").as<jsbind::DOMString>();
}

unsigned short DOMException::code() const {
    return emlite::Val::get("code").as<unsigned short>();
}

