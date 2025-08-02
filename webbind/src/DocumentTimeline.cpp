#include <webbind/DocumentTimeline.hpp>


DocumentTimeline DocumentTimeline::take_ownership(Handle h) noexcept {
        return DocumentTimeline(h);
    }
DocumentTimeline DocumentTimeline::clone() const noexcept { return *this; }
emlite::Val DocumentTimeline::instance() noexcept { return emlite::Val::global("DocumentTimeline"); }
DocumentTimeline::DocumentTimeline(Handle h) noexcept : AnimationTimeline(emlite::Val::take_ownership(h)) {}
DocumentTimeline::DocumentTimeline(const emlite::Val &val) noexcept: AnimationTimeline(val) {}


DocumentTimeline::DocumentTimeline() : AnimationTimeline(emlite::Val::global("DocumentTimeline").new_()) {}

DocumentTimeline::DocumentTimeline(const jsbind::Any& options) : AnimationTimeline(emlite::Val::global("DocumentTimeline").new_(options)) {}

