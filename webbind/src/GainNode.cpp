#include "webbind/GainNode.hpp"
#include "webbind/BaseAudioContext.hpp"
#include "webbind/GainOptions.hpp"
#include "webbind/AudioParam.hpp"

namespace webbind {

GainNode GainNode::take_ownership(Handle h) noexcept {
        return GainNode(h);
    }
GainNode GainNode::clone() const noexcept { return *this; }
emlite::Val GainNode::instance() noexcept { return emlite::Val::global("GainNode"); }
GainNode::GainNode(Handle h) noexcept : AudioNode(emlite::Val::take_ownership(h)) {}
GainNode::GainNode(const emlite::Val &val) noexcept: AudioNode(val) {}

GainNode::GainNode(const BaseAudioContext& context) : AudioNode(emlite::Val::global("GainNode").new_(context)) {}

GainNode::GainNode(const BaseAudioContext& context, const GainOptions& options) : AudioNode(emlite::Val::global("GainNode").new_(context, options)) {}

AudioParam GainNode::gain() const {
    return AudioNode::get("gain").as<AudioParam>();
}


} // namespace webbind