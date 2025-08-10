#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class Node;
class DOMRect;

/// Interface CaretPosition
/// [`CaretPosition`](https://developer.mozilla.org/en-US/docs/Web/API/CaretPosition)
class CaretPosition : public emlite::Val {
    explicit CaretPosition(Handle h) noexcept;
public:
    explicit CaretPosition(const emlite::Val &val) noexcept;
    static CaretPosition take_ownership(Handle h) noexcept;
    [[nodiscard]] CaretPosition clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `offsetNode` attribute.
    /// [`CaretPosition.offsetNode`](https://developer.mozilla.org/en-US/docs/Web/API/CaretPosition/offsetNode)
    [[nodiscard]] Node offsetNode() const;
    /// Getter of the `offset` attribute.
    /// [`CaretPosition.offset`](https://developer.mozilla.org/en-US/docs/Web/API/CaretPosition/offset)
    [[nodiscard]] unsigned long offset() const;
    /// The getClientRect method.
    /// [`CaretPosition.getClientRect`](https://developer.mozilla.org/en-US/docs/Web/API/CaretPosition/getClientRect)
    DOMRect getClientRect();
};

} // namespace webbind