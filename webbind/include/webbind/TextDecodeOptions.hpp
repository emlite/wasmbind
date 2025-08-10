#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type TextDecodeOptions
class TextDecodeOptions : public emlite::Val {
  explicit TextDecodeOptions(Handle h) noexcept;
public:
    static TextDecodeOptions take_ownership(Handle h) noexcept;
    explicit TextDecodeOptions(const emlite::Val &val) noexcept;
    TextDecodeOptions() noexcept;
    [[nodiscard]] TextDecodeOptions clone() const noexcept;
    /// Getter of the `stream` attribute.
    [[nodiscard]] bool stream() const;
    /// Setter of the `stream` attribute.
    void stream(bool value);
};

} // namespace webbind