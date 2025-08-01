#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class Node;


/// The NodeList class.
/// [`NodeList`](https://developer.mozilla.org/en-US/docs/Web/API/NodeList)
class NodeList : public emlite::Val {
    explicit NodeList(Handle h) noexcept;

public:
    explicit NodeList(const emlite::Val &val) noexcept;
    static NodeList take_ownership(Handle h) noexcept;

    [[nodiscard]] NodeList clone() const noexcept;
    /// The item method.
    /// [`NodeList.item`](https://developer.mozilla.org/en-US/docs/Web/API/NodeList/item)
    Node item(unsigned long index);
    /// Getter of the `length` attribute.
    /// [`NodeList.length`](https://developer.mozilla.org/en-US/docs/Web/API/NodeList/length)
    [[nodiscard]] unsigned long length() const;
};

