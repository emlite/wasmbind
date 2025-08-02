#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class Node;


/// The TreeWalker class.
/// [`TreeWalker`](https://developer.mozilla.org/en-US/docs/Web/API/TreeWalker)
class TreeWalker : public emlite::Val {
    explicit TreeWalker(Handle h) noexcept;

public:
    explicit TreeWalker(const emlite::Val &val) noexcept;
    static TreeWalker take_ownership(Handle h) noexcept;

    [[nodiscard]] TreeWalker clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `root` attribute.
    /// [`TreeWalker.root`](https://developer.mozilla.org/en-US/docs/Web/API/TreeWalker/root)
    [[nodiscard]] Node root() const;
    /// Getter of the `whatToShow` attribute.
    /// [`TreeWalker.whatToShow`](https://developer.mozilla.org/en-US/docs/Web/API/TreeWalker/whatToShow)
    [[nodiscard]] unsigned long whatToShow() const;
    /// Getter of the `filter` attribute.
    /// [`TreeWalker.filter`](https://developer.mozilla.org/en-US/docs/Web/API/TreeWalker/filter)
    [[nodiscard]] jsbind::Function filter() const;
    /// Getter of the `currentNode` attribute.
    /// [`TreeWalker.currentNode`](https://developer.mozilla.org/en-US/docs/Web/API/TreeWalker/currentNode)
    [[nodiscard]] Node currentNode() const;
    /// Setter of the `currentNode` attribute.
    /// [`TreeWalker.currentNode`](https://developer.mozilla.org/en-US/docs/Web/API/TreeWalker/currentNode)
    void currentNode(const Node& value);
    /// The parentNode method.
    /// [`TreeWalker.parentNode`](https://developer.mozilla.org/en-US/docs/Web/API/TreeWalker/parentNode)
    Node parentNode();
    /// The firstChild method.
    /// [`TreeWalker.firstChild`](https://developer.mozilla.org/en-US/docs/Web/API/TreeWalker/firstChild)
    Node firstChild();
    /// The lastChild method.
    /// [`TreeWalker.lastChild`](https://developer.mozilla.org/en-US/docs/Web/API/TreeWalker/lastChild)
    Node lastChild();
    /// The previousSibling method.
    /// [`TreeWalker.previousSibling`](https://developer.mozilla.org/en-US/docs/Web/API/TreeWalker/previousSibling)
    Node previousSibling();
    /// The nextSibling method.
    /// [`TreeWalker.nextSibling`](https://developer.mozilla.org/en-US/docs/Web/API/TreeWalker/nextSibling)
    Node nextSibling();
    /// The previousNode method.
    /// [`TreeWalker.previousNode`](https://developer.mozilla.org/en-US/docs/Web/API/TreeWalker/previousNode)
    Node previousNode();
    /// The nextNode method.
    /// [`TreeWalker.nextNode`](https://developer.mozilla.org/en-US/docs/Web/API/TreeWalker/nextNode)
    Node nextNode();
};

