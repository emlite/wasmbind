#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "AudioNodeOptions.hpp"

namespace webbind {

/// Dictionary type PannerOptions
/// [`PannerOptions`](https://developer.mozilla.org/en-US/docs/Web/API/PannerOptions)
class PannerOptions : public AudioNodeOptions {
  explicit PannerOptions(Handle h) noexcept;
public:
    static PannerOptions take_ownership(Handle h) noexcept;
    explicit PannerOptions(const emlite::Val &val) noexcept;
    PannerOptions() noexcept;
    [[nodiscard]] PannerOptions clone() const noexcept;
    [[nodiscard]] PanningModelType panningModel() const;
    void panningModel(const PanningModelType& value);
    [[nodiscard]] DistanceModelType distanceModel() const;
    void distanceModel(const DistanceModelType& value);
    [[nodiscard]] float positionX() const;
    void positionX(float value);
    [[nodiscard]] float positionY() const;
    void positionY(float value);
    [[nodiscard]] float positionZ() const;
    void positionZ(float value);
    [[nodiscard]] float orientationX() const;
    void orientationX(float value);
    [[nodiscard]] float orientationY() const;
    void orientationY(float value);
    [[nodiscard]] float orientationZ() const;
    void orientationZ(float value);
    [[nodiscard]] double refDistance() const;
    void refDistance(double value);
    [[nodiscard]] double maxDistance() const;
    void maxDistance(double value);
    [[nodiscard]] double rolloffFactor() const;
    void rolloffFactor(double value);
    [[nodiscard]] double coneInnerAngle() const;
    void coneInnerAngle(double value);
    [[nodiscard]] double coneOuterAngle() const;
    void coneOuterAngle(double value);
    [[nodiscard]] double coneOuterGain() const;
    void coneOuterGain(double value);
};

} // namespace webbind