#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "enums.hpp"


/// The PictureInPictureWindow class.
/// [`PictureInPictureWindow`](https://developer.mozilla.org/en-US/docs/Web/API/PictureInPictureWindow)
class PictureInPictureWindow : public EventTarget {
    explicit PictureInPictureWindow(Handle h) noexcept;

public:
    explicit PictureInPictureWindow(const emlite::Val &val) noexcept;
    static PictureInPictureWindow take_ownership(Handle h) noexcept;

    [[nodiscard]] PictureInPictureWindow clone() const noexcept;
    /// Getter of the `width` attribute.
    /// [`PictureInPictureWindow.width`](https://developer.mozilla.org/en-US/docs/Web/API/PictureInPictureWindow/width)
    [[nodiscard]] long width() const;
    /// Getter of the `height` attribute.
    /// [`PictureInPictureWindow.height`](https://developer.mozilla.org/en-US/docs/Web/API/PictureInPictureWindow/height)
    [[nodiscard]] long height() const;
    /// Getter of the `onresize` attribute.
    /// [`PictureInPictureWindow.onresize`](https://developer.mozilla.org/en-US/docs/Web/API/PictureInPictureWindow/onresize)
    [[nodiscard]] jsbind::Any onresize() const;
    /// Setter of the `onresize` attribute.
    /// [`PictureInPictureWindow.onresize`](https://developer.mozilla.org/en-US/docs/Web/API/PictureInPictureWindow/onresize)
    void onresize(const jsbind::Any& value);
};

