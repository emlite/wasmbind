#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type SummarizerCreateCoreOptions
class SummarizerCreateCoreOptions : public emlite::Val {
  explicit SummarizerCreateCoreOptions(Handle h) noexcept;
public:
    static SummarizerCreateCoreOptions take_ownership(Handle h) noexcept;
    explicit SummarizerCreateCoreOptions(const emlite::Val &val) noexcept;
    SummarizerCreateCoreOptions() noexcept;
    [[nodiscard]] SummarizerCreateCoreOptions clone() const noexcept;
    /// Getter of the `type` attribute.
    [[nodiscard]] SummarizerType type() const;
    /// Setter of the `type` attribute.
    void type(const SummarizerType& value);
    /// Getter of the `format` attribute.
    [[nodiscard]] SummarizerFormat format() const;
    /// Setter of the `format` attribute.
    void format(const SummarizerFormat& value);
    /// Getter of the `length` attribute.
    [[nodiscard]] SummarizerLength length() const;
    /// Setter of the `length` attribute.
    void length(const SummarizerLength& value);
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