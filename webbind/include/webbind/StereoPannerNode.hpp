#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "AudioNode.hpp"
#include "enums.hpp"

class AudioParam;


/// The StereoPannerNode class.
/// [`StereoPannerNode`](https://developer.mozilla.org/en-US/docs/Web/API/StereoPannerNode)
class StereoPannerNode : public AudioNode {
    explicit StereoPannerNode(Handle h) noexcept;

public:
    explicit StereoPannerNode(const emlite::Val &val) noexcept;
    static StereoPannerNode take_ownership(Handle h) noexcept;

    [[nodiscard]] StereoPannerNode clone() const noexcept;
    /// The `new StereoPannerNode(..)` constructor, creating a new StereoPannerNode instance
    StereoPannerNode(const BaseAudioContext& context);
    /// The `new StereoPannerNode(..)` constructor, creating a new StereoPannerNode instance
    StereoPannerNode(const BaseAudioContext& context, const jsbind::Any& options);
    /// Getter of the `pan` attribute.
    /// [`StereoPannerNode.pan`](https://developer.mozilla.org/en-US/docs/Web/API/StereoPannerNode/pan)
    [[nodiscard]] AudioParam pan() const;
};

