#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


/// The BarProp class.
/// [`BarProp`](https://developer.mozilla.org/en-US/docs/Web/API/BarProp)
class BarProp : public emlite::Val {
    explicit BarProp(Handle h) noexcept;

public:
    explicit BarProp(const emlite::Val &val) noexcept;
    static BarProp take_ownership(Handle h) noexcept;

    [[nodiscard]] BarProp clone() const noexcept;
    /// Getter of the `visible` attribute.
    /// [`BarProp.visible`](https://developer.mozilla.org/en-US/docs/Web/API/BarProp/visible)
    [[nodiscard]] bool visible() const;
};

