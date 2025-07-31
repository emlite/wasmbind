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
    [[nodiscard]] DetectedText clone() const noexcept;
    [[nodiscard]] DOMRectReadOnly boundingBox() const;
    void boundingBox(const DOMRectReadOnly& value);
    [[nodiscard]] jsbind::String rawValue() const;
    void rawValue(const jsbind::String& value);
    [[nodiscard]] jsbind::TypedArray<jsbind::Any> cornerPoints() const;
    void cornerPoints(const jsbind::TypedArray<jsbind::Any>& value);
};

/// The TextDetector class.
/// [`TextDetector`](https://developer.mozilla.org/en-US/docs/Web/API/TextDetector)
class TextDetector : public emlite::Val {
    explicit TextDetector(Handle h) noexcept;

public:
    explicit TextDetector(const emlite::Val &val) noexcept;
    static TextDetector take_ownership(Handle h) noexcept;

    [[nodiscard]] TextDetector clone() const noexcept;
    /// The `new TextDetector(..)` constructor, creating a new TextDetector instance
    TextDetector();
    /// The detect method.
    /// [`TextDetector.detect`](https://developer.mozilla.org/en-US/docs/Web/API/TextDetector/detect)
    jsbind::Promise<jsbind::TypedArray<DetectedText>> detect(const jsbind::Any& image);
};

