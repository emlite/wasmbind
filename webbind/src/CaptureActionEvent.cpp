#include <webbind/CaptureActionEvent.hpp>


CaptureActionEvent CaptureActionEvent::take_ownership(Handle h) noexcept {
        return CaptureActionEvent(h);
    }
CaptureActionEvent CaptureActionEvent::clone() const noexcept { return *this; }
CaptureActionEvent::CaptureActionEvent(Handle h) noexcept : Event(emlite::Val::take_ownership(h)) {}
CaptureActionEvent::CaptureActionEvent(const emlite::Val &val) noexcept: Event(val) {}


CaptureActionEvent::CaptureActionEvent(const jsbind::Any& init): Event(emlite::Val::global("CaptureActionEvent").new_(init)) {}

CaptureAction CaptureActionEvent::action() const {
    return Event::get("action").as<CaptureAction>();
}

