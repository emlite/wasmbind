#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Screen.hpp"
#include "enums.hpp"


/// The ScreenDetailed class.
/// [`ScreenDetailed`](https://developer.mozilla.org/en-US/docs/Web/API/ScreenDetailed)
class ScreenDetailed : public Screen {
    explicit ScreenDetailed(Handle h) noexcept;

public:
    explicit ScreenDetailed(const emlite::Val &val) noexcept;
    static ScreenDetailed take_ownership(Handle h) noexcept;

    [[nodiscard]] ScreenDetailed clone() const noexcept;
    /// Getter of the `availLeft` attribute.
    /// [`ScreenDetailed.availLeft`](https://developer.mozilla.org/en-US/docs/Web/API/ScreenDetailed/availLeft)
    [[nodiscard]] long availLeft() const;
    /// Getter of the `availTop` attribute.
    /// [`ScreenDetailed.availTop`](https://developer.mozilla.org/en-US/docs/Web/API/ScreenDetailed/availTop)
    [[nodiscard]] long availTop() const;
    /// Getter of the `left` attribute.
    /// [`ScreenDetailed.left`](https://developer.mozilla.org/en-US/docs/Web/API/ScreenDetailed/left)
    [[nodiscard]] long left() const;
    /// Getter of the `top` attribute.
    /// [`ScreenDetailed.top`](https://developer.mozilla.org/en-US/docs/Web/API/ScreenDetailed/top)
    [[nodiscard]] long top() const;
    /// Getter of the `isPrimary` attribute.
    /// [`ScreenDetailed.isPrimary`](https://developer.mozilla.org/en-US/docs/Web/API/ScreenDetailed/isPrimary)
    [[nodiscard]] bool isPrimary() const;
    /// Getter of the `isInternal` attribute.
    /// [`ScreenDetailed.isInternal`](https://developer.mozilla.org/en-US/docs/Web/API/ScreenDetailed/isInternal)
    [[nodiscard]] bool isInternal() const;
    /// Getter of the `devicePixelRatio` attribute.
    /// [`ScreenDetailed.devicePixelRatio`](https://developer.mozilla.org/en-US/docs/Web/API/ScreenDetailed/devicePixelRatio)
    [[nodiscard]] float devicePixelRatio() const;
    /// Getter of the `label` attribute.
    /// [`ScreenDetailed.label`](https://developer.mozilla.org/en-US/docs/Web/API/ScreenDetailed/label)
    [[nodiscard]] jsbind::String label() const;
};

