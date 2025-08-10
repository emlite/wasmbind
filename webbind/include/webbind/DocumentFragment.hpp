#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "Node.hpp"

namespace webbind {

class Element;
class HTMLCollection;
class NodeList;

/// Interface DocumentFragment
/// [`DocumentFragment`](https://developer.mozilla.org/en-US/docs/Web/API/DocumentFragment)
class DocumentFragment : public Node {
    explicit DocumentFragment(Handle h) noexcept;
public:
    explicit DocumentFragment(const emlite::Val &val) noexcept;
    static DocumentFragment take_ownership(Handle h) noexcept;
    [[nodiscard]] DocumentFragment clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new DocumentFragment(..)` constructor, creating a new DocumentFragment instance
    DocumentFragment();
    /// The getElementById method.
    /// [`DocumentFragment.getElementById`](https://developer.mozilla.org/en-US/docs/Web/API/DocumentFragment/getElementById)
    Element getElementById(const jsbind::String& elementId);
    /// [`DocumentFragment.children`](https://developer.mozilla.org/en-US/docs/Web/API/DocumentFragment/children)
    /// [`DocumentFragment.children`](https://developer.mozilla.org/en-US/docs/Web/API/DocumentFragment/children)
    [[nodiscard]] HTMLCollection children() const;
    /// [`DocumentFragment.firstElementChild`](https://developer.mozilla.org/en-US/docs/Web/API/DocumentFragment/firstElementChild)
    /// [`DocumentFragment.firstElementChild`](https://developer.mozilla.org/en-US/docs/Web/API/DocumentFragment/firstElementChild)
    [[nodiscard]] Element firstElementChild() const;
    /// [`DocumentFragment.lastElementChild`](https://developer.mozilla.org/en-US/docs/Web/API/DocumentFragment/lastElementChild)
    /// [`DocumentFragment.lastElementChild`](https://developer.mozilla.org/en-US/docs/Web/API/DocumentFragment/lastElementChild)
    [[nodiscard]] Element lastElementChild() const;
    /// [`DocumentFragment.childElementCount`](https://developer.mozilla.org/en-US/docs/Web/API/DocumentFragment/childElementCount)
    /// [`DocumentFragment.childElementCount`](https://developer.mozilla.org/en-US/docs/Web/API/DocumentFragment/childElementCount)
    [[nodiscard]] unsigned long childElementCount() const;
    /// The prepend method.
    /// [`DocumentFragment.prepend`](https://developer.mozilla.org/en-US/docs/Web/API/DocumentFragment/prepend)
    jsbind::Undefined prepend(const jsbind::Any& nodes);
    /// The append method.
    /// [`DocumentFragment.append`](https://developer.mozilla.org/en-US/docs/Web/API/DocumentFragment/append)
    jsbind::Undefined append(const jsbind::Any& nodes);
    /// The replaceChildren method.
    /// [`DocumentFragment.replaceChildren`](https://developer.mozilla.org/en-US/docs/Web/API/DocumentFragment/replaceChildren)
    jsbind::Undefined replaceChildren(const jsbind::Any& nodes);
    /// The moveBefore method.
    /// [`DocumentFragment.moveBefore`](https://developer.mozilla.org/en-US/docs/Web/API/DocumentFragment/moveBefore)
    jsbind::Undefined moveBefore(const Node& node, const Node& child);
    /// The querySelector method.
    /// [`DocumentFragment.querySelector`](https://developer.mozilla.org/en-US/docs/Web/API/DocumentFragment/querySelector)
    Element querySelector(const jsbind::String& selectors);
    /// The querySelectorAll method.
    /// [`DocumentFragment.querySelectorAll`](https://developer.mozilla.org/en-US/docs/Web/API/DocumentFragment/querySelectorAll)
    NodeList querySelectorAll(const jsbind::String& selectors);
};

} // namespace webbind