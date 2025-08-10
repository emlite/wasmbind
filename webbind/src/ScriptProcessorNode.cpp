#include <webbind/ScriptProcessorNode.hpp>

namespace webbind {

ScriptProcessorNode ScriptProcessorNode::take_ownership(Handle h) noexcept {
    return ScriptProcessorNode(h);
}

ScriptProcessorNode ScriptProcessorNode::clone() const noexcept { return *this; }

emlite::Val ScriptProcessorNode::instance() noexcept { return emlite::Val::global("ScriptProcessorNode"); }

ScriptProcessorNode::ScriptProcessorNode(Handle h) noexcept : AudioNode(emlite::Val::take_ownership(h)) {}

ScriptProcessorNode::ScriptProcessorNode(const emlite::Val &val) noexcept: AudioNode(val) {}

jsbind::Any ScriptProcessorNode::onaudioprocess() const {
    return AudioNode::get("onaudioprocess").as<jsbind::Any>();
}

void ScriptProcessorNode::onaudioprocess(const jsbind::Any& value) {
    AudioNode::set("onaudioprocess", value);
}

long ScriptProcessorNode::bufferSize() const {
    return AudioNode::get("bufferSize").as<long>();
}


} // namespace webbind