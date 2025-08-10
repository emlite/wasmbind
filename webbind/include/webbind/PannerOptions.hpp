#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "AudioNodeOptions.hpp"

namespace webbind {

/// Dictionary type PannerOptions
class PannerOptions : public AudioNodeOptions {
  explicit PannerOptions(Handle h) noexcept;
public:
    static PannerOptions take_ownership(Handle h) noexcept;
    explicit PannerOptions(const emlite::Val &val) noexcept;
    PannerOptions() noexcept;
    [[nodiscard]] PannerOptions clone() const noexcept;
    /// Getter of the `panningModel` attribute.
    [[nodiscard]] PanningModelType panningModel() const;
    /// Setter of the `panningModel` attribute.
    void panningModel(const PanningModelType& value);
    /// Getter of the `distanceModel` attribute.
    [[nodiscard]] DistanceModelType distanceModel() const;
    /// Setter of the `distanceModel` attribute.
    void distanceModel(const DistanceModelType& value);
    /// Getter of the `positionX` attribute.
    [[nodiscard]] float positionX() const;
    /// Setter of the `positionX` attribute.
    void positionX(float value);
    /// Getter of the `positionY` attribute.
    [[nodiscard]] float positionY() const;
    /// Setter of the `positionY` attribute.
    void positionY(float value);
    /// Getter of the `positionZ` attribute.
    [[nodiscard]] float positionZ() const;
    /// Setter of the `positionZ` attribute.
    void positionZ(float value);
    /// Getter of the `orientationX` attribute.
    [[nodiscard]] float orientationX() const;
    /// Setter of the `orientationX` attribute.
    void orientationX(float value);
    /// Getter of the `orientationY` attribute.
    [[nodiscard]] float orientationY() const;
    /// Setter of the `orientationY` attribute.
    void orientationY(float value);
    /// Getter of the `orientationZ` attribute.
    [[nodiscard]] float orientationZ() const;
    /// Setter of the `orientationZ` attribute.
    void orientationZ(float value);
    /// Getter of the `refDistance` attribute.
    [[nodiscard]] double refDistance() const;
    /// Setter of the `refDistance` attribute.
    void refDistance(double value);
    /// Getter of the `maxDistance` attribute.
    [[nodiscard]] double maxDistance() const;
    /// Setter of the `maxDistance` attribute.
    void maxDistance(double value);
    /// Getter of the `rolloffFactor` attribute.
    [[nodiscard]] double rolloffFactor() const;
    /// Setter of the `rolloffFactor` attribute.
    void rolloffFactor(double value);
    /// Getter of the `coneInnerAngle` attribute.
    [[nodiscard]] double coneInnerAngle() const;
    /// Setter of the `coneInnerAngle` attribute.
    void coneInnerAngle(double value);
    /// Getter of the `coneOuterAngle` attribute.
    [[nodiscard]] double coneOuterAngle() const;
    /// Setter of the `coneOuterAngle` attribute.
    void coneOuterAngle(double value);
    /// Getter of the `coneOuterGain` attribute.
    [[nodiscard]] double coneOuterGain() const;
    /// Setter of the `coneOuterGain` attribute.
    void coneOuterGain(double value);
};

} // namespace webbind