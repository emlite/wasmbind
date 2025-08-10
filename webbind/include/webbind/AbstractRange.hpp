#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class Node;

/// Interface AbstractRange
/// [`AbstractRange`](https://developer.mozilla.org/en-US/docs/Web/API/AbstractRange)
class AbstractRange : public emlite::Val {
    explicit AbstractRange(Handle h) noexcept;
public:
    explicit AbstractRange(const emlite::Val &val) noexcept;
    static AbstractRange take_ownership(Handle h) noexcept;
    [[nodiscard]] AbstractRange clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`AbstractRange.startContainer`](https://developer.mozilla.org/en-US/docs/Web/API/AbstractRange/startContainer)
    /// [`AbstractRange.startContainer`](https://developer.mozilla.org/en-US/docs/Web/API/AbstractRange/startContainer)
    [[nodiscard]] Node startContainer() const;
    /// [`AbstractRange.startOffset`](https://developer.mozilla.org/en-US/docs/Web/API/AbstractRange/startOffset)
    /// [`AbstractRange.startOffset`](https://developer.mozilla.org/en-US/docs/Web/API/AbstractRange/startOffset)
    [[nodiscard]] unsigned long startOffset() const;
    /// [`AbstractRange.endContainer`](https://developer.mozilla.org/en-US/docs/Web/API/AbstractRange/endContainer)
    /// [`AbstractRange.endContainer`](https://developer.mozilla.org/en-US/docs/Web/API/AbstractRange/endContainer)
    [[nodiscard]] Node endContainer() const;
    /// [`AbstractRange.endOffset`](https://developer.mozilla.org/en-US/docs/Web/API/AbstractRange/endOffset)
    /// [`AbstractRange.endOffset`](https://developer.mozilla.org/en-US/docs/Web/API/AbstractRange/endOffset)
    [[nodiscard]] unsigned long endOffset() const;
    /// [`AbstractRange.collapsed`](https://developer.mozilla.org/en-US/docs/Web/API/AbstractRange/collapsed)
    /// [`AbstractRange.collapsed`](https://developer.mozilla.org/en-US/docs/Web/API/AbstractRange/collapsed)
    [[nodiscard]] bool collapsed() const;
};

} // namespace webbind