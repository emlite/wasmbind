#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "HandwritingHintsQueryResult.hpp"

namespace webbind {

/// Dictionary type HandwritingRecognizerQueryResult
class HandwritingRecognizerQueryResult : public emlite::Val {
  explicit HandwritingRecognizerQueryResult(Handle h) noexcept;
public:
    static HandwritingRecognizerQueryResult take_ownership(Handle h) noexcept;
    explicit HandwritingRecognizerQueryResult(const emlite::Val &val) noexcept;
    HandwritingRecognizerQueryResult() noexcept;
    [[nodiscard]] HandwritingRecognizerQueryResult clone() const noexcept;
    /// Getter of the `textAlternatives` attribute.
    [[nodiscard]] bool textAlternatives() const;
    /// Setter of the `textAlternatives` attribute.
    void textAlternatives(bool value);
    /// Getter of the `textSegmentation` attribute.
    [[nodiscard]] bool textSegmentation() const;
    /// Setter of the `textSegmentation` attribute.
    void textSegmentation(bool value);
    /// Getter of the `hints` attribute.
    [[nodiscard]] HandwritingHintsQueryResult hints() const;
    /// Setter of the `hints` attribute.
    void hints(const HandwritingHintsQueryResult& value);
};

} // namespace webbind