#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "AudioNode.hpp"
#include "enums.hpp"

class AudioParam;


/// The PannerNode class.
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
    PannerNode(const BaseAudioContext& context, const jsbind::Any& options);
    /// Getter of the `panningModel` attribute.
    /// [`PannerNode.panningModel`](https://developer.mozilla.org/en-US/docs/Web/API/PannerNode/panningModel)
    [[nodiscard]] PanningModelType panningModel() const;
    /// Setter of the `panningModel` attribute.
    /// [`PannerNode.panningModel`](https://developer.mozilla.org/en-US/docs/Web/API/PannerNode/panningModel)
    void panningModel(const PanningModelType& value);
    /// Getter of the `positionX` attribute.
    /// [`PannerNode.positionX`](https://developer.mozilla.org/en-US/docs/Web/API/PannerNode/positionX)
    [[nodiscard]] AudioParam positionX() const;
    /// Getter of the `positionY` attribute.
    /// [`PannerNode.positionY`](https://developer.mozilla.org/en-US/docs/Web/API/PannerNode/positionY)
    [[nodiscard]] AudioParam positionY() const;
    /// Getter of the `positionZ` attribute.
    /// [`PannerNode.positionZ`](https://developer.mozilla.org/en-US/docs/Web/API/PannerNode/positionZ)
    [[nodiscard]] AudioParam positionZ() const;
    /// Getter of the `orientationX` attribute.
    /// [`PannerNode.orientationX`](https://developer.mozilla.org/en-US/docs/Web/API/PannerNode/orientationX)
    [[nodiscard]] AudioParam orientationX() const;
    /// Getter of the `orientationY` attribute.
    /// [`PannerNode.orientationY`](https://developer.mozilla.org/en-US/docs/Web/API/PannerNode/orientationY)
    [[nodiscard]] AudioParam orientationY() const;
    /// Getter of the `orientationZ` attribute.
    /// [`PannerNode.orientationZ`](https://developer.mozilla.org/en-US/docs/Web/API/PannerNode/orientationZ)
    [[nodiscard]] AudioParam orientationZ() const;
    /// Getter of the `distanceModel` attribute.
    /// [`PannerNode.distanceModel`](https://developer.mozilla.org/en-US/docs/Web/API/PannerNode/distanceModel)
    [[nodiscard]] DistanceModelType distanceModel() const;
    /// Setter of the `distanceModel` attribute.
    /// [`PannerNode.distanceModel`](https://developer.mozilla.org/en-US/docs/Web/API/PannerNode/distanceModel)
    void distanceModel(const DistanceModelType& value);
    /// Getter of the `refDistance` attribute.
    /// [`PannerNode.refDistance`](https://developer.mozilla.org/en-US/docs/Web/API/PannerNode/refDistance)
    [[nodiscard]] double refDistance() const;
    /// Setter of the `refDistance` attribute.
    /// [`PannerNode.refDistance`](https://developer.mozilla.org/en-US/docs/Web/API/PannerNode/refDistance)
    void refDistance(double value);
    /// Getter of the `maxDistance` attribute.
    /// [`PannerNode.maxDistance`](https://developer.mozilla.org/en-US/docs/Web/API/PannerNode/maxDistance)
    [[nodiscard]] double maxDistance() const;
    /// Setter of the `maxDistance` attribute.
    /// [`PannerNode.maxDistance`](https://developer.mozilla.org/en-US/docs/Web/API/PannerNode/maxDistance)
    void maxDistance(double value);
    /// Getter of the `rolloffFactor` attribute.
    /// [`PannerNode.rolloffFactor`](https://developer.mozilla.org/en-US/docs/Web/API/PannerNode/rolloffFactor)
    [[nodiscard]] double rolloffFactor() const;
    /// Setter of the `rolloffFactor` attribute.
    /// [`PannerNode.rolloffFactor`](https://developer.mozilla.org/en-US/docs/Web/API/PannerNode/rolloffFactor)
    void rolloffFactor(double value);
    /// Getter of the `coneInnerAngle` attribute.
    /// [`PannerNode.coneInnerAngle`](https://developer.mozilla.org/en-US/docs/Web/API/PannerNode/coneInnerAngle)
    [[nodiscard]] double coneInnerAngle() const;
    /// Setter of the `coneInnerAngle` attribute.
    /// [`PannerNode.coneInnerAngle`](https://developer.mozilla.org/en-US/docs/Web/API/PannerNode/coneInnerAngle)
    void coneInnerAngle(double value);
    /// Getter of the `coneOuterAngle` attribute.
    /// [`PannerNode.coneOuterAngle`](https://developer.mozilla.org/en-US/docs/Web/API/PannerNode/coneOuterAngle)
    [[nodiscard]] double coneOuterAngle() const;
    /// Setter of the `coneOuterAngle` attribute.
    /// [`PannerNode.coneOuterAngle`](https://developer.mozilla.org/en-US/docs/Web/API/PannerNode/coneOuterAngle)
    void coneOuterAngle(double value);
    /// Getter of the `coneOuterGain` attribute.
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

