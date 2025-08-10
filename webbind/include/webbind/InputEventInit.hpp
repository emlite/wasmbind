#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "UIEventInit.hpp"

namespace webbind {

/// Dictionary type InputEventInit
class InputEventInit : public UIEventInit {
  explicit InputEventInit(Handle h) noexcept;
public:
    static InputEventInit take_ownership(Handle h) noexcept;
    explicit InputEventInit(const emlite::Val &val) noexcept;
    InputEventInit() noexcept;
    [[nodiscard]] InputEventInit clone() const noexcept;
    /// Getter of the `data` attribute.
    [[nodiscard]] jsbind::String data() const;
    /// Setter of the `data` attribute.
    void data(const jsbind::String& value);
    /// Getter of the `isComposing` attribute.
    [[nodiscard]] bool isComposing() const;
    /// Setter of the `isComposing` attribute.
    void isComposing(bool value);
    /// Getter of the `inputType` attribute.
    [[nodiscard]] jsbind::String inputType() const;
    /// Setter of the `inputType` attribute.
    void inputType(const jsbind::String& value);
};

} // namespace webbind