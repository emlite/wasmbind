#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


/// The URLSearchParams class.
/// [`URLSearchParams`](https://developer.mozilla.org/en-US/docs/Web/API/URLSearchParams)
class URLSearchParams : public emlite::Val {
    explicit URLSearchParams(Handle h) noexcept;

public:
    explicit URLSearchParams(const emlite::Val &val) noexcept;
    static URLSearchParams take_ownership(Handle h) noexcept;

    [[nodiscard]] URLSearchParams clone() const noexcept;
    /// The `new URLSearchParams(..)` constructor, creating a new URLSearchParams instance
    URLSearchParams();
    /// The `new URLSearchParams(..)` constructor, creating a new URLSearchParams instance
    URLSearchParams(const jsbind::Any& init);
    /// Getter of the `size` attribute.
    /// [`URLSearchParams.size`](https://developer.mozilla.org/en-US/docs/Web/API/URLSearchParams/size)
    [[nodiscard]] unsigned long size() const;
    /// The append method.
    /// [`URLSearchParams.append`](https://developer.mozilla.org/en-US/docs/Web/API/URLSearchParams/append)
    jsbind::Undefined append(const jsbind::String& name, const jsbind::String& value);
    /// The delete method.
    /// [`URLSearchParams.delete`](https://developer.mozilla.org/en-US/docs/Web/API/URLSearchParams/delete)
    jsbind::Undefined delete_(const jsbind::String& name);
    /// The delete method.
    /// [`URLSearchParams.delete`](https://developer.mozilla.org/en-US/docs/Web/API/URLSearchParams/delete)
    jsbind::Undefined delete_(const jsbind::String& name, const jsbind::String& value);
    /// The get method.
    /// [`URLSearchParams.get`](https://developer.mozilla.org/en-US/docs/Web/API/URLSearchParams/get)
    jsbind::String get(const jsbind::String& name);
    /// The getAll method.
    /// [`URLSearchParams.getAll`](https://developer.mozilla.org/en-US/docs/Web/API/URLSearchParams/getAll)
    jsbind::TypedArray<jsbind::String> getAll(const jsbind::String& name);
    /// The has method.
    /// [`URLSearchParams.has`](https://developer.mozilla.org/en-US/docs/Web/API/URLSearchParams/has)
    bool has(const jsbind::String& name);
    /// The has method.
    /// [`URLSearchParams.has`](https://developer.mozilla.org/en-US/docs/Web/API/URLSearchParams/has)
    bool has(const jsbind::String& name, const jsbind::String& value);
    /// The set method.
    /// [`URLSearchParams.set`](https://developer.mozilla.org/en-US/docs/Web/API/URLSearchParams/set)
    jsbind::Undefined set(const jsbind::String& name, const jsbind::String& value);
    /// The sort method.
    /// [`URLSearchParams.sort`](https://developer.mozilla.org/en-US/docs/Web/API/URLSearchParams/sort)
    jsbind::Undefined sort();
};

