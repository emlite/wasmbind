#include "webbind/TextFormatUpdateEvent.hpp"
#include "webbind/TextFormatUpdateEventInit.hpp"
#include "webbind/TextFormat.hpp"

namespace webbind {

TextFormatUpdateEvent TextFormatUpdateEvent::take_ownership(Handle h) noexcept {
        return TextFormatUpdateEvent(h);
    }
TextFormatUpdateEvent TextFormatUpdateEvent::clone() const noexcept { return *this; }
emlite::Val TextFormatUpdateEvent::instance() noexcept { return emlite::Val::global("TextFormatUpdateEvent"); }
TextFormatUpdateEvent::TextFormatUpdateEvent(Handle h) noexcept : Event(emlite::Val::take_ownership(h)) {}
TextFormatUpdateEvent::TextFormatUpdateEvent(const emlite::Val &val) noexcept: Event(val) {}

TextFormatUpdateEvent::TextFormatUpdateEvent(const jsbind::String& type) : Event(emlite::Val::global("TextFormatUpdateEvent").new_(type)) {}

TextFormatUpdateEvent::TextFormatUpdateEvent(const jsbind::String& type, const TextFormatUpdateEventInit& options) : Event(emlite::Val::global("TextFormatUpdateEvent").new_(type, options)) {}

jsbind::TypedArray<TextFormat> TextFormatUpdateEvent::getTextFormats() {
    return Event::call("getTextFormats").as<jsbind::TypedArray<TextFormat>>();
}


} // namespace webbind