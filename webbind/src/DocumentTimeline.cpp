#include <webbind/DocumentTimeline.hpp>
#include <webbind/DocumentTimelineOptions.hpp>

namespace webbind {

DocumentTimeline DocumentTimeline::take_ownership(Handle h) noexcept {
    return DocumentTimeline(h);
}

DocumentTimeline DocumentTimeline::clone() const noexcept { return *this; }

emlite::Val DocumentTimeline::instance() noexcept { return emlite::Val::global("DocumentTimeline"); }

DocumentTimeline::DocumentTimeline(Handle h) noexcept : AnimationTimeline(emlite::Val::take_ownership(h)) {}

DocumentTimeline::DocumentTimeline(const emlite::Val &val) noexcept: AnimationTimeline(val) {}

DocumentTimeline::DocumentTimeline() : AnimationTimeline(emlite::Val::global("DocumentTimeline").new_()) {}

DocumentTimeline::DocumentTimeline(const DocumentTimelineOptions& options) : AnimationTimeline(emlite::Val::global("DocumentTimeline").new_(options)) {}


} // namespace webbind