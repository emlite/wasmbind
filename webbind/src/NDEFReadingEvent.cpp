#include <webbind/NDEFReadingEvent.hpp>
#include <webbind/NDEFReadingEventInit.hpp>
#include <webbind/NDEFMessage.hpp>

namespace webbind {

NDEFReadingEvent NDEFReadingEvent::take_ownership(Handle h) noexcept {
        return NDEFReadingEvent(h);
    }
NDEFReadingEvent NDEFReadingEvent::clone() const noexcept { return *this; }
emlite::Val NDEFReadingEvent::instance() noexcept { return emlite::Val::global("NDEFReadingEvent"); }
NDEFReadingEvent::NDEFReadingEvent(Handle h) noexcept : Event(emlite::Val::take_ownership(h)) {}
NDEFReadingEvent::NDEFReadingEvent(const emlite::Val &val) noexcept: Event(val) {}

NDEFReadingEvent::NDEFReadingEvent(const jsbind::String& type, const NDEFReadingEventInit& readingEventInitDict) : Event(emlite::Val::global("NDEFReadingEvent").new_(type, readingEventInitDict)) {}

jsbind::String NDEFReadingEvent::serialNumber() const {
    return Event::get("serialNumber").as<jsbind::String>();
}

NDEFMessage NDEFReadingEvent::message() const {
    return Event::get("message").as<NDEFMessage>();
}


} // namespace webbind