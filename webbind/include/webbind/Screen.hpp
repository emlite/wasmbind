#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class ScreenOrientation;

/// Interface Screen
/// [`Screen`](https://developer.mozilla.org/en-US/docs/Web/API/Screen)
class Screen : public emlite::Val {
    explicit Screen(Handle h) noexcept;
public:
    explicit Screen(const emlite::Val &val) noexcept;
    static Screen take_ownership(Handle h) noexcept;
    [[nodiscard]] Screen clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`Screen.availWidth`](https://developer.mozilla.org/en-US/docs/Web/API/Screen/availWidth)
    /// [`Screen.availWidth`](https://developer.mozilla.org/en-US/docs/Web/API/Screen/availWidth)
    [[nodiscard]] long availWidth() const;
    /// [`Screen.availHeight`](https://developer.mozilla.org/en-US/docs/Web/API/Screen/availHeight)
    /// [`Screen.availHeight`](https://developer.mozilla.org/en-US/docs/Web/API/Screen/availHeight)
    [[nodiscard]] long availHeight() const;
    /// [`Screen.width`](https://developer.mozilla.org/en-US/docs/Web/API/Screen/width)
    /// [`Screen.width`](https://developer.mozilla.org/en-US/docs/Web/API/Screen/width)
    [[nodiscard]] long width() const;
    /// [`Screen.height`](https://developer.mozilla.org/en-US/docs/Web/API/Screen/height)
    /// [`Screen.height`](https://developer.mozilla.org/en-US/docs/Web/API/Screen/height)
    [[nodiscard]] long height() const;
    /// [`Screen.colorDepth`](https://developer.mozilla.org/en-US/docs/Web/API/Screen/colorDepth)
    /// [`Screen.colorDepth`](https://developer.mozilla.org/en-US/docs/Web/API/Screen/colorDepth)
    [[nodiscard]] unsigned long colorDepth() const;
    /// [`Screen.pixelDepth`](https://developer.mozilla.org/en-US/docs/Web/API/Screen/pixelDepth)
    /// [`Screen.pixelDepth`](https://developer.mozilla.org/en-US/docs/Web/API/Screen/pixelDepth)
    [[nodiscard]] unsigned long pixelDepth() const;
    /// [`Screen.orientation`](https://developer.mozilla.org/en-US/docs/Web/API/Screen/orientation)
    /// [`Screen.orientation`](https://developer.mozilla.org/en-US/docs/Web/API/Screen/orientation)
    [[nodiscard]] ScreenOrientation orientation() const;
    /// [`Screen.isExtended`](https://developer.mozilla.org/en-US/docs/Web/API/Screen/isExtended)
    /// [`Screen.isExtended`](https://developer.mozilla.org/en-US/docs/Web/API/Screen/isExtended)
    [[nodiscard]] bool isExtended() const;
    /// [`Screen.onchange`](https://developer.mozilla.org/en-US/docs/Web/API/Screen/onchange)
    /// [`Screen.onchange`](https://developer.mozilla.org/en-US/docs/Web/API/Screen/onchange)
    [[nodiscard]] jsbind::Any onchange() const;
    /// Setter of the `onchange` attribute.
    /// [`Screen.onchange`](https://developer.mozilla.org/en-US/docs/Web/API/Screen/onchange)
    void onchange(const jsbind::Any& value);
};

} // namespace webbind