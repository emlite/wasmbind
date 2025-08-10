#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type LanguageDetectorCreateCoreOptions
class LanguageDetectorCreateCoreOptions : public emlite::Val {
  explicit LanguageDetectorCreateCoreOptions(Handle h) noexcept;
public:
    static LanguageDetectorCreateCoreOptions take_ownership(Handle h) noexcept;
    explicit LanguageDetectorCreateCoreOptions(const emlite::Val &val) noexcept;
    LanguageDetectorCreateCoreOptions() noexcept;
    [[nodiscard]] LanguageDetectorCreateCoreOptions clone() const noexcept;
    /// Getter of the `expectedInputLanguages` attribute.
    [[nodiscard]] jsbind::TypedArray<jsbind::String> expectedInputLanguages() const;
    /// Setter of the `expectedInputLanguages` attribute.
    void expectedInputLanguages(const jsbind::TypedArray<jsbind::String>& value);
};

} // namespace webbind