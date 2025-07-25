#include <webbind/GainNode.hpp>
#include <webbind/AudioParam.hpp>
#include <webbind/BaseAudioContext.hpp>


GainNode GainNode::take_ownership(Handle h) noexcept {
        return GainNode(h);
    }
GainNode GainNode::clone() const noexcept { return *this; }
GainNode::GainNode(Handle h) noexcept : AudioNode(emlite::Val::take_ownership(h)) {}
GainNode::GainNode(const emlite::Val &val) noexcept: AudioNode(val) {}


GainNode::GainNode(const BaseAudioContext& context) : AudioNode(emlite::Val::global("GainNode").new_(context)) {}

GainNode::GainNode(const BaseAudioContext& context, const jsbind::Any& options) : AudioNode(emlite::Val::global("GainNode").new_(context, options)) {}

AudioParam GainNode::gain() const {
    return AudioNode::get("gain").as<AudioParam>();
}

