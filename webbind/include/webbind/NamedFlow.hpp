#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventTarget.hpp"

namespace webbind {

class Element;
class Node;

/// Interface NamedFlow
/// [`NamedFlow`](https://developer.mozilla.org/en-US/docs/Web/API/NamedFlow)
class NamedFlow : public EventTarget {
    explicit NamedFlow(Handle h) noexcept;
public:
    explicit NamedFlow(const emlite::Val &val) noexcept;
    static NamedFlow take_ownership(Handle h) noexcept;
    [[nodiscard]] NamedFlow clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`NamedFlow.name`](https://developer.mozilla.org/en-US/docs/Web/API/NamedFlow/name)
    /// [`NamedFlow.name`](https://developer.mozilla.org/en-US/docs/Web/API/NamedFlow/name)
    [[nodiscard]] jsbind::String name() const;
    /// [`NamedFlow.overset`](https://developer.mozilla.org/en-US/docs/Web/API/NamedFlow/overset)
    /// [`NamedFlow.overset`](https://developer.mozilla.org/en-US/docs/Web/API/NamedFlow/overset)
    [[nodiscard]] bool overset() const;
    /// The getRegions method.
    /// [`NamedFlow.getRegions`](https://developer.mozilla.org/en-US/docs/Web/API/NamedFlow/getRegions)
    jsbind::TypedArray<Element> getRegions();
    /// [`NamedFlow.firstEmptyRegionIndex`](https://developer.mozilla.org/en-US/docs/Web/API/NamedFlow/firstEmptyRegionIndex)
    /// [`NamedFlow.firstEmptyRegionIndex`](https://developer.mozilla.org/en-US/docs/Web/API/NamedFlow/firstEmptyRegionIndex)
    [[nodiscard]] short firstEmptyRegionIndex() const;
    /// The getContent method.
    /// [`NamedFlow.getContent`](https://developer.mozilla.org/en-US/docs/Web/API/NamedFlow/getContent)
    jsbind::TypedArray<Node> getContent();
    /// The getRegionsByContent method.
    /// [`NamedFlow.getRegionsByContent`](https://developer.mozilla.org/en-US/docs/Web/API/NamedFlow/getRegionsByContent)
    jsbind::TypedArray<Element> getRegionsByContent(const Node& node);
};

} // namespace webbind