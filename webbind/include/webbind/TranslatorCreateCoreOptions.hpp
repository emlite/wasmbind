#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type TranslatorCreateCoreOptions
class TranslatorCreateCoreOptions : public emlite::Val {
  explicit TranslatorCreateCoreOptions(Handle h) noexcept;
public:
    static TranslatorCreateCoreOptions take_ownership(Handle h) noexcept;
    explicit TranslatorCreateCoreOptions(const emlite::Val &val) noexcept;
    TranslatorCreateCoreOptions() noexcept;
    [[nodiscard]] TranslatorCreateCoreOptions clone() const noexcept;
    /// Getter of the `sourceLanguage` attribute.
    [[nodiscard]] jsbind::String sourceLanguage() const;
    /// Setter of the `sourceLanguage` attribute.
    void sourceLanguage(const jsbind::String& value);
    /// Getter of the `targetLanguage` attribute.
    [[nodiscard]] jsbind::String targetLanguage() const;
    /// Setter of the `targetLanguage` attribute.
    void targetLanguage(const jsbind::String& value);
};

} // namespace webbind