#include <webbind/InkTrailStyle.hpp>

namespace webbind {

InkTrailStyle::InkTrailStyle(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
InkTrailStyle InkTrailStyle::take_ownership(Handle h) noexcept {
    return InkTrailStyle(h);
}

InkTrailStyle::InkTrailStyle(const emlite::Val &val) noexcept: emlite::Val(val) {}

InkTrailStyle::InkTrailStyle() noexcept: emlite::Val(emlite::Val::object()) {}

InkTrailStyle InkTrailStyle::clone() const noexcept { return *this; }

jsbind::String InkTrailStyle::color() const {
    return emlite::Val::get("color").as<jsbind::String>();
}

void InkTrailStyle::color(const jsbind::String& value) {
    emlite::Val::set("color", value);
}

double InkTrailStyle::diameter() const {
    return emlite::Val::get("diameter").as<double>();
}

void InkTrailStyle::diameter(double value) {
    emlite::Val::set("diameter", value);
}


} // namespace webbind