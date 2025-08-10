#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type WriterCreateCoreOptions
/// [`WriterCreateCoreOptions`](https://developer.mozilla.org/en-US/docs/Web/API/WriterCreateCoreOptions)
class WriterCreateCoreOptions : public emlite::Val {
  explicit WriterCreateCoreOptions(Handle h) noexcept;
public:
    static WriterCreateCoreOptions take_ownership(Handle h) noexcept;
    explicit WriterCreateCoreOptions(const emlite::Val &val) noexcept;
    WriterCreateCoreOptions() noexcept;
    [[nodiscard]] WriterCreateCoreOptions clone() const noexcept;
    [[nodiscard]] WriterTone tone() const;
    void tone(const WriterTone& value);
    [[nodiscard]] WriterFormat format() const;
    void format(const WriterFormat& value);
    [[nodiscard]] WriterLength length() const;
    void length(const WriterLength& value);
    [[nodiscard]] jsbind::TypedArray<jsbind::String> expectedInputLanguages() const;
    void expectedInputLanguages(const jsbind::TypedArray<jsbind::String>& value);
    [[nodiscard]] jsbind::TypedArray<jsbind::String> expectedContextLanguages() const;
    void expectedContextLanguages(const jsbind::TypedArray<jsbind::String>& value);
    [[nodiscard]] jsbind::String outputLanguage() const;
    void outputLanguage(const jsbind::String& value);
};

} // namespace webbind