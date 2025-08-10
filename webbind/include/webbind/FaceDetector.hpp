#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class FaceDetectorOptions;
class DetectedFace;

/// Interface FaceDetector
/// [`FaceDetector`](https://developer.mozilla.org/en-US/docs/Web/API/FaceDetector)
class FaceDetector : public emlite::Val {
    explicit FaceDetector(Handle h) noexcept;
public:
    explicit FaceDetector(const emlite::Val &val) noexcept;
    static FaceDetector take_ownership(Handle h) noexcept;
    [[nodiscard]] FaceDetector clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new FaceDetector(..)` constructor, creating a new FaceDetector instance
    FaceDetector();
    /// The `new FaceDetector(..)` constructor, creating a new FaceDetector instance
    FaceDetector(const FaceDetectorOptions& faceDetectorOptions);
    /// The detect method.
    /// [`FaceDetector.detect`](https://developer.mozilla.org/en-US/docs/Web/API/FaceDetector/detect)
    jsbind::Promise<jsbind::TypedArray<DetectedFace>> detect(const jsbind::Any& image);
};

} // namespace webbind