#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type CheckVisibilityOptions
/// [`CheckVisibilityOptions`](https://developer.mozilla.org/en-US/docs/Web/API/CheckVisibilityOptions)
class CheckVisibilityOptions : public emlite::Val {
  explicit CheckVisibilityOptions(Handle h) noexcept;
public:
    static CheckVisibilityOptions take_ownership(Handle h) noexcept;
    explicit CheckVisibilityOptions(const emlite::Val &val) noexcept;
    CheckVisibilityOptions() noexcept;
    [[nodiscard]] CheckVisibilityOptions clone() const noexcept;
    [[nodiscard]] bool checkOpacity() const;
    void checkOpacity(bool value);
    [[nodiscard]] bool checkVisibilityCSS() const;
    void checkVisibilityCSS(bool value);
    [[nodiscard]] bool contentVisibilityAuto() const;
    void contentVisibilityAuto(bool value);
    [[nodiscard]] bool opacityProperty() const;
    void opacityProperty(bool value);
    [[nodiscard]] bool visibilityProperty() const;
    void visibilityProperty(bool value);
};

} // namespace webbind