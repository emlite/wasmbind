#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class Node;


/// The NodeIterator class.
/// [`NodeIterator`](https://developer.mozilla.org/en-US/docs/Web/API/NodeIterator)
class NodeIterator : public emlite::Val {
    explicit NodeIterator(Handle h) noexcept;

public:
    explicit NodeIterator(const emlite::Val &val) noexcept;
    static NodeIterator take_ownership(Handle h) noexcept;

    [[nodiscard]] NodeIterator clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `root` attribute.
    /// [`NodeIterator.root`](https://developer.mozilla.org/en-US/docs/Web/API/NodeIterator/root)
    [[nodiscard]] Node root() const;
    /// Getter of the `referenceNode` attribute.
    /// [`NodeIterator.referenceNode`](https://developer.mozilla.org/en-US/docs/Web/API/NodeIterator/referenceNode)
    [[nodiscard]] Node referenceNode() const;
    /// Getter of the `pointerBeforeReferenceNode` attribute.
    /// [`NodeIterator.pointerBeforeReferenceNode`](https://developer.mozilla.org/en-US/docs/Web/API/NodeIterator/pointerBeforeReferenceNode)
    [[nodiscard]] bool pointerBeforeReferenceNode() const;
    /// Getter of the `whatToShow` attribute.
    /// [`NodeIterator.whatToShow`](https://developer.mozilla.org/en-US/docs/Web/API/NodeIterator/whatToShow)
    [[nodiscard]] unsigned long whatToShow() const;
    /// Getter of the `filter` attribute.
    /// [`NodeIterator.filter`](https://developer.mozilla.org/en-US/docs/Web/API/NodeIterator/filter)
    [[nodiscard]] jsbind::Function filter() const;
    /// The nextNode method.
    /// [`NodeIterator.nextNode`](https://developer.mozilla.org/en-US/docs/Web/API/NodeIterator/nextNode)
    Node nextNode();
    /// The previousNode method.
    /// [`NodeIterator.previousNode`](https://developer.mozilla.org/en-US/docs/Web/API/NodeIterator/previousNode)
    Node previousNode();
    /// The detach method.
    /// [`NodeIterator.detach`](https://developer.mozilla.org/en-US/docs/Web/API/NodeIterator/detach)
    jsbind::Undefined detach();
};

