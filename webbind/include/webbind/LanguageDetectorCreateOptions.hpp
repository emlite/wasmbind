#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "LanguageDetectorCreateCoreOptions.hpp"

namespace webbind {

class AbortSignal;

/// Dictionary type LanguageDetectorCreateOptions
class LanguageDetectorCreateOptions : public LanguageDetectorCreateCoreOptions {
  explicit LanguageDetectorCreateOptions(Handle h) noexcept;
public:
    static LanguageDetectorCreateOptions take_ownership(Handle h) noexcept;
    explicit LanguageDetectorCreateOptions(const emlite::Val &val) noexcept;
    LanguageDetectorCreateOptions() noexcept;
    [[nodiscard]] LanguageDetectorCreateOptions clone() const noexcept;
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