#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class AbortSignal;

/// Dictionary type LanguageDetectorDetectOptions
/// [`LanguageDetectorDetectOptions`](https://developer.mozilla.org/en-US/docs/Web/API/LanguageDetectorDetectOptions)
class LanguageDetectorDetectOptions : public emlite::Val {
  explicit LanguageDetectorDetectOptions(Handle h) noexcept;
public:
    static LanguageDetectorDetectOptions take_ownership(Handle h) noexcept;
    explicit LanguageDetectorDetectOptions(const emlite::Val &val) noexcept;
    LanguageDetectorDetectOptions() noexcept;
    [[nodiscard]] LanguageDetectorDetectOptions clone() const noexcept;
    [[nodiscard]] AbortSignal signal() const;
    void signal(const AbortSignal& value);
};

} // namespace webbind