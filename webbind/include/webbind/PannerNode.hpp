#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "AudioNode.hpp"
#include "enums.hpp"

class AudioParam;


class PannerNode : public AudioNode {
    explicit PannerNode(Handle h) noexcept;

public:
    explicit PannerNode(const emlite::Val &val) noexcept;
    static PannerNode take_ownership(Handle h) noexcept;

    PannerNode clone() const noexcept;
    PannerNode(const BaseAudioContext& context);
    PannerNode(const BaseAudioContext& context, const jsbind::Any& options);
    PanningModelType panningModel() const;
    void panningModel(const PanningModelType& value);
    AudioParam positionX() const;
    AudioParam positionY() const;
    AudioParam positionZ() const;
    AudioParam orientationX() const;
    AudioParam orientationY() const;
    AudioParam orientationZ() const;
    DistanceModelType distanceModel() const;
    void distanceModel(const DistanceModelType& value);
    double refDistance() const;
    void refDistance(double value);
    double maxDistance() const;
    void maxDistance(double value);
    double rolloffFactor() const;
    void rolloffFactor(double value);
    double coneInnerAngle() const;
    void coneInnerAngle(double value);
    double coneOuterAngle() const;
    void coneOuterAngle(double value);
    double coneOuterGain() const;
    void coneOuterGain(double value);
    jsbind::Undefined setPosition(float x, float y, float z);
    jsbind::Undefined setOrientation(float x, float y, float z);
};

