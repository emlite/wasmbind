#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class Element;

/// Interface HTMLAllCollection
/// [`HTMLAllCollection`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLAllCollection)
class HTMLAllCollection : public emlite::Val {
    explicit HTMLAllCollection(Handle h) noexcept;
public:
    explicit HTMLAllCollection(const emlite::Val &val) noexcept;
    static HTMLAllCollection take_ownership(Handle h) noexcept;
    [[nodiscard]] HTMLAllCollection clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`HTMLAllCollection.length`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLAllCollection/length)
    /// [`HTMLAllCollection.length`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLAllCollection/length)
    [[nodiscard]] unsigned long length() const;
    /// The namedItem method.
    /// [`HTMLAllCollection.namedItem`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLAllCollection/namedItem)
    jsbind::Any namedItem(const jsbind::String& name);
    /// The item method.
    /// [`HTMLAllCollection.item`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLAllCollection/item)
    jsbind::Any item();
    /// The item method.
    /// [`HTMLAllCollection.item`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLAllCollection/item)
    jsbind::Any item(const jsbind::String& nameOrIndex);
};

} // namespace webbind