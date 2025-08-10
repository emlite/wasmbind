#include <webbind/SubmitEvent.hpp>
#include <webbind/SubmitEventInit.hpp>
#include <webbind/HTMLElement.hpp>

namespace webbind {

SubmitEvent SubmitEvent::take_ownership(Handle h) noexcept {
        return SubmitEvent(h);
    }
SubmitEvent SubmitEvent::clone() const noexcept { return *this; }
emlite::Val SubmitEvent::instance() noexcept { return emlite::Val::global("SubmitEvent"); }
SubmitEvent::SubmitEvent(Handle h) noexcept : Event(emlite::Val::take_ownership(h)) {}
SubmitEvent::SubmitEvent(const emlite::Val &val) noexcept: Event(val) {}

SubmitEvent::SubmitEvent(const jsbind::String& type) : Event(emlite::Val::global("SubmitEvent").new_(type)) {}

SubmitEvent::SubmitEvent(const jsbind::String& type, const SubmitEventInit& eventInitDict) : Event(emlite::Val::global("SubmitEvent").new_(type, eventInitDict)) {}

HTMLElement SubmitEvent::submitter() const {
    return Event::get("submitter").as<HTMLElement>();
}


} // namespace webbind