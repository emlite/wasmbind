#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type TextDecoderOptions
class TextDecoderOptions : public emlite::Val {
  explicit TextDecoderOptions(Handle h) noexcept;
public:
    static TextDecoderOptions take_ownership(Handle h) noexcept;
    explicit TextDecoderOptions(const emlite::Val &val) noexcept;
    TextDecoderOptions() noexcept;
    [[nodiscard]] TextDecoderOptions clone() const noexcept;
    /// Getter of the `fatal` attribute.
    [[nodiscard]] bool fatal() const;
    /// Setter of the `fatal` attribute.
    void fatal(bool value);
    /// Getter of the `ignoreBOM` attribute.
    [[nodiscard]] bool ignoreBOM() const;
    /// Setter of the `ignoreBOM` attribute.
    void ignoreBOM(bool value);
};

} // namespace webbind