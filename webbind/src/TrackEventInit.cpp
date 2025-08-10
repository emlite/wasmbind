#include "webbind/TrackEventInit.hpp"

using emlite::Val;
namespace webbind {

TrackEventInit::TrackEventInit(Handle h) noexcept : EventInit(emlite::Val::take_ownership(h)) {}
TrackEventInit TrackEventInit::take_ownership(Handle h) noexcept {
        return TrackEventInit(h);
    }
TrackEventInit::TrackEventInit(const emlite::Val &val) noexcept: EventInit(val) {}
TrackEventInit::TrackEventInit() noexcept: EventInit(emlite::Val::object()) {}
TrackEventInit TrackEventInit::clone() const noexcept { return *this; }

jsbind::Any TrackEventInit::track() const {
    return emlite::Val::get("track").as<jsbind::Any>();
}

void TrackEventInit::track(const jsbind::Any& value) {
    emlite::Val::set("track", value);
}


} // namespace webbind