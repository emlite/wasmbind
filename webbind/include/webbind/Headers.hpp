#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Interface Headers
/// [`Headers`](https://developer.mozilla.org/en-US/docs/Web/API/Headers)
class Headers : public emlite::Val {
    explicit Headers(Handle h) noexcept;
public:
    explicit Headers(const emlite::Val &val) noexcept;
    static Headers take_ownership(Handle h) noexcept;
    [[nodiscard]] Headers clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new Headers(..)` constructor, creating a new Headers instance
    Headers();
    /// The `new Headers(..)` constructor, creating a new Headers instance
    Headers(const jsbind::Any& init);
    /// The append method.
    /// [`Headers.append`](https://developer.mozilla.org/en-US/docs/Web/API/Headers/append)
    jsbind::Undefined append(const jsbind::String& name, const jsbind::String& value);
    /// The delete method.
    /// [`Headers.delete`](https://developer.mozilla.org/en-US/docs/Web/API/Headers/delete)
    jsbind::Undefined delete_(const jsbind::String& name);
    /// The get method.
    /// [`Headers.get`](https://developer.mozilla.org/en-US/docs/Web/API/Headers/get)
    jsbind::String get(const jsbind::String& name);
    /// The getSetCookie method.
    /// [`Headers.getSetCookie`](https://developer.mozilla.org/en-US/docs/Web/API/Headers/getSetCookie)
    jsbind::TypedArray<jsbind::String> getSetCookie();
    /// The has method.
    /// [`Headers.has`](https://developer.mozilla.org/en-US/docs/Web/API/Headers/has)
    bool has(const jsbind::String& name);
    /// The set method.
    /// [`Headers.set`](https://developer.mozilla.org/en-US/docs/Web/API/Headers/set)
    jsbind::Undefined set(const jsbind::String& name, const jsbind::String& value);
};

} // namespace webbind