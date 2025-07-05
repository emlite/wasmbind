#include <webbind/ConvolverNode.hpp>
#include <webbind/AudioBuffer.hpp>
#include <webbind/BaseAudioContext.hpp>


ConvolverNode ConvolverNode::take_ownership(Handle h) noexcept {
        return ConvolverNode(h);
    }
ConvolverNode ConvolverNode::clone() const noexcept { return *this; }
ConvolverNode::ConvolverNode(Handle h) noexcept : AudioNode(emlite::Val::take_ownership(h)) {}
ConvolverNode::ConvolverNode(const emlite::Val &val) noexcept: AudioNode(val) {}


ConvolverNode::ConvolverNode(const BaseAudioContext& context) : AudioNode(emlite::Val::global("ConvolverNode").new_(context)) {}

ConvolverNode::ConvolverNode(const BaseAudioContext& context, const jsbind::Any& options) : AudioNode(emlite::Val::global("ConvolverNode").new_(context, options)) {}

AudioBuffer ConvolverNode::buffer() const {
    return AudioNode::get("buffer").as<AudioBuffer>();
}

void ConvolverNode::buffer(const AudioBuffer& value) {
    AudioNode::set("buffer", value);
}

bool ConvolverNode::normalize() const {
    return AudioNode::get("normalize").as<bool>();
}

void ConvolverNode::normalize(bool value) {
    AudioNode::set("normalize", value);
}

