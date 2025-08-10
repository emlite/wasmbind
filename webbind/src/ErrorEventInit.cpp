#include "webbind/ErrorEventInit.hpp"

using emlite::Val;
namespace webbind {

ErrorEventInit::ErrorEventInit(Handle h) noexcept : EventInit(emlite::Val::take_ownership(h)) {}
ErrorEventInit ErrorEventInit::take_ownership(Handle h) noexcept {
        return ErrorEventInit(h);
    }
ErrorEventInit::ErrorEventInit(const emlite::Val &val) noexcept: EventInit(val) {}
ErrorEventInit::ErrorEventInit() noexcept: EventInit(emlite::Val::object()) {}
ErrorEventInit ErrorEventInit::clone() const noexcept { return *this; }

jsbind::String ErrorEventInit::message() const {
    return emlite::Val::get("message").as<jsbind::String>();
}

void ErrorEventInit::message(const jsbind::String& value) {
    emlite::Val::set("message", value);
}

jsbind::String ErrorEventInit::filename() const {
    return emlite::Val::get("filename").as<jsbind::String>();
}

void ErrorEventInit::filename(const jsbind::String& value) {
    emlite::Val::set("filename", value);
}

unsigned long ErrorEventInit::lineno() const {
    return emlite::Val::get("lineno").as<unsigned long>();
}

void ErrorEventInit::lineno(unsigned long value) {
    emlite::Val::set("lineno", value);
}

unsigned long ErrorEventInit::colno() const {
    return emlite::Val::get("colno").as<unsigned long>();
}

void ErrorEventInit::colno(unsigned long value) {
    emlite::Val::set("colno", value);
}

jsbind::Any ErrorEventInit::error() const {
    return emlite::Val::get("error").as<jsbind::Any>();
}

void ErrorEventInit::error(const jsbind::Any& value) {
    emlite::Val::set("error", value);
}


} // namespace webbind