#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type KeyboardEventInit
/// [`KeyboardEventInit`](https://developer.mozilla.org/en-US/docs/Web/API/KeyboardEventInit)
class KeyboardEventInit : public emlite::Val {
  explicit KeyboardEventInit(Handle h) noexcept;
public:
    static KeyboardEventInit take_ownership(Handle h) noexcept;
    explicit KeyboardEventInit(const emlite::Val &val) noexcept;
    KeyboardEventInit() noexcept;
    [[nodiscard]] KeyboardEventInit clone() const noexcept;
    [[nodiscard]] unsigned long charCode() const;
    void charCode(unsigned long value);
    [[nodiscard]] unsigned long keyCode() const;
    void keyCode(unsigned long value);
};

} // namespace webbind