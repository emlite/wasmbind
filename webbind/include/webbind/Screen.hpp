#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class ScreenOrientation;


/// The Screen class.
/// [`Screen`](https://developer.mozilla.org/en-US/docs/Web/API/Screen)
class Screen : public emlite::Val {
    explicit Screen(Handle h) noexcept;

public:
    explicit Screen(const emlite::Val &val) noexcept;
    static Screen take_ownership(Handle h) noexcept;

    [[nodiscard]] Screen clone() const noexcept;
    /// Getter of the `availWidth` attribute.
    /// [`Screen.availWidth`](https://developer.mozilla.org/en-US/docs/Web/API/Screen/availWidth)
    [[nodiscard]] long availWidth() const;
    /// Getter of the `availHeight` attribute.
    /// [`Screen.availHeight`](https://developer.mozilla.org/en-US/docs/Web/API/Screen/availHeight)
    [[nodiscard]] long availHeight() const;
    /// Getter of the `width` attribute.
    /// [`Screen.width`](https://developer.mozilla.org/en-US/docs/Web/API/Screen/width)
    [[nodiscard]] long width() const;
    /// Getter of the `height` attribute.
    /// [`Screen.height`](https://developer.mozilla.org/en-US/docs/Web/API/Screen/height)
    [[nodiscard]] long height() const;
    /// Getter of the `colorDepth` attribute.
    /// [`Screen.colorDepth`](https://developer.mozilla.org/en-US/docs/Web/API/Screen/colorDepth)
    [[nodiscard]] unsigned long colorDepth() const;
    /// Getter of the `pixelDepth` attribute.
    /// [`Screen.pixelDepth`](https://developer.mozilla.org/en-US/docs/Web/API/Screen/pixelDepth)
    [[nodiscard]] unsigned long pixelDepth() const;
    /// Getter of the `orientation` attribute.
    /// [`Screen.orientation`](https://developer.mozilla.org/en-US/docs/Web/API/Screen/orientation)
    [[nodiscard]] ScreenOrientation orientation() const;
    /// Getter of the `isExtended` attribute.
    /// [`Screen.isExtended`](https://developer.mozilla.org/en-US/docs/Web/API/Screen/isExtended)
    [[nodiscard]] bool isExtended() const;
    /// Getter of the `onchange` attribute.
    /// [`Screen.onchange`](https://developer.mozilla.org/en-US/docs/Web/API/Screen/onchange)
    [[nodiscard]] jsbind::Any onchange() const;
    /// Setter of the `onchange` attribute.
    /// [`Screen.onchange`](https://developer.mozilla.org/en-US/docs/Web/API/Screen/onchange)
    void onchange(const jsbind::Any& value);
};

