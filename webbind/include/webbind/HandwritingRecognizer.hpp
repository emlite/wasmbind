#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class HandwritingDrawing;
class HandwritingHints;


class HandwritingHints : public emlite::Val {
  explicit HandwritingHints(Handle h) noexcept;
public:
    static HandwritingHints take_ownership(Handle h) noexcept;
    explicit HandwritingHints(const emlite::Val &val) noexcept;
    HandwritingHints() noexcept;
    [[nodiscard]] HandwritingHints clone() const noexcept;
    [[nodiscard]] jsbind::String recognitionType() const;
    void recognitionType(const jsbind::String& value);
    [[nodiscard]] jsbind::String inputType() const;
    void inputType(const jsbind::String& value);
    [[nodiscard]] jsbind::String textContext() const;
    void textContext(const jsbind::String& value);
    [[nodiscard]] unsigned long alternatives() const;
    void alternatives(unsigned long value);
};

/// The HandwritingRecognizer class.
/// [`HandwritingRecognizer`](https://developer.mozilla.org/en-US/docs/Web/API/HandwritingRecognizer)
class HandwritingRecognizer : public emlite::Val {
    explicit HandwritingRecognizer(Handle h) noexcept;

public:
    explicit HandwritingRecognizer(const emlite::Val &val) noexcept;
    static HandwritingRecognizer take_ownership(Handle h) noexcept;

    [[nodiscard]] HandwritingRecognizer clone() const noexcept;
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

