#include <webbind/ViewTimelineOptions.hpp>
#include <webbind/Element.hpp>

namespace webbind {

ViewTimelineOptions::ViewTimelineOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
ViewTimelineOptions ViewTimelineOptions::take_ownership(Handle h) noexcept {
    return ViewTimelineOptions(h);
}

ViewTimelineOptions::ViewTimelineOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}

ViewTimelineOptions::ViewTimelineOptions() noexcept: emlite::Val(emlite::Val::object()) {}

ViewTimelineOptions ViewTimelineOptions::clone() const noexcept { return *this; }

Element ViewTimelineOptions::subject() const {
    return emlite::Val::get("subject").as<Element>();
}

void ViewTimelineOptions::subject(const Element& value) {
    emlite::Val::set("subject", value);
}

ScrollAxis ViewTimelineOptions::axis() const {
    return emlite::Val::get("axis").as<ScrollAxis>();
}

void ViewTimelineOptions::axis(const ScrollAxis& value) {
    emlite::Val::set("axis", value);
}

jsbind::Any ViewTimelineOptions::inset() const {
    return emlite::Val::get("inset").as<jsbind::Any>();
}

void ViewTimelineOptions::inset(const jsbind::Any& value) {
    emlite::Val::set("inset", value);
}


} // namespace webbind