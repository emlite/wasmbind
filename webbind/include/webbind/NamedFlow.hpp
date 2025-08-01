#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "enums.hpp"

class Element;
class Node;


/// The NamedFlow class.
/// [`NamedFlow`](https://developer.mozilla.org/en-US/docs/Web/API/NamedFlow)
class NamedFlow : public EventTarget {
    explicit NamedFlow(Handle h) noexcept;

public:
    explicit NamedFlow(const emlite::Val &val) noexcept;
    static NamedFlow take_ownership(Handle h) noexcept;

    [[nodiscard]] NamedFlow clone() const noexcept;
    /// Getter of the `name` attribute.
    /// [`NamedFlow.name`](https://developer.mozilla.org/en-US/docs/Web/API/NamedFlow/name)
    [[nodiscard]] jsbind::String name() const;
    /// Getter of the `overset` attribute.
    /// [`NamedFlow.overset`](https://developer.mozilla.org/en-US/docs/Web/API/NamedFlow/overset)
    [[nodiscard]] bool overset() const;
    /// The getRegions method.
    /// [`NamedFlow.getRegions`](https://developer.mozilla.org/en-US/docs/Web/API/NamedFlow/getRegions)
    jsbind::TypedArray<Element> getRegions();
    /// Getter of the `firstEmptyRegionIndex` attribute.
    /// [`NamedFlow.firstEmptyRegionIndex`](https://developer.mozilla.org/en-US/docs/Web/API/NamedFlow/firstEmptyRegionIndex)
    [[nodiscard]] short firstEmptyRegionIndex() const;
    /// The getContent method.
    /// [`NamedFlow.getContent`](https://developer.mozilla.org/en-US/docs/Web/API/NamedFlow/getContent)
    jsbind::TypedArray<Node> getContent();
    /// The getRegionsByContent method.
    /// [`NamedFlow.getRegionsByContent`](https://developer.mozilla.org/en-US/docs/Web/API/NamedFlow/getRegionsByContent)
    jsbind::TypedArray<Element> getRegionsByContent(const Node& node);
};

