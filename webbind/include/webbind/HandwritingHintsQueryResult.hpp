#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type HandwritingHintsQueryResult
class HandwritingHintsQueryResult : public emlite::Val {
  explicit HandwritingHintsQueryResult(Handle h) noexcept;
public:
    static HandwritingHintsQueryResult take_ownership(Handle h) noexcept;
    explicit HandwritingHintsQueryResult(const emlite::Val &val) noexcept;
    HandwritingHintsQueryResult() noexcept;
    [[nodiscard]] HandwritingHintsQueryResult clone() const noexcept;
    /// Getter of the `recognitionType` attribute.
    [[nodiscard]] jsbind::TypedArray<HandwritingRecognitionType> recognitionType() const;
    /// Setter of the `recognitionType` attribute.
    void recognitionType(const jsbind::TypedArray<HandwritingRecognitionType>& value);
    /// Getter of the `inputType` attribute.
    [[nodiscard]] jsbind::TypedArray<HandwritingInputType> inputType() const;
    /// Setter of the `inputType` attribute.
    void inputType(const jsbind::TypedArray<HandwritingInputType>& value);
    /// Getter of the `textContext` attribute.
    [[nodiscard]] bool textContext() const;
    /// Setter of the `textContext` attribute.
    void textContext(bool value);
    /// Getter of the `alternatives` attribute.
    [[nodiscard]] bool alternatives() const;
    /// Setter of the `alternatives` attribute.
    void alternatives(bool value);
};

} // namespace webbind