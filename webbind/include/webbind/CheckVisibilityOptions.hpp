#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type CheckVisibilityOptions
class CheckVisibilityOptions : public emlite::Val {
  explicit CheckVisibilityOptions(Handle h) noexcept;
public:
    static CheckVisibilityOptions take_ownership(Handle h) noexcept;
    explicit CheckVisibilityOptions(const emlite::Val &val) noexcept;
    CheckVisibilityOptions() noexcept;
    [[nodiscard]] CheckVisibilityOptions clone() const noexcept;
    /// Getter of the `checkOpacity` attribute.
    [[nodiscard]] bool checkOpacity() const;
    /// Setter of the `checkOpacity` attribute.
    void checkOpacity(bool value);
    /// Getter of the `checkVisibilityCSS` attribute.
    [[nodiscard]] bool checkVisibilityCSS() const;
    /// Setter of the `checkVisibilityCSS` attribute.
    void checkVisibilityCSS(bool value);
    /// Getter of the `contentVisibilityAuto` attribute.
    [[nodiscard]] bool contentVisibilityAuto() const;
    /// Setter of the `contentVisibilityAuto` attribute.
    void contentVisibilityAuto(bool value);
    /// Getter of the `opacityProperty` attribute.
    [[nodiscard]] bool opacityProperty() const;
    /// Setter of the `opacityProperty` attribute.
    void opacityProperty(bool value);
    /// Getter of the `visibilityProperty` attribute.
    [[nodiscard]] bool visibilityProperty() const;
    /// Setter of the `visibilityProperty` attribute.
    void visibilityProperty(bool value);
};

} // namespace webbind