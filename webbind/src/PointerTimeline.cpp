#include <webbind/PointerTimeline.hpp>
#include <webbind/PointerTimelineOptions.hpp>
#include <webbind/Element.hpp>

namespace webbind {

PointerTimeline PointerTimeline::take_ownership(Handle h) noexcept {
        return PointerTimeline(h);
    }
PointerTimeline PointerTimeline::clone() const noexcept { return *this; }
emlite::Val PointerTimeline::instance() noexcept { return emlite::Val::global("PointerTimeline"); }
PointerTimeline::PointerTimeline(Handle h) noexcept : AnimationTimeline(emlite::Val::take_ownership(h)) {}
PointerTimeline::PointerTimeline(const emlite::Val &val) noexcept: AnimationTimeline(val) {}

PointerTimeline::PointerTimeline() : AnimationTimeline(emlite::Val::global("PointerTimeline").new_()) {}

PointerTimeline::PointerTimeline(const PointerTimelineOptions& options) : AnimationTimeline(emlite::Val::global("PointerTimeline").new_(options)) {}

Element PointerTimeline::source() const {
    return AnimationTimeline::get("source").as<Element>();
}

PointerAxis PointerTimeline::axis() const {
    return AnimationTimeline::get("axis").as<PointerAxis>();
}


} // namespace webbind