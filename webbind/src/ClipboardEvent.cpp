#include "webbind/ClipboardEvent.hpp"
#include "webbind/ClipboardEventInit.hpp"
#include "webbind/DataTransfer.hpp"

namespace webbind {

ClipboardEvent ClipboardEvent::take_ownership(Handle h) noexcept {
        return ClipboardEvent(h);
    }
ClipboardEvent ClipboardEvent::clone() const noexcept { return *this; }
emlite::Val ClipboardEvent::instance() noexcept { return emlite::Val::global("ClipboardEvent"); }
ClipboardEvent::ClipboardEvent(Handle h) noexcept : Event(emlite::Val::take_ownership(h)) {}
ClipboardEvent::ClipboardEvent(const emlite::Val &val) noexcept: Event(val) {}

ClipboardEvent::ClipboardEvent(const jsbind::String& type) : Event(emlite::Val::global("ClipboardEvent").new_(type)) {}

ClipboardEvent::ClipboardEvent(const jsbind::String& type, const ClipboardEventInit& eventInitDict) : Event(emlite::Val::global("ClipboardEvent").new_(type, eventInitDict)) {}

DataTransfer ClipboardEvent::clipboardData() const {
    return Event::get("clipboardData").as<DataTransfer>();
}


} // namespace webbind