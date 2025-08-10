#include <webbind/StereoPannerNode.hpp>
#include <webbind/BaseAudioContext.hpp>
#include <webbind/StereoPannerOptions.hpp>
#include <webbind/AudioParam.hpp>

namespace webbind {

StereoPannerNode StereoPannerNode::take_ownership(Handle h) noexcept {
    return StereoPannerNode(h);
}

StereoPannerNode StereoPannerNode::clone() const noexcept { return *this; }

emlite::Val StereoPannerNode::instance() noexcept { return emlite::Val::global("StereoPannerNode"); }

StereoPannerNode::StereoPannerNode(Handle h) noexcept : AudioNode(emlite::Val::take_ownership(h)) {}

StereoPannerNode::StereoPannerNode(const emlite::Val &val) noexcept: AudioNode(val) {}

StereoPannerNode::StereoPannerNode(const BaseAudioContext& context) : AudioNode(emlite::Val::global("StereoPannerNode").new_(context)) {}

StereoPannerNode::StereoPannerNode(const BaseAudioContext& context, const StereoPannerOptions& options) : AudioNode(emlite::Val::global("StereoPannerNode").new_(context, options)) {}

AudioParam StereoPannerNode::pan() const {
    return AudioNode::get("pan").as<AudioParam>();
}


} // namespace webbind