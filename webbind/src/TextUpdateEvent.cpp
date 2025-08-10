#include "webbind/TextUpdateEvent.hpp"
#include "webbind/TextUpdateEventInit.hpp"

namespace webbind {

TextUpdateEvent TextUpdateEvent::take_ownership(Handle h) noexcept {
        return TextUpdateEvent(h);
    }
TextUpdateEvent TextUpdateEvent::clone() const noexcept { return *this; }
emlite::Val TextUpdateEvent::instance() noexcept { return emlite::Val::global("TextUpdateEvent"); }
TextUpdateEvent::TextUpdateEvent(Handle h) noexcept : Event(emlite::Val::take_ownership(h)) {}
TextUpdateEvent::TextUpdateEvent(const emlite::Val &val) noexcept: Event(val) {}

TextUpdateEvent::TextUpdateEvent(const jsbind::String& type) : Event(emlite::Val::global("TextUpdateEvent").new_(type)) {}

TextUpdateEvent::TextUpdateEvent(const jsbind::String& type, const TextUpdateEventInit& options) : Event(emlite::Val::global("TextUpdateEvent").new_(type, options)) {}

unsigned long TextUpdateEvent::updateRangeStart() const {
    return Event::get("updateRangeStart").as<unsigned long>();
}

unsigned long TextUpdateEvent::updateRangeEnd() const {
    return Event::get("updateRangeEnd").as<unsigned long>();
}

jsbind::String TextUpdateEvent::text() const {
    return Event::get("text").as<jsbind::String>();
}

unsigned long TextUpdateEvent::selectionStart() const {
    return Event::get("selectionStart").as<unsigned long>();
}

unsigned long TextUpdateEvent::selectionEnd() const {
    return Event::get("selectionEnd").as<unsigned long>();
}


} // namespace webbind