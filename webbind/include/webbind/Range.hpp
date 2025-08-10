#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "AbstractRange.hpp"

namespace webbind {

class Node;
class Range;
class DocumentFragment;
class DOMRectList;
class DOMRect;

/// Interface Range
/// [`Range`](https://developer.mozilla.org/en-US/docs/Web/API/Range)
class Range : public AbstractRange {
    explicit Range(Handle h) noexcept;
public:
    explicit Range(const emlite::Val &val) noexcept;
    static Range take_ownership(Handle h) noexcept;
    [[nodiscard]] Range clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new Range(..)` constructor, creating a new Range instance
    Range();
    /// Getter of the `commonAncestorContainer` attribute.
    /// [`Range.commonAncestorContainer`](https://developer.mozilla.org/en-US/docs/Web/API/Range/commonAncestorContainer)
    [[nodiscard]] Node commonAncestorContainer() const;
    /// The setStart method.
    /// [`Range.setStart`](https://developer.mozilla.org/en-US/docs/Web/API/Range/setStart)
    jsbind::Undefined setStart(const Node& node, unsigned long offset);
    /// The setEnd method.
    /// [`Range.setEnd`](https://developer.mozilla.org/en-US/docs/Web/API/Range/setEnd)
    jsbind::Undefined setEnd(const Node& node, unsigned long offset);
    /// The setStartBefore method.
    /// [`Range.setStartBefore`](https://developer.mozilla.org/en-US/docs/Web/API/Range/setStartBefore)
    jsbind::Undefined setStartBefore(const Node& node);
    /// The setStartAfter method.
    /// [`Range.setStartAfter`](https://developer.mozilla.org/en-US/docs/Web/API/Range/setStartAfter)
    jsbind::Undefined setStartAfter(const Node& node);
    /// The setEndBefore method.
    /// [`Range.setEndBefore`](https://developer.mozilla.org/en-US/docs/Web/API/Range/setEndBefore)
    jsbind::Undefined setEndBefore(const Node& node);
    /// The setEndAfter method.
    /// [`Range.setEndAfter`](https://developer.mozilla.org/en-US/docs/Web/API/Range/setEndAfter)
    jsbind::Undefined setEndAfter(const Node& node);
    /// The collapse method.
    /// [`Range.collapse`](https://developer.mozilla.org/en-US/docs/Web/API/Range/collapse)
    jsbind::Undefined collapse();
    /// The collapse method.
    /// [`Range.collapse`](https://developer.mozilla.org/en-US/docs/Web/API/Range/collapse)
    jsbind::Undefined collapse(bool toStart);
    /// The selectNode method.
    /// [`Range.selectNode`](https://developer.mozilla.org/en-US/docs/Web/API/Range/selectNode)
    jsbind::Undefined selectNode(const Node& node);
    /// The selectNodeContents method.
    /// [`Range.selectNodeContents`](https://developer.mozilla.org/en-US/docs/Web/API/Range/selectNodeContents)
    jsbind::Undefined selectNodeContents(const Node& node);
    /// The compareBoundaryPoints method.
    /// [`Range.compareBoundaryPoints`](https://developer.mozilla.org/en-US/docs/Web/API/Range/compareBoundaryPoints)
    short compareBoundaryPoints(unsigned short how, const Range& sourceRange);
    /// The deleteContents method.
    /// [`Range.deleteContents`](https://developer.mozilla.org/en-US/docs/Web/API/Range/deleteContents)
    jsbind::Undefined deleteContents();
    /// The extractContents method.
    /// [`Range.extractContents`](https://developer.mozilla.org/en-US/docs/Web/API/Range/extractContents)
    DocumentFragment extractContents();
    /// The cloneContents method.
    /// [`Range.cloneContents`](https://developer.mozilla.org/en-US/docs/Web/API/Range/cloneContents)
    DocumentFragment cloneContents();
    /// The insertNode method.
    /// [`Range.insertNode`](https://developer.mozilla.org/en-US/docs/Web/API/Range/insertNode)
    jsbind::Undefined insertNode(const Node& node);
    /// The surroundContents method.
    /// [`Range.surroundContents`](https://developer.mozilla.org/en-US/docs/Web/API/Range/surroundContents)
    jsbind::Undefined surroundContents(const Node& newParent);
    /// The cloneRange method.
    /// [`Range.cloneRange`](https://developer.mozilla.org/en-US/docs/Web/API/Range/cloneRange)
    Range cloneRange();
    /// The detach method.
    /// [`Range.detach`](https://developer.mozilla.org/en-US/docs/Web/API/Range/detach)
    jsbind::Undefined detach();
    /// The isPointInRange method.
    /// [`Range.isPointInRange`](https://developer.mozilla.org/en-US/docs/Web/API/Range/isPointInRange)
    bool isPointInRange(const Node& node, unsigned long offset);
    /// The comparePoint method.
    /// [`Range.comparePoint`](https://developer.mozilla.org/en-US/docs/Web/API/Range/comparePoint)
    short comparePoint(const Node& node, unsigned long offset);
    /// The intersectsNode method.
    /// [`Range.intersectsNode`](https://developer.mozilla.org/en-US/docs/Web/API/Range/intersectsNode)
    bool intersectsNode(const Node& node);
    /// The getClientRects method.
    /// [`Range.getClientRects`](https://developer.mozilla.org/en-US/docs/Web/API/Range/getClientRects)
    DOMRectList getClientRects();
    /// The getBoundingClientRect method.
    /// [`Range.getBoundingClientRect`](https://developer.mozilla.org/en-US/docs/Web/API/Range/getBoundingClientRect)
    DOMRect getBoundingClientRect();
    /// The createContextualFragment method.
    /// [`Range.createContextualFragment`](https://developer.mozilla.org/en-US/docs/Web/API/Range/createContextualFragment)
    DocumentFragment createContextualFragment(const jsbind::Any& string);
};

} // namespace webbind