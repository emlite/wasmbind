#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "HTMLCollection.hpp"
#include "enums.hpp"


/// The HTMLFormControlsCollection class.
/// [`HTMLFormControlsCollection`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLFormControlsCollection)
class HTMLFormControlsCollection : public HTMLCollection {
    explicit HTMLFormControlsCollection(Handle h) noexcept;

public:
    explicit HTMLFormControlsCollection(const emlite::Val &val) noexcept;
    static HTMLFormControlsCollection take_ownership(Handle h) noexcept;

    [[nodiscard]] HTMLFormControlsCollection clone() const noexcept;
    /// The namedItem method.
    /// [`HTMLFormControlsCollection.namedItem`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLFormControlsCollection/namedItem)
    jsbind::Any namedItem(const jsbind::String& name);
};

