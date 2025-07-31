#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "AudioNode.hpp"
#include "enums.hpp"

class AudioParam;


/// The DynamicsCompressorNode class.
/// [`DynamicsCompressorNode`](https://developer.mozilla.org/en-US/docs/Web/API/DynamicsCompressorNode)
class DynamicsCompressorNode : public AudioNode {
    explicit DynamicsCompressorNode(Handle h) noexcept;

public:
    explicit DynamicsCompressorNode(const emlite::Val &val) noexcept;
    static DynamicsCompressorNode take_ownership(Handle h) noexcept;

    [[nodiscard]] DynamicsCompressorNode clone() const noexcept;
    /// The `new DynamicsCompressorNode(..)` constructor, creating a new DynamicsCompressorNode instance
    DynamicsCompressorNode(const BaseAudioContext& context);
    /// The `new DynamicsCompressorNode(..)` constructor, creating a new DynamicsCompressorNode instance
    DynamicsCompressorNode(const BaseAudioContext& context, const jsbind::Any& options);
    /// Getter of the `threshold` attribute.
    /// [`DynamicsCompressorNode.threshold`](https://developer.mozilla.org/en-US/docs/Web/API/DynamicsCompressorNode/threshold)
    [[nodiscard]] AudioParam threshold() const;
    /// Getter of the `knee` attribute.
    /// [`DynamicsCompressorNode.knee`](https://developer.mozilla.org/en-US/docs/Web/API/DynamicsCompressorNode/knee)
    [[nodiscard]] AudioParam knee() const;
    /// Getter of the `ratio` attribute.
    /// [`DynamicsCompressorNode.ratio`](https://developer.mozilla.org/en-US/docs/Web/API/DynamicsCompressorNode/ratio)
    [[nodiscard]] AudioParam ratio() const;
    /// Getter of the `reduction` attribute.
    /// [`DynamicsCompressorNode.reduction`](https://developer.mozilla.org/en-US/docs/Web/API/DynamicsCompressorNode/reduction)
    [[nodiscard]] float reduction() const;
    /// Getter of the `attack` attribute.
    /// [`DynamicsCompressorNode.attack`](https://developer.mozilla.org/en-US/docs/Web/API/DynamicsCompressorNode/attack)
    [[nodiscard]] AudioParam attack() const;
    /// Getter of the `release` attribute.
    /// [`DynamicsCompressorNode.release`](https://developer.mozilla.org/en-US/docs/Web/API/DynamicsCompressorNode/release)
    [[nodiscard]] AudioParam release() const;
};

