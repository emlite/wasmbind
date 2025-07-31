#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "StylePropertyMapReadOnly.hpp"
#include "enums.hpp"


/// The StylePropertyMap class.
/// [`StylePropertyMap`](https://developer.mozilla.org/en-US/docs/Web/API/StylePropertyMap)
class StylePropertyMap : public StylePropertyMapReadOnly {
    explicit StylePropertyMap(Handle h) noexcept;

public:
    explicit StylePropertyMap(const emlite::Val &val) noexcept;
    static StylePropertyMap take_ownership(Handle h) noexcept;

    [[nodiscard]] StylePropertyMap clone() const noexcept;
    /// The set method.
    /// [`StylePropertyMap.set`](https://developer.mozilla.org/en-US/docs/Web/API/StylePropertyMap/set)
    jsbind::Undefined set(const jsbind::String& property, const jsbind::Any& values);
    /// The append method.
    /// [`StylePropertyMap.append`](https://developer.mozilla.org/en-US/docs/Web/API/StylePropertyMap/append)
    jsbind::Undefined append(const jsbind::String& property, const jsbind::Any& values);
    /// The delete method.
    /// [`StylePropertyMap.delete`](https://developer.mozilla.org/en-US/docs/Web/API/StylePropertyMap/delete)
    jsbind::Undefined delete_(const jsbind::String& property);
    /// The clear method.
    /// [`StylePropertyMap.clear`](https://developer.mozilla.org/en-US/docs/Web/API/StylePropertyMap/clear)
    jsbind::Undefined clear();
};

