#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type KeyboardEventInit
class KeyboardEventInit : public emlite::Val {
  explicit KeyboardEventInit(Handle h) noexcept;
public:
    static KeyboardEventInit take_ownership(Handle h) noexcept;
    explicit KeyboardEventInit(const emlite::Val &val) noexcept;
    KeyboardEventInit() noexcept;
    [[nodiscard]] KeyboardEventInit clone() const noexcept;
    /// Getter of the `charCode` attribute.
    [[nodiscard]] unsigned long charCode() const;
    /// Setter of the `charCode` attribute.
    void charCode(unsigned long value);
    /// Getter of the `keyCode` attribute.
    [[nodiscard]] unsigned long keyCode() const;
    /// Setter of the `keyCode` attribute.
    void keyCode(unsigned long value);
};

} // namespace webbind