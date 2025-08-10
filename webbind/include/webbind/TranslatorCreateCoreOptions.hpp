#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type TranslatorCreateCoreOptions
/// [`TranslatorCreateCoreOptions`](https://developer.mozilla.org/en-US/docs/Web/API/TranslatorCreateCoreOptions)
class TranslatorCreateCoreOptions : public emlite::Val {
  explicit TranslatorCreateCoreOptions(Handle h) noexcept;
public:
    static TranslatorCreateCoreOptions take_ownership(Handle h) noexcept;
    explicit TranslatorCreateCoreOptions(const emlite::Val &val) noexcept;
    TranslatorCreateCoreOptions() noexcept;
    [[nodiscard]] TranslatorCreateCoreOptions clone() const noexcept;
    [[nodiscard]] jsbind::String sourceLanguage() const;
    void sourceLanguage(const jsbind::String& value);
    [[nodiscard]] jsbind::String targetLanguage() const;
    void targetLanguage(const jsbind::String& value);
};

} // namespace webbind