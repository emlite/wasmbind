#include "webbind/ConstantSourceNode.hpp"
#include "webbind/BaseAudioContext.hpp"
#include "webbind/ConstantSourceOptions.hpp"
#include "webbind/AudioParam.hpp"

namespace webbind {

ConstantSourceNode ConstantSourceNode::take_ownership(Handle h) noexcept {
        return ConstantSourceNode(h);
    }
ConstantSourceNode ConstantSourceNode::clone() const noexcept { return *this; }
emlite::Val ConstantSourceNode::instance() noexcept { return emlite::Val::global("ConstantSourceNode"); }
ConstantSourceNode::ConstantSourceNode(Handle h) noexcept : AudioScheduledSourceNode(emlite::Val::take_ownership(h)) {}
ConstantSourceNode::ConstantSourceNode(const emlite::Val &val) noexcept: AudioScheduledSourceNode(val) {}

ConstantSourceNode::ConstantSourceNode(const BaseAudioContext& context) : AudioScheduledSourceNode(emlite::Val::global("ConstantSourceNode").new_(context)) {}

ConstantSourceNode::ConstantSourceNode(const BaseAudioContext& context, const ConstantSourceOptions& options) : AudioScheduledSourceNode(emlite::Val::global("ConstantSourceNode").new_(context, options)) {}

AudioParam ConstantSourceNode::offset() const {
    return AudioScheduledSourceNode::get("offset").as<AudioParam>();
}


} // namespace webbind