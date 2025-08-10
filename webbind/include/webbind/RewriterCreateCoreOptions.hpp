#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type RewriterCreateCoreOptions
/// [`RewriterCreateCoreOptions`](https://developer.mozilla.org/en-US/docs/Web/API/RewriterCreateCoreOptions)
class RewriterCreateCoreOptions : public emlite::Val {
  explicit RewriterCreateCoreOptions(Handle h) noexcept;
public:
    static RewriterCreateCoreOptions take_ownership(Handle h) noexcept;
    explicit RewriterCreateCoreOptions(const emlite::Val &val) noexcept;
    RewriterCreateCoreOptions() noexcept;
    [[nodiscard]] RewriterCreateCoreOptions clone() const noexcept;
    [[nodiscard]] RewriterTone tone() const;
    void tone(const RewriterTone& value);
    [[nodiscard]] RewriterFormat format() const;
    void format(const RewriterFormat& value);
    [[nodiscard]] RewriterLength length() const;
    void length(const RewriterLength& value);
    [[nodiscard]] jsbind::TypedArray<jsbind::String> expectedInputLanguages() const;
    void expectedInputLanguages(const jsbind::TypedArray<jsbind::String>& value);
    [[nodiscard]] jsbind::TypedArray<jsbind::String> expectedContextLanguages() const;
    void expectedContextLanguages(const jsbind::TypedArray<jsbind::String>& value);
    [[nodiscard]] jsbind::String outputLanguage() const;
    void outputLanguage(const jsbind::String& value);
};

} // namespace webbind