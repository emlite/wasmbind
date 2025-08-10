#include "webbind/WaveShaperNode.hpp"
#include "webbind/BaseAudioContext.hpp"
#include "webbind/WaveShaperOptions.hpp"

namespace webbind {

WaveShaperNode WaveShaperNode::take_ownership(Handle h) noexcept {
        return WaveShaperNode(h);
    }
WaveShaperNode WaveShaperNode::clone() const noexcept { return *this; }
emlite::Val WaveShaperNode::instance() noexcept { return emlite::Val::global("WaveShaperNode"); }
WaveShaperNode::WaveShaperNode(Handle h) noexcept : AudioNode(emlite::Val::take_ownership(h)) {}
WaveShaperNode::WaveShaperNode(const emlite::Val &val) noexcept: AudioNode(val) {}

WaveShaperNode::WaveShaperNode(const BaseAudioContext& context) : AudioNode(emlite::Val::global("WaveShaperNode").new_(context)) {}

WaveShaperNode::WaveShaperNode(const BaseAudioContext& context, const WaveShaperOptions& options) : AudioNode(emlite::Val::global("WaveShaperNode").new_(context, options)) {}

jsbind::Float32Array WaveShaperNode::curve() const {
    return AudioNode::get("curve").as<jsbind::Float32Array>();
}

void WaveShaperNode::curve(const jsbind::Float32Array& value) {
    AudioNode::set("curve", value);
}

OverSampleType WaveShaperNode::oversample() const {
    return AudioNode::get("oversample").as<OverSampleType>();
}

void WaveShaperNode::oversample(const OverSampleType& value) {
    AudioNode::set("oversample", value);
}


} // namespace webbind