#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class Node;

/// Interface NodeList
/// [`NodeList`](https://developer.mozilla.org/en-US/docs/Web/API/NodeList)
class NodeList : public emlite::Val {
    explicit NodeList(Handle h) noexcept;
public:
    explicit NodeList(const emlite::Val &val) noexcept;
    static NodeList take_ownership(Handle h) noexcept;
    [[nodiscard]] NodeList clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The item method.
    /// [`NodeList.item`](https://developer.mozilla.org/en-US/docs/Web/API/NodeList/item)
    Node item(unsigned long index);
    /// [`NodeList.length`](https://developer.mozilla.org/en-US/docs/Web/API/NodeList/length)
    /// [`NodeList.length`](https://developer.mozilla.org/en-US/docs/Web/API/NodeList/length)
    [[nodiscard]] unsigned long length() const;
};

} // namespace webbind