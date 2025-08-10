#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class AbortSignal;

/// Dictionary type TranslatorTranslateOptions
class TranslatorTranslateOptions : public emlite::Val {
  explicit TranslatorTranslateOptions(Handle h) noexcept;
public:
    static TranslatorTranslateOptions take_ownership(Handle h) noexcept;
    explicit TranslatorTranslateOptions(const emlite::Val &val) noexcept;
    TranslatorTranslateOptions() noexcept;
    [[nodiscard]] TranslatorTranslateOptions clone() const noexcept;
    /// Getter of the `signal` attribute.
    [[nodiscard]] AbortSignal signal() const;
    /// Setter of the `signal` attribute.
    void signal(const AbortSignal& value);
};

} // namespace webbind