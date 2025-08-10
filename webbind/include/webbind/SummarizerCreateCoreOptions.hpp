#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type SummarizerCreateCoreOptions
/// [`SummarizerCreateCoreOptions`](https://developer.mozilla.org/en-US/docs/Web/API/SummarizerCreateCoreOptions)
class SummarizerCreateCoreOptions : public emlite::Val {
  explicit SummarizerCreateCoreOptions(Handle h) noexcept;
public:
    static SummarizerCreateCoreOptions take_ownership(Handle h) noexcept;
    explicit SummarizerCreateCoreOptions(const emlite::Val &val) noexcept;
    SummarizerCreateCoreOptions() noexcept;
    [[nodiscard]] SummarizerCreateCoreOptions clone() const noexcept;
    [[nodiscard]] SummarizerType type() const;
    void type(const SummarizerType& value);
    [[nodiscard]] SummarizerFormat format() const;
    void format(const SummarizerFormat& value);
    [[nodiscard]] SummarizerLength length() const;
    void length(const SummarizerLength& value);
    [[nodiscard]] jsbind::TypedArray<jsbind::String> expectedInputLanguages() const;
    void expectedInputLanguages(const jsbind::TypedArray<jsbind::String>& value);
    [[nodiscard]] jsbind::TypedArray<jsbind::String> expectedContextLanguages() const;
    void expectedContextLanguages(const jsbind::TypedArray<jsbind::String>& value);
    [[nodiscard]] jsbind::String outputLanguage() const;
    void outputLanguage(const jsbind::String& value);
};

} // namespace webbind