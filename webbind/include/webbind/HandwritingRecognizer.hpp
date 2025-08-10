#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "HandwritingHints.hpp"

namespace webbind {

class HandwritingDrawing;

/// Interface HandwritingRecognizer
/// [`HandwritingRecognizer`](https://developer.mozilla.org/en-US/docs/Web/API/HandwritingRecognizer)
class HandwritingRecognizer : public emlite::Val {
    explicit HandwritingRecognizer(Handle h) noexcept;
public:
    explicit HandwritingRecognizer(const emlite::Val &val) noexcept;
    static HandwritingRecognizer take_ownership(Handle h) noexcept;
    [[nodiscard]] HandwritingRecognizer clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The startDrawing method.
    /// [`HandwritingRecognizer.startDrawing`](https://developer.mozilla.org/en-US/docs/Web/API/HandwritingRecognizer/startDrawing)
    HandwritingDrawing startDrawing();
    /// The startDrawing method.
    /// [`HandwritingRecognizer.startDrawing`](https://developer.mozilla.org/en-US/docs/Web/API/HandwritingRecognizer/startDrawing)
    HandwritingDrawing startDrawing(const HandwritingHints& hints);
    /// The finish method.
    /// [`HandwritingRecognizer.finish`](https://developer.mozilla.org/en-US/docs/Web/API/HandwritingRecognizer/finish)
    jsbind::Undefined finish();
};

} // namespace webbind