#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


/// The DOMStringList class.
/// [`DOMStringList`](https://developer.mozilla.org/en-US/docs/Web/API/DOMStringList)
class DOMStringList : public emlite::Val {
    explicit DOMStringList(Handle h) noexcept;

public:
    explicit DOMStringList(const emlite::Val &val) noexcept;
    static DOMStringList take_ownership(Handle h) noexcept;

    [[nodiscard]] DOMStringList clone() const noexcept;
    /// Getter of the `length` attribute.
    /// [`DOMStringList.length`](https://developer.mozilla.org/en-US/docs/Web/API/DOMStringList/length)
    [[nodiscard]] unsigned long length() const;
    /// The item method.
    /// [`DOMStringList.item`](https://developer.mozilla.org/en-US/docs/Web/API/DOMStringList/item)
    jsbind::String item(unsigned long index);
    /// The contains method.
    /// [`DOMStringList.contains`](https://developer.mozilla.org/en-US/docs/Web/API/DOMStringList/contains)
    bool contains(const jsbind::String& string);
};

