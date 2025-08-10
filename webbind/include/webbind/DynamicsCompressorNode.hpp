#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "AudioNode.hpp"
#include "DynamicsCompressorOptions.hpp"

namespace webbind {

class BaseAudioContext;
class AudioParam;

/// Interface DynamicsCompressorNode
/// [`DynamicsCompressorNode`](https://developer.mozilla.org/en-US/docs/Web/API/DynamicsCompressorNode)
class DynamicsCompressorNode : public AudioNode {
    explicit DynamicsCompressorNode(Handle h) noexcept;
public:
    explicit DynamicsCompressorNode(const emlite::Val &val) noexcept;
    static DynamicsCompressorNode take_ownership(Handle h) noexcept;
    [[nodiscard]] DynamicsCompressorNode clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new DynamicsCompressorNode(..)` constructor, creating a new DynamicsCompressorNode instance
    DynamicsCompressorNode(const BaseAudioContext& context);
    /// The `new DynamicsCompressorNode(..)` constructor, creating a new DynamicsCompressorNode instance
    DynamicsCompressorNode(const BaseAudioContext& context, const DynamicsCompressorOptions& options);
    /// [`DynamicsCompressorNode.threshold`](https://developer.mozilla.org/en-US/docs/Web/API/DynamicsCompressorNode/threshold)
    /// [`DynamicsCompressorNode.threshold`](https://developer.mozilla.org/en-US/docs/Web/API/DynamicsCompressorNode/threshold)
    [[nodiscard]] AudioParam threshold() const;
    /// [`DynamicsCompressorNode.knee`](https://developer.mozilla.org/en-US/docs/Web/API/DynamicsCompressorNode/knee)
    /// [`DynamicsCompressorNode.knee`](https://developer.mozilla.org/en-US/docs/Web/API/DynamicsCompressorNode/knee)
    [[nodiscard]] AudioParam knee() const;
    /// [`DynamicsCompressorNode.ratio`](https://developer.mozilla.org/en-US/docs/Web/API/DynamicsCompressorNode/ratio)
    /// [`DynamicsCompressorNode.ratio`](https://developer.mozilla.org/en-US/docs/Web/API/DynamicsCompressorNode/ratio)
    [[nodiscard]] AudioParam ratio() const;
    /// [`DynamicsCompressorNode.reduction`](https://developer.mozilla.org/en-US/docs/Web/API/DynamicsCompressorNode/reduction)
    /// [`DynamicsCompressorNode.reduction`](https://developer.mozilla.org/en-US/docs/Web/API/DynamicsCompressorNode/reduction)
    [[nodiscard]] float reduction() const;
    /// [`DynamicsCompressorNode.attack`](https://developer.mozilla.org/en-US/docs/Web/API/DynamicsCompressorNode/attack)
    /// [`DynamicsCompressorNode.attack`](https://developer.mozilla.org/en-US/docs/Web/API/DynamicsCompressorNode/attack)
    [[nodiscard]] AudioParam attack() const;
    /// [`DynamicsCompressorNode.release`](https://developer.mozilla.org/en-US/docs/Web/API/DynamicsCompressorNode/release)
    /// [`DynamicsCompressorNode.release`](https://developer.mozilla.org/en-US/docs/Web/API/DynamicsCompressorNode/release)
    [[nodiscard]] AudioParam release() const;
};

} // namespace webbind