#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class AbortSignal;

/// Dictionary type ColorSelectionOptions
/// [`ColorSelectionOptions`](https://developer.mozilla.org/en-US/docs/Web/API/ColorSelectionOptions)
class ColorSelectionOptions : public emlite::Val {
  explicit ColorSelectionOptions(Handle h) noexcept;
public:
    static ColorSelectionOptions take_ownership(Handle h) noexcept;
    explicit ColorSelectionOptions(const emlite::Val &val) noexcept;
    ColorSelectionOptions() noexcept;
    [[nodiscard]] ColorSelectionOptions clone() const noexcept;
    [[nodiscard]] AbortSignal signal() const;
    void signal(const AbortSignal& value);
};

} // namespace webbind