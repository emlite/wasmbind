#include <webbind/StereoPannerNode.hpp>
#include <webbind/AudioParam.hpp>
#include <webbind/BaseAudioContext.hpp>


StereoPannerNode StereoPannerNode::take_ownership(Handle h) noexcept {
        return StereoPannerNode(h);
    }
StereoPannerNode StereoPannerNode::clone() const noexcept { return *this; }
StereoPannerNode::StereoPannerNode(Handle h) noexcept : AudioNode(emlite::Val::take_ownership(h)) {}
StereoPannerNode::StereoPannerNode(const emlite::Val &val) noexcept: AudioNode(val) {}


StereoPannerNode::StereoPannerNode(const BaseAudioContext& context) : AudioNode(emlite::Val::global("StereoPannerNode").new_(context)) {}

StereoPannerNode::StereoPannerNode(const BaseAudioContext& context, const jsbind::Any& options) : AudioNode(emlite::Val::global("StereoPannerNode").new_(context, options)) {}

AudioParam StereoPannerNode::pan() const {
    return AudioNode::get("pan").as<AudioParam>();
}

