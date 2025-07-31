#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


/// The ResizeObserverSize class.
/// [`ResizeObserverSize`](https://developer.mozilla.org/en-US/docs/Web/API/ResizeObserverSize)
class ResizeObserverSize : public emlite::Val {
    explicit ResizeObserverSize(Handle h) noexcept;

public:
    explicit ResizeObserverSize(const emlite::Val &val) noexcept;
    static ResizeObserverSize take_ownership(Handle h) noexcept;

    [[nodiscard]] ResizeObserverSize clone() const noexcept;
    /// Getter of the `inlineSize` attribute.
    /// [`ResizeObserverSize.inlineSize`](https://developer.mozilla.org/en-US/docs/Web/API/ResizeObserverSize/inlineSize)
    [[nodiscard]] double inlineSize() const;
    /// Getter of the `blockSize` attribute.
    /// [`ResizeObserverSize.blockSize`](https://developer.mozilla.org/en-US/docs/Web/API/ResizeObserverSize/blockSize)
    [[nodiscard]] double blockSize() const;
};

