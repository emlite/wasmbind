#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


/// The CanvasGradient class.
/// [`CanvasGradient`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasGradient)
class CanvasGradient : public emlite::Val {
    explicit CanvasGradient(Handle h) noexcept;

public:
    explicit CanvasGradient(const emlite::Val &val) noexcept;
    static CanvasGradient take_ownership(Handle h) noexcept;

    [[nodiscard]] CanvasGradient clone() const noexcept;
    /// The addColorStop method.
    /// [`CanvasGradient.addColorStop`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasGradient/addColorStop)
    jsbind::Undefined addColorStop(double offset, const jsbind::String& color);
};

