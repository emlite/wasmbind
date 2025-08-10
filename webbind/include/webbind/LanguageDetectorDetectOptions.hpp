#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class AbortSignal;

/// Dictionary type LanguageDetectorDetectOptions
class LanguageDetectorDetectOptions : public emlite::Val {
  explicit LanguageDetectorDetectOptions(Handle h) noexcept;
public:
    static LanguageDetectorDetectOptions take_ownership(Handle h) noexcept;
    explicit LanguageDetectorDetectOptions(const emlite::Val &val) noexcept;
    LanguageDetectorDetectOptions() noexcept;
    [[nodiscard]] LanguageDetectorDetectOptions clone() const noexcept;
    /// Getter of the `signal` attribute.
    [[nodiscard]] AbortSignal signal() const;
    /// Setter of the `signal` attribute.
    void signal(const AbortSignal& value);
};

} // namespace webbind