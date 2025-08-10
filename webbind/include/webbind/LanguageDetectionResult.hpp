#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type LanguageDetectionResult
class LanguageDetectionResult : public emlite::Val {
  explicit LanguageDetectionResult(Handle h) noexcept;
public:
    static LanguageDetectionResult take_ownership(Handle h) noexcept;
    explicit LanguageDetectionResult(const emlite::Val &val) noexcept;
    LanguageDetectionResult() noexcept;
    [[nodiscard]] LanguageDetectionResult clone() const noexcept;
    /// Getter of the `detectedLanguage` attribute.
    [[nodiscard]] jsbind::String detectedLanguage() const;
    /// Setter of the `detectedLanguage` attribute.
    void detectedLanguage(const jsbind::String& value);
    /// Getter of the `confidence` attribute.
    [[nodiscard]] double confidence() const;
    /// Setter of the `confidence` attribute.
    void confidence(double value);
};

} // namespace webbind