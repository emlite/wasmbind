#include <webbind/SubmitEvent.hpp>
#include <webbind/HTMLElement.hpp>


SubmitEvent SubmitEvent::take_ownership(Handle h) noexcept {
        return SubmitEvent(h);
    }
SubmitEvent SubmitEvent::clone() const noexcept { return *this; }
SubmitEvent::SubmitEvent(Handle h) noexcept : Event(emlite::Val::take_ownership(h)) {}
SubmitEvent::SubmitEvent(const emlite::Val &val) noexcept: Event(val) {}


SubmitEvent::SubmitEvent(const jsbind::DOMString& type) : Event(emlite::Val::global("SubmitEvent").new_(type)) {}

SubmitEvent::SubmitEvent(const jsbind::DOMString& type, const jsbind::Any& eventInitDict) : Event(emlite::Val::global("SubmitEvent").new_(type, eventInitDict)) {}

HTMLElement SubmitEvent::submitter() const {
    return Event::get("submitter").as<HTMLElement>();
}

