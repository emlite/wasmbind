#include <webbind/DataCue.hpp>

namespace webbind {

DataCue DataCue::take_ownership(Handle h) noexcept {
        return DataCue(h);
    }
DataCue DataCue::clone() const noexcept { return *this; }
emlite::Val DataCue::instance() noexcept { return emlite::Val::global("DataCue"); }
DataCue::DataCue(Handle h) noexcept : TextTrackCue(emlite::Val::take_ownership(h)) {}
DataCue::DataCue(const emlite::Val &val) noexcept: TextTrackCue(val) {}

DataCue::DataCue(double startTime, double endTime, const jsbind::Any& value) : TextTrackCue(emlite::Val::global("DataCue").new_(startTime, endTime, value)) {}

DataCue::DataCue(double startTime, double endTime, const jsbind::Any& value, const jsbind::String& type) : TextTrackCue(emlite::Val::global("DataCue").new_(startTime, endTime, value, type)) {}

jsbind::Any DataCue::value() const {
    return TextTrackCue::get("value").as<jsbind::Any>();
}

void DataCue::value(const jsbind::Any& value) {
    TextTrackCue::set("value", value);
}

jsbind::String DataCue::type() const {
    return TextTrackCue::get("type").as<jsbind::String>();
}


} // namespace webbind