#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type ClipboardItemOptions
class ClipboardItemOptions : public emlite::Val {
  explicit ClipboardItemOptions(Handle h) noexcept;
public:
    static ClipboardItemOptions take_ownership(Handle h) noexcept;
    explicit ClipboardItemOptions(const emlite::Val &val) noexcept;
    ClipboardItemOptions() noexcept;
    [[nodiscard]] ClipboardItemOptions clone() const noexcept;
    /// Getter of the `presentationStyle` attribute.
    [[nodiscard]] PresentationStyle presentationStyle() const;
    /// Setter of the `presentationStyle` attribute.
    void presentationStyle(const PresentationStyle& value);
};

} // namespace webbind