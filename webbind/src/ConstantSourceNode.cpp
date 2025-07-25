#include <webbind/ConstantSourceNode.hpp>
#include <webbind/AudioParam.hpp>
#include <webbind/BaseAudioContext.hpp>


ConstantSourceNode ConstantSourceNode::take_ownership(Handle h) noexcept {
        return ConstantSourceNode(h);
    }
ConstantSourceNode ConstantSourceNode::clone() const noexcept { return *this; }
ConstantSourceNode::ConstantSourceNode(Handle h) noexcept : AudioScheduledSourceNode(emlite::Val::take_ownership(h)) {}
ConstantSourceNode::ConstantSourceNode(const emlite::Val &val) noexcept: AudioScheduledSourceNode(val) {}


ConstantSourceNode::ConstantSourceNode(const BaseAudioContext& context) : AudioScheduledSourceNode(emlite::Val::global("ConstantSourceNode").new_(context)) {}

ConstantSourceNode::ConstantSourceNode(const BaseAudioContext& context, const jsbind::Any& options) : AudioScheduledSourceNode(emlite::Val::global("ConstantSourceNode").new_(context, options)) {}

AudioParam ConstantSourceNode::offset() const {
    return AudioScheduledSourceNode::get("offset").as<AudioParam>();
}

