#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "LanguageDetectorCreateCoreOptions.hpp"

namespace webbind {

class AbortSignal;

/// Dictionary type LanguageDetectorCreateOptions
/// [`LanguageDetectorCreateOptions`](https://developer.mozilla.org/en-US/docs/Web/API/LanguageDetectorCreateOptions)
class LanguageDetectorCreateOptions : public LanguageDetectorCreateCoreOptions {
  explicit LanguageDetectorCreateOptions(Handle h) noexcept;
public:
    static LanguageDetectorCreateOptions take_ownership(Handle h) noexcept;
    explicit LanguageDetectorCreateOptions(const emlite::Val &val) noexcept;
    LanguageDetectorCreateOptions() noexcept;
    [[nodiscard]] LanguageDetectorCreateOptions clone() const noexcept;
    [[nodiscard]] AbortSignal signal() const;
    void signal(const AbortSignal& value);
    [[nodiscard]] jsbind::Function monitor() const;
    void monitor(const jsbind::Function& value);
};

} // namespace webbind