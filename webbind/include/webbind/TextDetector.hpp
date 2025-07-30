#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class DetectedText;
class DOMRectReadOnly;


class DetectedText : public emlite::Val {
  explicit DetectedText(Handle h) noexcept;
public:
    static DetectedText take_ownership(Handle h) noexcept;
    explicit DetectedText(const emlite::Val &val) noexcept;
    DetectedText() noexcept;
    DetectedText clone() const noexcept;
    DOMRectReadOnly boundingBox() const;
    void boundingBox(const DOMRectReadOnly& value);
    jsbind::String rawValue() const;
    void rawValue(const jsbind::String& value);
    jsbind::TypedArray<jsbind::Any> cornerPoints() const;
    void cornerPoints(const jsbind::TypedArray<jsbind::Any>& value);
};

class TextDetector : public emlite::Val {
    explicit TextDetector(Handle h) noexcept;

public:
    explicit TextDetector(const emlite::Val &val) noexcept;
    static TextDetector take_ownership(Handle h) noexcept;

    TextDetector clone() const noexcept;
    TextDetector();
    jsbind::Promise<jsbind::TypedArray<DetectedText>> detect(const jsbind::Any& image);
};

