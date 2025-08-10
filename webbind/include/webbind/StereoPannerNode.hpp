#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "AudioNode.hpp"
#include "StereoPannerOptions.hpp"

namespace webbind {

class BaseAudioContext;
class AudioParam;

/// Interface StereoPannerNode
/// [`StereoPannerNode`](https://developer.mozilla.org/en-US/docs/Web/API/StereoPannerNode)
class StereoPannerNode : public AudioNode {
    explicit StereoPannerNode(Handle h) noexcept;
public:
    explicit StereoPannerNode(const emlite::Val &val) noexcept;
    static StereoPannerNode take_ownership(Handle h) noexcept;
    [[nodiscard]] StereoPannerNode clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new StereoPannerNode(..)` constructor, creating a new StereoPannerNode instance
    StereoPannerNode(const BaseAudioContext& context);
    /// The `new StereoPannerNode(..)` constructor, creating a new StereoPannerNode instance
    StereoPannerNode(const BaseAudioContext& context, const StereoPannerOptions& options);
    /// Getter of the `pan` attribute.
    /// [`StereoPannerNode.pan`](https://developer.mozilla.org/en-US/docs/Web/API/StereoPannerNode/pan)
    [[nodiscard]] AudioParam pan() const;
};

} // namespace webbind