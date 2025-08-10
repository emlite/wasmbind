#include "webbind/AudioScheduledSourceNode.hpp"

namespace webbind {

AudioScheduledSourceNode AudioScheduledSourceNode::take_ownership(Handle h) noexcept {
        return AudioScheduledSourceNode(h);
    }
AudioScheduledSourceNode AudioScheduledSourceNode::clone() const noexcept { return *this; }
emlite::Val AudioScheduledSourceNode::instance() noexcept { return emlite::Val::global("AudioScheduledSourceNode"); }
AudioScheduledSourceNode::AudioScheduledSourceNode(Handle h) noexcept : AudioNode(emlite::Val::take_ownership(h)) {}
AudioScheduledSourceNode::AudioScheduledSourceNode(const emlite::Val &val) noexcept: AudioNode(val) {}

jsbind::Any AudioScheduledSourceNode::onended() const {
    return AudioNode::get("onended").as<jsbind::Any>();
}

void AudioScheduledSourceNode::onended(const jsbind::Any& value) {
    AudioNode::set("onended", value);
}

jsbind::Undefined AudioScheduledSourceNode::start() {
    return AudioNode::call("start").as<jsbind::Undefined>();
}

jsbind::Undefined AudioScheduledSourceNode::start(double when) {
    return AudioNode::call("start", when).as<jsbind::Undefined>();
}

jsbind::Undefined AudioScheduledSourceNode::stop() {
    return AudioNode::call("stop").as<jsbind::Undefined>();
}

jsbind::Undefined AudioScheduledSourceNode::stop(double when) {
    return AudioNode::call("stop", when).as<jsbind::Undefined>();
}


} // namespace webbind