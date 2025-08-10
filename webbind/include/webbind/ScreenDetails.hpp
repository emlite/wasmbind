#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventTarget.hpp"

namespace webbind {

class ScreenDetailed;

/// Interface ScreenDetails
/// [`ScreenDetails`](https://developer.mozilla.org/en-US/docs/Web/API/ScreenDetails)
class ScreenDetails : public EventTarget {
    explicit ScreenDetails(Handle h) noexcept;
public:
    explicit ScreenDetails(const emlite::Val &val) noexcept;
    static ScreenDetails take_ownership(Handle h) noexcept;
    [[nodiscard]] ScreenDetails clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`ScreenDetails.screens`](https://developer.mozilla.org/en-US/docs/Web/API/ScreenDetails/screens)
    /// [`ScreenDetails.screens`](https://developer.mozilla.org/en-US/docs/Web/API/ScreenDetails/screens)
    [[nodiscard]] jsbind::TypedArray<ScreenDetailed> screens() const;
    /// [`ScreenDetails.currentScreen`](https://developer.mozilla.org/en-US/docs/Web/API/ScreenDetails/currentScreen)
    /// [`ScreenDetails.currentScreen`](https://developer.mozilla.org/en-US/docs/Web/API/ScreenDetails/currentScreen)
    [[nodiscard]] ScreenDetailed currentScreen() const;
    /// [`ScreenDetails.onscreenschange`](https://developer.mozilla.org/en-US/docs/Web/API/ScreenDetails/onscreenschange)
    /// [`ScreenDetails.onscreenschange`](https://developer.mozilla.org/en-US/docs/Web/API/ScreenDetails/onscreenschange)
    [[nodiscard]] jsbind::Any onscreenschange() const;
    /// Setter of the `onscreenschange` attribute.
    /// [`ScreenDetails.onscreenschange`](https://developer.mozilla.org/en-US/docs/Web/API/ScreenDetails/onscreenschange)
    void onscreenschange(const jsbind::Any& value);
    /// [`ScreenDetails.oncurrentscreenchange`](https://developer.mozilla.org/en-US/docs/Web/API/ScreenDetails/oncurrentscreenchange)
    /// [`ScreenDetails.oncurrentscreenchange`](https://developer.mozilla.org/en-US/docs/Web/API/ScreenDetails/oncurrentscreenchange)
    [[nodiscard]] jsbind::Any oncurrentscreenchange() const;
    /// Setter of the `oncurrentscreenchange` attribute.
    /// [`ScreenDetails.oncurrentscreenchange`](https://developer.mozilla.org/en-US/docs/Web/API/ScreenDetails/oncurrentscreenchange)
    void oncurrentscreenchange(const jsbind::Any& value);
};

} // namespace webbind