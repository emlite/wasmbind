#include <webbind/DocumentTimelineOptions.hpp>

using emlite::Val;
namespace webbind {

DocumentTimelineOptions::DocumentTimelineOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
DocumentTimelineOptions DocumentTimelineOptions::take_ownership(Handle h) noexcept {
        return DocumentTimelineOptions(h);
    }
DocumentTimelineOptions::DocumentTimelineOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
DocumentTimelineOptions::DocumentTimelineOptions() noexcept: emlite::Val(emlite::Val::object()) {}
DocumentTimelineOptions DocumentTimelineOptions::clone() const noexcept { return *this; }

jsbind::Any DocumentTimelineOptions::originTime() const {
    return emlite::Val::get("originTime").as<jsbind::Any>();
}

void DocumentTimelineOptions::originTime(const jsbind::Any& value) {
    emlite::Val::set("originTime", value);
}


} // namespace webbind