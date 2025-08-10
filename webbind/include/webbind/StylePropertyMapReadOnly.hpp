#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class CSSStyleValue;

/// Interface StylePropertyMapReadOnly
/// [`StylePropertyMapReadOnly`](https://developer.mozilla.org/en-US/docs/Web/API/StylePropertyMapReadOnly)
class StylePropertyMapReadOnly : public emlite::Val {
    explicit StylePropertyMapReadOnly(Handle h) noexcept;
public:
    explicit StylePropertyMapReadOnly(const emlite::Val &val) noexcept;
    static StylePropertyMapReadOnly take_ownership(Handle h) noexcept;
    [[nodiscard]] StylePropertyMapReadOnly clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The get method.
    /// [`StylePropertyMapReadOnly.get`](https://developer.mozilla.org/en-US/docs/Web/API/StylePropertyMapReadOnly/get)
    jsbind::Any get(const jsbind::String& property);
    /// The getAll method.
    /// [`StylePropertyMapReadOnly.getAll`](https://developer.mozilla.org/en-US/docs/Web/API/StylePropertyMapReadOnly/getAll)
    jsbind::TypedArray<CSSStyleValue> getAll(const jsbind::String& property);
    /// The has method.
    /// [`StylePropertyMapReadOnly.has`](https://developer.mozilla.org/en-US/docs/Web/API/StylePropertyMapReadOnly/has)
    bool has(const jsbind::String& property);
    /// Getter of the `size` attribute.
    /// [`StylePropertyMapReadOnly.size`](https://developer.mozilla.org/en-US/docs/Web/API/StylePropertyMapReadOnly/size)
    [[nodiscard]] unsigned long size() const;
};

} // namespace webbind