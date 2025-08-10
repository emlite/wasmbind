#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type RewriterCreateCoreOptions
class RewriterCreateCoreOptions : public emlite::Val {
  explicit RewriterCreateCoreOptions(Handle h) noexcept;
public:
    static RewriterCreateCoreOptions take_ownership(Handle h) noexcept;
    explicit RewriterCreateCoreOptions(const emlite::Val &val) noexcept;
    RewriterCreateCoreOptions() noexcept;
    [[nodiscard]] RewriterCreateCoreOptions clone() const noexcept;
    /// Getter of the `tone` attribute.
    [[nodiscard]] RewriterTone tone() const;
    /// Setter of the `tone` attribute.
    void tone(const RewriterTone& value);
    /// Getter of the `format` attribute.
    [[nodiscard]] RewriterFormat format() const;
    /// Setter of the `format` attribute.
    void format(const RewriterFormat& value);
    /// Getter of the `length` attribute.
    [[nodiscard]] RewriterLength length() const;
    /// Setter of the `length` attribute.
    void length(const RewriterLength& value);
    /// Getter of the `expectedInputLanguages` attribute.
    [[nodiscard]] jsbind::TypedArray<jsbind::String> expectedInputLanguages() const;
    /// Setter of the `expectedInputLanguages` attribute.
    void expectedInputLanguages(const jsbind::TypedArray<jsbind::String>& value);
    /// Getter of the `expectedContextLanguages` attribute.
    [[nodiscard]] jsbind::TypedArray<jsbind::String> expectedContextLanguages() const;
    /// Setter of the `expectedContextLanguages` attribute.
    void expectedContextLanguages(const jsbind::TypedArray<jsbind::String>& value);
    /// Getter of the `outputLanguage` attribute.
    [[nodiscard]] jsbind::String outputLanguage() const;
    /// Setter of the `outputLanguage` attribute.
    void outputLanguage(const jsbind::String& value);
};

} // namespace webbind