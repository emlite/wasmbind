#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type ClipboardUnsanitizedFormats
class ClipboardUnsanitizedFormats : public emlite::Val {
  explicit ClipboardUnsanitizedFormats(Handle h) noexcept;
public:
    static ClipboardUnsanitizedFormats take_ownership(Handle h) noexcept;
    explicit ClipboardUnsanitizedFormats(const emlite::Val &val) noexcept;
    ClipboardUnsanitizedFormats() noexcept;
    [[nodiscard]] ClipboardUnsanitizedFormats clone() const noexcept;
    /// Getter of the `unsanitized` attribute.
    [[nodiscard]] jsbind::TypedArray<jsbind::String> unsanitized() const;
    /// Setter of the `unsanitized` attribute.
    void unsanitized(const jsbind::TypedArray<jsbind::String>& value);
};

} // namespace webbind