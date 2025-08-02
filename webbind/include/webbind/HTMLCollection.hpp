#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class Element;


/// The HTMLCollection class.
/// [`HTMLCollection`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLCollection)
class HTMLCollection : public emlite::Val {
    explicit HTMLCollection(Handle h) noexcept;

public:
    explicit HTMLCollection(const emlite::Val &val) noexcept;
    static HTMLCollection take_ownership(Handle h) noexcept;

    [[nodiscard]] HTMLCollection clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `length` attribute.
    /// [`HTMLCollection.length`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLCollection/length)
    [[nodiscard]] unsigned long length() const;
    /// The item method.
    /// [`HTMLCollection.item`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLCollection/item)
    Element item(unsigned long index);
    /// The namedItem method.
    /// [`HTMLCollection.namedItem`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLCollection/namedItem)
    Element namedItem(const jsbind::String& name);
};

