#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "UIEventInit.hpp"

namespace webbind {

/// Dictionary type InputEventInit
/// [`InputEventInit`](https://developer.mozilla.org/en-US/docs/Web/API/InputEventInit)
class InputEventInit : public UIEventInit {
  explicit InputEventInit(Handle h) noexcept;
public:
    static InputEventInit take_ownership(Handle h) noexcept;
    explicit InputEventInit(const emlite::Val &val) noexcept;
    InputEventInit() noexcept;
    [[nodiscard]] InputEventInit clone() const noexcept;
    [[nodiscard]] jsbind::String data() const;
    void data(const jsbind::String& value);
    [[nodiscard]] bool isComposing() const;
    void isComposing(bool value);
    [[nodiscard]] jsbind::String inputType() const;
    void inputType(const jsbind::String& value);
};

} // namespace webbind