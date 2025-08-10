#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "TranslatorCreateCoreOptions.hpp"

namespace webbind {

class AbortSignal;

/// Dictionary type TranslatorCreateOptions
class TranslatorCreateOptions : public TranslatorCreateCoreOptions {
  explicit TranslatorCreateOptions(Handle h) noexcept;
public:
    static TranslatorCreateOptions take_ownership(Handle h) noexcept;
    explicit TranslatorCreateOptions(const emlite::Val &val) noexcept;
    TranslatorCreateOptions() noexcept;
    [[nodiscard]] TranslatorCreateOptions clone() const noexcept;
    /// Getter of the `signal` attribute.
    [[nodiscard]] AbortSignal signal() const;
    /// Setter of the `signal` attribute.
    void signal(const AbortSignal& value);
    /// Getter of the `monitor` attribute.
    [[nodiscard]] jsbind::Function monitor() const;
    /// Setter of the `monitor` attribute.
    void monitor(const jsbind::Function& value);
};

} // namespace webbind