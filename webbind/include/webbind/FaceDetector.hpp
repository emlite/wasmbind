#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class DetectedFace;
class DOMRectReadOnly;


class DetectedFace : public emlite::Val {
  explicit DetectedFace(Handle h) noexcept;
public:
    static DetectedFace take_ownership(Handle h) noexcept;
    explicit DetectedFace(const emlite::Val &val) noexcept;
    DetectedFace() noexcept;
    [[nodiscard]] DetectedFace clone() const noexcept;
    [[nodiscard]] DOMRectReadOnly boundingBox() const;
    void boundingBox(const DOMRectReadOnly& value);
    [[nodiscard]] jsbind::TypedArray<jsbind::Any> landmarks() const;
    void landmarks(const jsbind::TypedArray<jsbind::Any>& value);
};

/// The FaceDetector class.
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
    FaceDetector(const jsbind::Any& faceDetectorOptions);
    /// The detect method.
    /// [`FaceDetector.detect`](https://developer.mozilla.org/en-US/docs/Web/API/FaceDetector/detect)
    jsbind::Promise<jsbind::TypedArray<DetectedFace>> detect(const jsbind::Any& image);
};

