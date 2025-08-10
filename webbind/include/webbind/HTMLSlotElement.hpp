#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "HTMLElement.hpp"
#include "AssignedNodesOptions.hpp"

namespace webbind {

class Node;
class Element;

/// Interface HTMLSlotElement
/// [`HTMLSlotElement`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLSlotElement)
class HTMLSlotElement : public HTMLElement {
    explicit HTMLSlotElement(Handle h) noexcept;
public:
    explicit HTMLSlotElement(const emlite::Val &val) noexcept;
    static HTMLSlotElement take_ownership(Handle h) noexcept;
    [[nodiscard]] HTMLSlotElement clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new HTMLSlotElement(..)` constructor, creating a new HTMLSlotElement instance
    HTMLSlotElement();
    /// [`HTMLSlotElement.name`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLSlotElement/name)
    /// [`HTMLSlotElement.name`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLSlotElement/name)
    [[nodiscard]] jsbind::String name() const;
    /// Setter of the `name` attribute.
    /// [`HTMLSlotElement.name`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLSlotElement/name)
    void name(const jsbind::String& value);
    /// The assignedNodes method.
    /// [`HTMLSlotElement.assignedNodes`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLSlotElement/assignedNodes)
    jsbind::TypedArray<Node> assignedNodes();
    /// The assignedNodes method.
    /// [`HTMLSlotElement.assignedNodes`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLSlotElement/assignedNodes)
    jsbind::TypedArray<Node> assignedNodes(const AssignedNodesOptions& options);
    /// The assignedElements method.
    /// [`HTMLSlotElement.assignedElements`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLSlotElement/assignedElements)
    jsbind::TypedArray<Element> assignedElements();
    /// The assignedElements method.
    /// [`HTMLSlotElement.assignedElements`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLSlotElement/assignedElements)
    jsbind::TypedArray<Element> assignedElements(const AssignedNodesOptions& options);
    /// The assign method.
    /// [`HTMLSlotElement.assign`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLSlotElement/assign)
    jsbind::Undefined assign(const jsbind::Any& nodes);
};

} // namespace webbind