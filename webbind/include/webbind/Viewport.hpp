#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class DOMRect;


/// The Viewport class.
/// [`Viewport`](https://developer.mozilla.org/en-US/docs/Web/API/Viewport)
class Viewport : public emlite::Val {
    explicit Viewport(Handle h) noexcept;

public:
    explicit Viewport(const emlite::Val &val) noexcept;
    static Viewport take_ownership(Handle h) noexcept;

    [[nodiscard]] Viewport clone() const noexcept;
    /// Getter of the `segments` attribute.
    /// [`Viewport.segments`](https://developer.mozilla.org/en-US/docs/Web/API/Viewport/segments)
    [[nodiscard]] jsbind::TypedArray<DOMRect> segments() const;
};

