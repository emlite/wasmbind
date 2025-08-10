#include <webbind/ScrollTimelineOptions.hpp>
#include <webbind/Element.hpp>

using emlite::Val;
namespace webbind {

ScrollTimelineOptions::ScrollTimelineOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
ScrollTimelineOptions ScrollTimelineOptions::take_ownership(Handle h) noexcept {
        return ScrollTimelineOptions(h);
    }
ScrollTimelineOptions::ScrollTimelineOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
ScrollTimelineOptions::ScrollTimelineOptions() noexcept: emlite::Val(emlite::Val::object()) {}
ScrollTimelineOptions ScrollTimelineOptions::clone() const noexcept { return *this; }

Element ScrollTimelineOptions::source() const {
    return emlite::Val::get("source").as<Element>();
}

void ScrollTimelineOptions::source(const Element& value) {
    emlite::Val::set("source", value);
}

ScrollAxis ScrollTimelineOptions::axis() const {
    return emlite::Val::get("axis").as<ScrollAxis>();
}

void ScrollTimelineOptions::axis(const ScrollAxis& value) {
    emlite::Val::set("axis", value);
}


} // namespace webbind