#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "HTMLCollection.hpp"
#include "enums.hpp"

class HTMLOptionElement;


/// The HTMLOptionsCollection class.
/// [`HTMLOptionsCollection`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLOptionsCollection)
class HTMLOptionsCollection : public HTMLCollection {
    explicit HTMLOptionsCollection(Handle h) noexcept;

public:
    explicit HTMLOptionsCollection(const emlite::Val &val) noexcept;
    static HTMLOptionsCollection take_ownership(Handle h) noexcept;

    [[nodiscard]] HTMLOptionsCollection clone() const noexcept;
    /// Getter of the `length` attribute.
    /// [`HTMLOptionsCollection.length`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLOptionsCollection/length)
    [[nodiscard]] unsigned long length() const;
    /// Setter of the `length` attribute.
    /// [`HTMLOptionsCollection.length`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLOptionsCollection/length)
    void length(unsigned long value);
    /// The add method.
    /// [`HTMLOptionsCollection.add`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLOptionsCollection/add)
    jsbind::Undefined add(const jsbind::Any& element);
    /// The add method.
    /// [`HTMLOptionsCollection.add`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLOptionsCollection/add)
    jsbind::Undefined add(const jsbind::Any& element, const jsbind::Any& before);
    /// The remove method.
    /// [`HTMLOptionsCollection.remove`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLOptionsCollection/remove)
    jsbind::Undefined remove(long index);
    /// Getter of the `selectedIndex` attribute.
    /// [`HTMLOptionsCollection.selectedIndex`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLOptionsCollection/selectedIndex)
    [[nodiscard]] long selectedIndex() const;
    /// Setter of the `selectedIndex` attribute.
    /// [`HTMLOptionsCollection.selectedIndex`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLOptionsCollection/selectedIndex)
    void selectedIndex(long value);
};

