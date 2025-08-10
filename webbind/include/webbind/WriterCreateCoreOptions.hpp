#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type WriterCreateCoreOptions
class WriterCreateCoreOptions : public emlite::Val {
  explicit WriterCreateCoreOptions(Handle h) noexcept;
public:
    static WriterCreateCoreOptions take_ownership(Handle h) noexcept;
    explicit WriterCreateCoreOptions(const emlite::Val &val) noexcept;
    WriterCreateCoreOptions() noexcept;
    [[nodiscard]] WriterCreateCoreOptions clone() const noexcept;
    /// Getter of the `tone` attribute.
    [[nodiscard]] WriterTone tone() const;
    /// Setter of the `tone` attribute.
    void tone(const WriterTone& value);
    /// Getter of the `format` attribute.
    [[nodiscard]] WriterFormat format() const;
    /// Setter of the `format` attribute.
    void format(const WriterFormat& value);
    /// Getter of the `length` attribute.
    [[nodiscard]] WriterLength length() const;
    /// Setter of the `length` attribute.
    void length(const WriterLength& value);
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