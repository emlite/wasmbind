#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type FaceDetectorOptions
class FaceDetectorOptions : public emlite::Val {
  explicit FaceDetectorOptions(Handle h) noexcept;
public:
    static FaceDetectorOptions take_ownership(Handle h) noexcept;
    explicit FaceDetectorOptions(const emlite::Val &val) noexcept;
    FaceDetectorOptions() noexcept;
    [[nodiscard]] FaceDetectorOptions clone() const noexcept;
    /// Getter of the `maxDetectedFaces` attribute.
    [[nodiscard]] unsigned short maxDetectedFaces() const;
    /// Setter of the `maxDetectedFaces` attribute.
    void maxDetectedFaces(unsigned short value);
    /// Getter of the `fastMode` attribute.
    [[nodiscard]] bool fastMode() const;
    /// Setter of the `fastMode` attribute.
    void fastMode(bool value);
};

} // namespace webbind