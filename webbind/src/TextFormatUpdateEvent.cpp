#include <webbind/TextFormatUpdateEvent.hpp>
#include <webbind/TextFormat.hpp>


TextFormatUpdateEvent TextFormatUpdateEvent::take_ownership(Handle h) noexcept {
        return TextFormatUpdateEvent(h);
    }
TextFormatUpdateEvent TextFormatUpdateEvent::clone() const noexcept { return *this; }
TextFormatUpdateEvent::TextFormatUpdateEvent(Handle h) noexcept : Event(emlite::Val::take_ownership(h)) {}
TextFormatUpdateEvent::TextFormatUpdateEvent(const emlite::Val &val) noexcept: Event(val) {}


TextFormatUpdateEvent::TextFormatUpdateEvent(const jsbind::DOMString& type) : Event(emlite::Val::global("TextFormatUpdateEvent").new_(type)) {}

TextFormatUpdateEvent::TextFormatUpdateEvent(const jsbind::DOMString& type, const jsbind::Any& options) : Event(emlite::Val::global("TextFormatUpdateEvent").new_(type, options)) {}

jsbind::Sequence<TextFormat> TextFormatUpdateEvent::getTextFormats() {
    return Event::call("getTextFormats").as<jsbind::Sequence<TextFormat>>();
}

