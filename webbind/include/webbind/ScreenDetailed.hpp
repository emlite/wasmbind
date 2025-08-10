#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "Screen.hpp"

namespace webbind {

/// Interface ScreenDetailed
/// [`ScreenDetailed`](https://developer.mozilla.org/en-US/docs/Web/API/ScreenDetailed)
class ScreenDetailed : public Screen {
    explicit ScreenDetailed(Handle h) noexcept;
public:
    explicit ScreenDetailed(const emlite::Val &val) noexcept;
    static ScreenDetailed take_ownership(Handle h) noexcept;
    [[nodiscard]] ScreenDetailed clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`ScreenDetailed.availLeft`](https://developer.mozilla.org/en-US/docs/Web/API/ScreenDetailed/availLeft)
    /// [`ScreenDetailed.availLeft`](https://developer.mozilla.org/en-US/docs/Web/API/ScreenDetailed/availLeft)
    [[nodiscard]] long availLeft() const;
    /// [`ScreenDetailed.availTop`](https://developer.mozilla.org/en-US/docs/Web/API/ScreenDetailed/availTop)
    /// [`ScreenDetailed.availTop`](https://developer.mozilla.org/en-US/docs/Web/API/ScreenDetailed/availTop)
    [[nodiscard]] long availTop() const;
    /// [`ScreenDetailed.left`](https://developer.mozilla.org/en-US/docs/Web/API/ScreenDetailed/left)
    /// [`ScreenDetailed.left`](https://developer.mozilla.org/en-US/docs/Web/API/ScreenDetailed/left)
    [[nodiscard]] long left() const;
    /// [`ScreenDetailed.top`](https://developer.mozilla.org/en-US/docs/Web/API/ScreenDetailed/top)
    /// [`ScreenDetailed.top`](https://developer.mozilla.org/en-US/docs/Web/API/ScreenDetailed/top)
    [[nodiscard]] long top() const;
    /// [`ScreenDetailed.isPrimary`](https://developer.mozilla.org/en-US/docs/Web/API/ScreenDetailed/isPrimary)
    /// [`ScreenDetailed.isPrimary`](https://developer.mozilla.org/en-US/docs/Web/API/ScreenDetailed/isPrimary)
    [[nodiscard]] bool isPrimary() const;
    /// [`ScreenDetailed.isInternal`](https://developer.mozilla.org/en-US/docs/Web/API/ScreenDetailed/isInternal)
    /// [`ScreenDetailed.isInternal`](https://developer.mozilla.org/en-US/docs/Web/API/ScreenDetailed/isInternal)
    [[nodiscard]] bool isInternal() const;
    /// [`ScreenDetailed.devicePixelRatio`](https://developer.mozilla.org/en-US/docs/Web/API/ScreenDetailed/devicePixelRatio)
    /// [`ScreenDetailed.devicePixelRatio`](https://developer.mozilla.org/en-US/docs/Web/API/ScreenDetailed/devicePixelRatio)
    [[nodiscard]] float devicePixelRatio() const;
    /// [`ScreenDetailed.label`](https://developer.mozilla.org/en-US/docs/Web/API/ScreenDetailed/label)
    /// [`ScreenDetailed.label`](https://developer.mozilla.org/en-US/docs/Web/API/ScreenDetailed/label)
    [[nodiscard]] jsbind::String label() const;
};

} // namespace webbind