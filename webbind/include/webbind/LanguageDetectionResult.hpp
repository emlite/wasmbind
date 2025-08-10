#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type LanguageDetectionResult
/// [`LanguageDetectionResult`](https://developer.mozilla.org/en-US/docs/Web/API/LanguageDetectionResult)
class LanguageDetectionResult : public emlite::Val {
  explicit LanguageDetectionResult(Handle h) noexcept;
public:
    static LanguageDetectionResult take_ownership(Handle h) noexcept;
    explicit LanguageDetectionResult(const emlite::Val &val) noexcept;
    LanguageDetectionResult() noexcept;
    [[nodiscard]] LanguageDetectionResult clone() const noexcept;
    [[nodiscard]] jsbind::String detectedLanguage() const;
    void detectedLanguage(const jsbind::String& value);
    [[nodiscard]] double confidence() const;
    void confidence(double value);
};

} // namespace webbind