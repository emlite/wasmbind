#include <webbind/ScrollTimeline.hpp>
#include <webbind/ScrollTimelineOptions.hpp>
#include <webbind/Element.hpp>

namespace webbind {

ScrollTimeline ScrollTimeline::take_ownership(Handle h) noexcept {
    return ScrollTimeline(h);
}

ScrollTimeline ScrollTimeline::clone() const noexcept { return *this; }

emlite::Val ScrollTimeline::instance() noexcept { return emlite::Val::global("ScrollTimeline"); }

ScrollTimeline::ScrollTimeline(Handle h) noexcept : AnimationTimeline(emlite::Val::take_ownership(h)) {}

ScrollTimeline::ScrollTimeline(const emlite::Val &val) noexcept: AnimationTimeline(val) {}

ScrollTimeline::ScrollTimeline() : AnimationTimeline(emlite::Val::global("ScrollTimeline").new_()) {}

ScrollTimeline::ScrollTimeline(const ScrollTimelineOptions& options) : AnimationTimeline(emlite::Val::global("ScrollTimeline").new_(options)) {}

Element ScrollTimeline::source() const {
    return AnimationTimeline::get("source").as<Element>();
}

ScrollAxis ScrollTimeline::axis() const {
    return AnimationTimeline::get("axis").as<ScrollAxis>();
}


} // namespace webbind