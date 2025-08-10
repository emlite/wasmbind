#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "AudioNode.hpp"
#include "PannerOptions.hpp"
#include "enums.hpp"

namespace webbind {

class BaseAudioContext;
class AudioParam;

/// Interface PannerNode
/// [`PannerNode`](https://developer.mozilla.org/en-US/docs/Web/API/PannerNode)
class PannerNode : public AudioNode {
    explicit PannerNode(Handle h) noexcept;
public:
    explicit PannerNode(const emlite::Val &val) noexcept;
    static PannerNode take_ownership(Handle h) noexcept;
    [[nodiscard]] PannerNode clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new PannerNode(..)` constructor, creating a new PannerNode instance
    PannerNode(const BaseAudioContext& context);
    /// The `new PannerNode(..)` constructor, creating a new PannerNode instance
    PannerNode(const BaseAudioContext& context, const PannerOptions& options);
    /// [`PannerNode.panningModel`](https://developer.mozilla.org/en-US/docs/Web/API/PannerNode/panningModel)
    /// [`PannerNode.panningModel`](https://developer.mozilla.org/en-US/docs/Web/API/PannerNode/panningModel)
    [[nodiscard]] PanningModelType panningModel() const;
    /// Setter of the `panningModel` attribute.
    /// [`PannerNode.panningModel`](https://developer.mozilla.org/en-US/docs/Web/API/PannerNode/panningModel)
    void panningModel(const PanningModelType& value);
    /// [`PannerNode.positionX`](https://developer.mozilla.org/en-US/docs/Web/API/PannerNode/positionX)
    /// [`PannerNode.positionX`](https://developer.mozilla.org/en-US/docs/Web/API/PannerNode/positionX)
    [[nodiscard]] AudioParam positionX() const;
    /// [`PannerNode.positionY`](https://developer.mozilla.org/en-US/docs/Web/API/PannerNode/positionY)
    /// [`PannerNode.positionY`](https://developer.mozilla.org/en-US/docs/Web/API/PannerNode/positionY)
    [[nodiscard]] AudioParam positionY() const;
    /// [`PannerNode.positionZ`](https://developer.mozilla.org/en-US/docs/Web/API/PannerNode/positionZ)
    /// [`PannerNode.positionZ`](https://developer.mozilla.org/en-US/docs/Web/API/PannerNode/positionZ)
    [[nodiscard]] AudioParam positionZ() const;
    /// [`PannerNode.orientationX`](https://developer.mozilla.org/en-US/docs/Web/API/PannerNode/orientationX)
    /// [`PannerNode.orientationX`](https://developer.mozilla.org/en-US/docs/Web/API/PannerNode/orientationX)
    [[nodiscard]] AudioParam orientationX() const;
    /// [`PannerNode.orientationY`](https://developer.mozilla.org/en-US/docs/Web/API/PannerNode/orientationY)
    /// [`PannerNode.orientationY`](https://developer.mozilla.org/en-US/docs/Web/API/PannerNode/orientationY)
    [[nodiscard]] AudioParam orientationY() const;
    /// [`PannerNode.orientationZ`](https://developer.mozilla.org/en-US/docs/Web/API/PannerNode/orientationZ)
    /// [`PannerNode.orientationZ`](https://developer.mozilla.org/en-US/docs/Web/API/PannerNode/orientationZ)
    [[nodiscard]] AudioParam orientationZ() const;
    /// [`PannerNode.distanceModel`](https://developer.mozilla.org/en-US/docs/Web/API/PannerNode/distanceModel)
    /// [`PannerNode.distanceModel`](https://developer.mozilla.org/en-US/docs/Web/API/PannerNode/distanceModel)
    [[nodiscard]] DistanceModelType distanceModel() const;
    /// Setter of the `distanceModel` attribute.
    /// [`PannerNode.distanceModel`](https://developer.mozilla.org/en-US/docs/Web/API/PannerNode/distanceModel)
    void distanceModel(const DistanceModelType& value);
    /// [`PannerNode.refDistance`](https://developer.mozilla.org/en-US/docs/Web/API/PannerNode/refDistance)
    /// [`PannerNode.refDistance`](https://developer.mozilla.org/en-US/docs/Web/API/PannerNode/refDistance)
    [[nodiscard]] double refDistance() const;
    /// Setter of the `refDistance` attribute.
    /// [`PannerNode.refDistance`](https://developer.mozilla.org/en-US/docs/Web/API/PannerNode/refDistance)
    void refDistance(double value);
    /// [`PannerNode.maxDistance`](https://developer.mozilla.org/en-US/docs/Web/API/PannerNode/maxDistance)
    /// [`PannerNode.maxDistance`](https://developer.mozilla.org/en-US/docs/Web/API/PannerNode/maxDistance)
    [[nodiscard]] double maxDistance() const;
    /// Setter of the `maxDistance` attribute.
    /// [`PannerNode.maxDistance`](https://developer.mozilla.org/en-US/docs/Web/API/PannerNode/maxDistance)
    void maxDistance(double value);
    /// [`PannerNode.rolloffFactor`](https://developer.mozilla.org/en-US/docs/Web/API/PannerNode/rolloffFactor)
    /// [`PannerNode.rolloffFactor`](https://developer.mozilla.org/en-US/docs/Web/API/PannerNode/rolloffFactor)
    [[nodiscard]] double rolloffFactor() const;
    /// Setter of the `rolloffFactor` attribute.
    /// [`PannerNode.rolloffFactor`](https://developer.mozilla.org/en-US/docs/Web/API/PannerNode/rolloffFactor)
    void rolloffFactor(double value);
    /// [`PannerNode.coneInnerAngle`](https://developer.mozilla.org/en-US/docs/Web/API/PannerNode/coneInnerAngle)
    /// [`PannerNode.coneInnerAngle`](https://developer.mozilla.org/en-US/docs/Web/API/PannerNode/coneInnerAngle)
    [[nodiscard]] double coneInnerAngle() const;
    /// Setter of the `coneInnerAngle` attribute.
    /// [`PannerNode.coneInnerAngle`](https://developer.mozilla.org/en-US/docs/Web/API/PannerNode/coneInnerAngle)
    void coneInnerAngle(double value);
    /// [`PannerNode.coneOuterAngle`](https://developer.mozilla.org/en-US/docs/Web/API/PannerNode/coneOuterAngle)
    /// [`PannerNode.coneOuterAngle`](https://developer.mozilla.org/en-US/docs/Web/API/PannerNode/coneOuterAngle)
    [[nodiscard]] double coneOuterAngle() const;
    /// Setter of the `coneOuterAngle` attribute.
    /// [`PannerNode.coneOuterAngle`](https://developer.mozilla.org/en-US/docs/Web/API/PannerNode/coneOuterAngle)
    void coneOuterAngle(double value);
    /// [`PannerNode.coneOuterGain`](https://developer.mozilla.org/en-US/docs/Web/API/PannerNode/coneOuterGain)
    /// [`PannerNode.coneOuterGain`](https://developer.mozilla.org/en-US/docs/Web/API/PannerNode/coneOuterGain)
    [[nodiscard]] double coneOuterGain() const;
    /// Setter of the `coneOuterGain` attribute.
    /// [`PannerNode.coneOuterGain`](https://developer.mozilla.org/en-US/docs/Web/API/PannerNode/coneOuterGain)
    void coneOuterGain(double value);
    /// The setPosition method.
    /// [`PannerNode.setPosition`](https://developer.mozilla.org/en-US/docs/Web/API/PannerNode/setPosition)
    jsbind::Undefined setPosition(float x, float y, float z);
    /// The setOrientation method.
    /// [`PannerNode.setOrientation`](https://developer.mozilla.org/en-US/docs/Web/API/PannerNode/setOrientation)
    jsbind::Undefined setOrientation(float x, float y, float z);
};

} // namespace webbind