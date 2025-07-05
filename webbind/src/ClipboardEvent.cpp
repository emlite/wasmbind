#include <webbind/ClipboardEvent.hpp>
#include <webbind/DataTransfer.hpp>


ClipboardEvent ClipboardEvent::take_ownership(Handle h) noexcept {
        return ClipboardEvent(h);
    }
ClipboardEvent ClipboardEvent::clone() const noexcept { return *this; }
ClipboardEvent::ClipboardEvent(Handle h) noexcept : Event(emlite::Val::take_ownership(h)) {}
ClipboardEvent::ClipboardEvent(const emlite::Val &val) noexcept: Event(val) {}


ClipboardEvent::ClipboardEvent(const jsbind::DOMString& type) : Event(emlite::Val::global("ClipboardEvent").new_(type)) {}

ClipboardEvent::ClipboardEvent(const jsbind::DOMString& type, const jsbind::Any& eventInitDict) : Event(emlite::Val::global("ClipboardEvent").new_(type, eventInitDict)) {}

DataTransfer ClipboardEvent::clipboardData() const {
    return Event::get("clipboardData").as<DataTransfer>();
}

