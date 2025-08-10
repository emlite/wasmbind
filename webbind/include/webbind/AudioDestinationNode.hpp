#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "AudioNode.hpp"

namespace webbind {

/// Interface AudioDestinationNode
/// [`AudioDestinationNode`](https://developer.mozilla.org/en-US/docs/Web/API/AudioDestinationNode)
class AudioDestinationNode : public AudioNode {
    explicit AudioDestinationNode(Handle h) noexcept;
public:
    explicit AudioDestinationNode(const emlite::Val &val) noexcept;
    static AudioDestinationNode take_ownership(Handle h) noexcept;
    [[nodiscard]] AudioDestinationNode clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `maxChannelCount` attribute.
    /// [`AudioDestinationNode.maxChannelCount`](https://developer.mozilla.org/en-US/docs/Web/API/AudioDestinationNode/maxChannelCount)
    [[nodiscard]] unsigned long maxChannelCount() const;
};

} // namespace webbind