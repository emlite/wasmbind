#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Interface ResizeObserverSize
/// [`ResizeObserverSize`](https://developer.mozilla.org/en-US/docs/Web/API/ResizeObserverSize)
class ResizeObserverSize : public emlite::Val {
    explicit ResizeObserverSize(Handle h) noexcept;
public:
    explicit ResizeObserverSize(const emlite::Val &val) noexcept;
    static ResizeObserverSize take_ownership(Handle h) noexcept;
    [[nodiscard]] ResizeObserverSize clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`ResizeObserverSize.inlineSize`](https://developer.mozilla.org/en-US/docs/Web/API/ResizeObserverSize/inlineSize)
    /// [`ResizeObserverSize.inlineSize`](https://developer.mozilla.org/en-US/docs/Web/API/ResizeObserverSize/inlineSize)
    [[nodiscard]] double inlineSize() const;
    /// [`ResizeObserverSize.blockSize`](https://developer.mozilla.org/en-US/docs/Web/API/ResizeObserverSize/blockSize)
    /// [`ResizeObserverSize.blockSize`](https://developer.mozilla.org/en-US/docs/Web/API/ResizeObserverSize/blockSize)
    [[nodiscard]] double blockSize() const;
};

} // namespace webbind