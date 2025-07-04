#include <webbind/AudioDestinationNode.hpp>


AudioDestinationNode AudioDestinationNode::take_ownership(Handle h) noexcept {
        return AudioDestinationNode(h);
    }
AudioDestinationNode AudioDestinationNode::clone() const noexcept { return *this; }
AudioDestinationNode::AudioDestinationNode(Handle h) noexcept : AudioNode(emlite::Val::take_ownership(h)) {}
AudioDestinationNode::AudioDestinationNode(const emlite::Val &val) noexcept: AudioNode(val) {}


unsigned long AudioDestinationNode::maxChannelCount() const {
    return AudioNode::get("maxChannelCount").as<unsigned long>();
}

