#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type HandwritingHintsQueryResult
/// [`HandwritingHintsQueryResult`](https://developer.mozilla.org/en-US/docs/Web/API/HandwritingHintsQueryResult)
class HandwritingHintsQueryResult : public emlite::Val {
  explicit HandwritingHintsQueryResult(Handle h) noexcept;
public:
    static HandwritingHintsQueryResult take_ownership(Handle h) noexcept;
    explicit HandwritingHintsQueryResult(const emlite::Val &val) noexcept;
    HandwritingHintsQueryResult() noexcept;
    [[nodiscard]] HandwritingHintsQueryResult clone() const noexcept;
    [[nodiscard]] jsbind::TypedArray<HandwritingRecognitionType> recognitionType() const;
    void recognitionType(const jsbind::TypedArray<HandwritingRecognitionType>& value);
    [[nodiscard]] jsbind::TypedArray<HandwritingInputType> inputType() const;
    void inputType(const jsbind::TypedArray<HandwritingInputType>& value);
    [[nodiscard]] bool textContext() const;
    void textContext(bool value);
    [[nodiscard]] bool alternatives() const;
    void alternatives(bool value);
};

} // namespace webbind