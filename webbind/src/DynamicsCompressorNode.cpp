#include <webbind/DynamicsCompressorNode.hpp>
#include <webbind/AudioParam.hpp>
#include <webbind/BaseAudioContext.hpp>


DynamicsCompressorNode DynamicsCompressorNode::take_ownership(Handle h) noexcept {
        return DynamicsCompressorNode(h);
    }
DynamicsCompressorNode DynamicsCompressorNode::clone() const noexcept { return *this; }
DynamicsCompressorNode::DynamicsCompressorNode(Handle h) noexcept : AudioNode(emlite::Val::take_ownership(h)) {}
DynamicsCompressorNode::DynamicsCompressorNode(const emlite::Val &val) noexcept: AudioNode(val) {}


DynamicsCompressorNode::DynamicsCompressorNode(const BaseAudioContext& context, const jsbind::Any& options): AudioNode(emlite::Val::global("DynamicsCompressorNode").new_(context, options)) {}

AudioParam DynamicsCompressorNode::threshold() const {
    return AudioNode::get("threshold").as<AudioParam>();
}

AudioParam DynamicsCompressorNode::knee() const {
    return AudioNode::get("knee").as<AudioParam>();
}

AudioParam DynamicsCompressorNode::ratio() const {
    return AudioNode::get("ratio").as<AudioParam>();
}

float DynamicsCompressorNode::reduction() const {
    return AudioNode::get("reduction").as<float>();
}

AudioParam DynamicsCompressorNode::attack() const {
    return AudioNode::get("attack").as<AudioParam>();
}

AudioParam DynamicsCompressorNode::release() const {
    return AudioNode::get("release").as<AudioParam>();
}

