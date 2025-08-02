#include <webbind/ProgressEvent.hpp>


ProgressEvent ProgressEvent::take_ownership(Handle h) noexcept {
        return ProgressEvent(h);
    }
ProgressEvent ProgressEvent::clone() const noexcept { return *this; }
emlite::Val ProgressEvent::instance() noexcept { return emlite::Val::global("ProgressEvent"); }
ProgressEvent::ProgressEvent(Handle h) noexcept : Event(emlite::Val::take_ownership(h)) {}
ProgressEvent::ProgressEvent(const emlite::Val &val) noexcept: Event(val) {}


ProgressEvent::ProgressEvent(const jsbind::String& type) : Event(emlite::Val::global("ProgressEvent").new_(type)) {}

ProgressEvent::ProgressEvent(const jsbind::String& type, const jsbind::Any& eventInitDict) : Event(emlite::Val::global("ProgressEvent").new_(type, eventInitDict)) {}

bool ProgressEvent::lengthComputable() const {
    return Event::get("lengthComputable").as<bool>();
}

double ProgressEvent::loaded() const {
    return Event::get("loaded").as<double>();
}

double ProgressEvent::total() const {
    return Event::get("total").as<double>();
}

