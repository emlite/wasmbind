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
    DetectedFace clone() const noexcept;
    DOMRectReadOnly boundingBox() const;
    void boundingBox(const DOMRectReadOnly& value);
    jsbind::Sequence<jsbind::Any> landmarks() const;
    void landmarks(const jsbind::Sequence<jsbind::Any>& value);
};

class FaceDetector : public emlite::Val {
    explicit FaceDetector(Handle h) noexcept;

public:
    explicit FaceDetector(const emlite::Val &val) noexcept;
    static FaceDetector take_ownership(Handle h) noexcept;

    FaceDetector clone() const noexcept;
    FaceDetector();
    FaceDetector(const jsbind::Any& faceDetectorOptions);
    jsbind::Promise<jsbind::Sequence<DetectedFace>> detect(const jsbind::Any& image);
};

