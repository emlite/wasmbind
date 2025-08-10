#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type FaceDetectorOptions
/// [`FaceDetectorOptions`](https://developer.mozilla.org/en-US/docs/Web/API/FaceDetectorOptions)
class FaceDetectorOptions : public emlite::Val {
  explicit FaceDetectorOptions(Handle h) noexcept;
public:
    static FaceDetectorOptions take_ownership(Handle h) noexcept;
    explicit FaceDetectorOptions(const emlite::Val &val) noexcept;
    FaceDetectorOptions() noexcept;
    [[nodiscard]] FaceDetectorOptions clone() const noexcept;
    [[nodiscard]] unsigned short maxDetectedFaces() const;
    void maxDetectedFaces(unsigned short value);
    [[nodiscard]] bool fastMode() const;
    void fastMode(bool value);
};

} // namespace webbind