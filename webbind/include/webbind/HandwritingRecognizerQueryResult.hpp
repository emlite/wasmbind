#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "HandwritingHintsQueryResult.hpp"

namespace webbind {

/// Dictionary type HandwritingRecognizerQueryResult
/// [`HandwritingRecognizerQueryResult`](https://developer.mozilla.org/en-US/docs/Web/API/HandwritingRecognizerQueryResult)
class HandwritingRecognizerQueryResult : public emlite::Val {
  explicit HandwritingRecognizerQueryResult(Handle h) noexcept;
public:
    static HandwritingRecognizerQueryResult take_ownership(Handle h) noexcept;
    explicit HandwritingRecognizerQueryResult(const emlite::Val &val) noexcept;
    HandwritingRecognizerQueryResult() noexcept;
    [[nodiscard]] HandwritingRecognizerQueryResult clone() const noexcept;
    [[nodiscard]] bool textAlternatives() const;
    void textAlternatives(bool value);
    [[nodiscard]] bool textSegmentation() const;
    void textSegmentation(bool value);
    [[nodiscard]] HandwritingHintsQueryResult hints() const;
    void hints(const HandwritingHintsQueryResult& value);
};

} // namespace webbind