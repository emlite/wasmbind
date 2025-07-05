#include <webbind/DelayNode.hpp>
#include <webbind/AudioParam.hpp>
#include <webbind/BaseAudioContext.hpp>


DelayNode DelayNode::take_ownership(Handle h) noexcept {
        return DelayNode(h);
    }
DelayNode DelayNode::clone() const noexcept { return *this; }
DelayNode::DelayNode(Handle h) noexcept : AudioNode(emlite::Val::take_ownership(h)) {}
DelayNode::DelayNode(const emlite::Val &val) noexcept: AudioNode(val) {}


DelayNode::DelayNode(const BaseAudioContext& context) : AudioNode(emlite::Val::global("DelayNode").new_(context)) {}

DelayNode::DelayNode(const BaseAudioContext& context, const jsbind::Any& options) : AudioNode(emlite::Val::global("DelayNode").new_(context, options)) {}

AudioParam DelayNode::delayTime() const {
    return AudioNode::get("delayTime").as<AudioParam>();
}

