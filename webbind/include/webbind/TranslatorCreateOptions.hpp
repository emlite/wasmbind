#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "TranslatorCreateCoreOptions.hpp"

namespace webbind {

class AbortSignal;

/// Dictionary type TranslatorCreateOptions
/// [`TranslatorCreateOptions`](https://developer.mozilla.org/en-US/docs/Web/API/TranslatorCreateOptions)
class TranslatorCreateOptions : public TranslatorCreateCoreOptions {
  explicit TranslatorCreateOptions(Handle h) noexcept;
public:
    static TranslatorCreateOptions take_ownership(Handle h) noexcept;
    explicit TranslatorCreateOptions(const emlite::Val &val) noexcept;
    TranslatorCreateOptions() noexcept;
    [[nodiscard]] TranslatorCreateOptions clone() const noexcept;
    [[nodiscard]] AbortSignal signal() const;
    void signal(const AbortSignal& value);
    [[nodiscard]] jsbind::Function monitor() const;
    void monitor(const jsbind::Function& value);
};

} // namespace webbind