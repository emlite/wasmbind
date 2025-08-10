#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class AbortSignal;

/// Dictionary type TranslatorTranslateOptions
/// [`TranslatorTranslateOptions`](https://developer.mozilla.org/en-US/docs/Web/API/TranslatorTranslateOptions)
class TranslatorTranslateOptions : public emlite::Val {
  explicit TranslatorTranslateOptions(Handle h) noexcept;
public:
    static TranslatorTranslateOptions take_ownership(Handle h) noexcept;
    explicit TranslatorTranslateOptions(const emlite::Val &val) noexcept;
    TranslatorTranslateOptions() noexcept;
    [[nodiscard]] TranslatorTranslateOptions clone() const noexcept;
    [[nodiscard]] AbortSignal signal() const;
    void signal(const AbortSignal& value);
};

} // namespace webbind