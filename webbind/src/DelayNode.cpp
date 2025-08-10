#include <webbind/DelayNode.hpp>
#include <webbind/BaseAudioContext.hpp>
#include <webbind/DelayOptions.hpp>
#include <webbind/AudioParam.hpp>

namespace webbind {

DelayNode DelayNode::take_ownership(Handle h) noexcept {
    return DelayNode(h);
}

DelayNode DelayNode::clone() const noexcept { return *this; }

emlite::Val DelayNode::instance() noexcept { return emlite::Val::global("DelayNode"); }

DelayNode::DelayNode(Handle h) noexcept : AudioNode(emlite::Val::take_ownership(h)) {}

DelayNode::DelayNode(const emlite::Val &val) noexcept: AudioNode(val) {}

DelayNode::DelayNode(const BaseAudioContext& context) : AudioNode(emlite::Val::global("DelayNode").new_(context)) {}

DelayNode::DelayNode(const BaseAudioContext& context, const DelayOptions& options) : AudioNode(emlite::Val::global("DelayNode").new_(context, options)) {}

AudioParam DelayNode::delayTime() const {
    return AudioNode::get("delayTime").as<AudioParam>();
}


} // namespace webbind