#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type LanguageDetectorCreateCoreOptions
/// [`LanguageDetectorCreateCoreOptions`](https://developer.mozilla.org/en-US/docs/Web/API/LanguageDetectorCreateCoreOptions)
class LanguageDetectorCreateCoreOptions : public emlite::Val {
  explicit LanguageDetectorCreateCoreOptions(Handle h) noexcept;
public:
    static LanguageDetectorCreateCoreOptions take_ownership(Handle h) noexcept;
    explicit LanguageDetectorCreateCoreOptions(const emlite::Val &val) noexcept;
    LanguageDetectorCreateCoreOptions() noexcept;
    [[nodiscard]] LanguageDetectorCreateCoreOptions clone() const noexcept;
    [[nodiscard]] jsbind::TypedArray<jsbind::String> expectedInputLanguages() const;
    void expectedInputLanguages(const jsbind::TypedArray<jsbind::String>& value);
};

} // namespace webbind