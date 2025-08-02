#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "enums.hpp"

class DOMRect;


/// The VirtualKeyboard class.
/// [`VirtualKeyboard`](https://developer.mozilla.org/en-US/docs/Web/API/VirtualKeyboard)
class VirtualKeyboard : public EventTarget {
    explicit VirtualKeyboard(Handle h) noexcept;

public:
    explicit VirtualKeyboard(const emlite::Val &val) noexcept;
    static VirtualKeyboard take_ownership(Handle h) noexcept;

    [[nodiscard]] VirtualKeyboard clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The show method.
    /// [`VirtualKeyboard.show`](https://developer.mozilla.org/en-US/docs/Web/API/VirtualKeyboard/show)
    jsbind::Undefined show();
    /// The hide method.
    /// [`VirtualKeyboard.hide`](https://developer.mozilla.org/en-US/docs/Web/API/VirtualKeyboard/hide)
    jsbind::Undefined hide();
    /// Getter of the `boundingRect` attribute.
    /// [`VirtualKeyboard.boundingRect`](https://developer.mozilla.org/en-US/docs/Web/API/VirtualKeyboard/boundingRect)
    [[nodiscard]] DOMRect boundingRect() const;
    /// Getter of the `overlaysContent` attribute.
    /// [`VirtualKeyboard.overlaysContent`](https://developer.mozilla.org/en-US/docs/Web/API/VirtualKeyboard/overlaysContent)
    [[nodiscard]] bool overlaysContent() const;
    /// Setter of the `overlaysContent` attribute.
    /// [`VirtualKeyboard.overlaysContent`](https://developer.mozilla.org/en-US/docs/Web/API/VirtualKeyboard/overlaysContent)
    void overlaysContent(bool value);
    /// Getter of the `ongeometrychange` attribute.
    /// [`VirtualKeyboard.ongeometrychange`](https://developer.mozilla.org/en-US/docs/Web/API/VirtualKeyboard/ongeometrychange)
    [[nodiscard]] jsbind::Any ongeometrychange() const;
    /// Setter of the `ongeometrychange` attribute.
    /// [`VirtualKeyboard.ongeometrychange`](https://developer.mozilla.org/en-US/docs/Web/API/VirtualKeyboard/ongeometrychange)
    void ongeometrychange(const jsbind::Any& value);
};

