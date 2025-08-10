#include <webbind/ErrorEvent.hpp>
#include <webbind/ErrorEventInit.hpp>

namespace webbind {

ErrorEvent ErrorEvent::take_ownership(Handle h) noexcept {
    return ErrorEvent(h);
}

ErrorEvent ErrorEvent::clone() const noexcept { return *this; }

emlite::Val ErrorEvent::instance() noexcept { return emlite::Val::global("ErrorEvent"); }

ErrorEvent::ErrorEvent(Handle h) noexcept : Event(emlite::Val::take_ownership(h)) {}

ErrorEvent::ErrorEvent(const emlite::Val &val) noexcept: Event(val) {}

ErrorEvent::ErrorEvent(const jsbind::String& type) : Event(emlite::Val::global("ErrorEvent").new_(type)) {}

ErrorEvent::ErrorEvent(const jsbind::String& type, const ErrorEventInit& eventInitDict) : Event(emlite::Val::global("ErrorEvent").new_(type, eventInitDict)) {}

jsbind::String ErrorEvent::message() const {
    return Event::get("message").as<jsbind::String>();
}

jsbind::String ErrorEvent::filename() const {
    return Event::get("filename").as<jsbind::String>();
}

unsigned long ErrorEvent::lineno() const {
    return Event::get("lineno").as<unsigned long>();
}

unsigned long ErrorEvent::colno() const {
    return Event::get("colno").as<unsigned long>();
}

jsbind::Any ErrorEvent::error() const {
    return Event::get("error").as<jsbind::Any>();
}


} // namespace webbind