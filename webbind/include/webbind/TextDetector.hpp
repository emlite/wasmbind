#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class DetectedText;

/// Interface TextDetector
/// [`TextDetector`](https://developer.mozilla.org/en-US/docs/Web/API/TextDetector)
class TextDetector : public emlite::Val {
    explicit TextDetector(Handle h) noexcept;
public:
    explicit TextDetector(const emlite::Val &val) noexcept;
    static TextDetector take_ownership(Handle h) noexcept;
    [[nodiscard]] TextDetector clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new TextDetector(..)` constructor, creating a new TextDetector instance
    TextDetector();
    /// The detect method.
    /// [`TextDetector.detect`](https://developer.mozilla.org/en-US/docs/Web/API/TextDetector/detect)
    jsbind::Promise<jsbind::TypedArray<DetectedText>> detect(const jsbind::Any& image);
};

} // namespace webbind