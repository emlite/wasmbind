#include <webbind/CaptureActionEvent.hpp>
#include <webbind/CaptureActionEventInit.hpp>

namespace webbind {

CaptureActionEvent CaptureActionEvent::take_ownership(Handle h) noexcept {
    return CaptureActionEvent(h);
}

CaptureActionEvent CaptureActionEvent::clone() const noexcept { return *this; }

emlite::Val CaptureActionEvent::instance() noexcept { return emlite::Val::global("CaptureActionEvent"); }

CaptureActionEvent::CaptureActionEvent(Handle h) noexcept : Event(emlite::Val::take_ownership(h)) {}

CaptureActionEvent::CaptureActionEvent(const emlite::Val &val) noexcept: Event(val) {}

CaptureActionEvent::CaptureActionEvent() : Event(emlite::Val::global("CaptureActionEvent").new_()) {}

CaptureActionEvent::CaptureActionEvent(const CaptureActionEventInit& init) : Event(emlite::Val::global("CaptureActionEvent").new_(init)) {}

CaptureAction CaptureActionEvent::action() const {
    return Event::get("action").as<CaptureAction>();
}


} // namespace webbind