#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class AbortSignal;

/// Dictionary type ColorSelectionOptions
class ColorSelectionOptions : public emlite::Val {
  explicit ColorSelectionOptions(Handle h) noexcept;
public:
    static ColorSelectionOptions take_ownership(Handle h) noexcept;
    explicit ColorSelectionOptions(const emlite::Val &val) noexcept;
    ColorSelectionOptions() noexcept;
    [[nodiscard]] ColorSelectionOptions clone() const noexcept;
    /// Getter of the `signal` attribute.
    [[nodiscard]] AbortSignal signal() const;
    /// Setter of the `signal` attribute.
    void signal(const AbortSignal& value);
};

} // namespace webbind