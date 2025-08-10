#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "CSSTransformComponent.hpp"

namespace webbind {

class CSSNumericValue;

/// Interface CSSTranslate
/// [`CSSTranslate`](https://developer.mozilla.org/en-US/docs/Web/API/CSSTranslate)
class CSSTranslate : public CSSTransformComponent {
    explicit CSSTranslate(Handle h) noexcept;
public:
    explicit CSSTranslate(const emlite::Val &val) noexcept;
    static CSSTranslate take_ownership(Handle h) noexcept;
    [[nodiscard]] CSSTranslate clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new CSSTranslate(..)` constructor, creating a new CSSTranslate instance
    CSSTranslate(const CSSNumericValue& x, const CSSNumericValue& y);
    /// The `new CSSTranslate(..)` constructor, creating a new CSSTranslate instance
    CSSTranslate(const CSSNumericValue& x, const CSSNumericValue& y, const CSSNumericValue& z);
    /// [`CSSTranslate.x`](https://developer.mozilla.org/en-US/docs/Web/API/CSSTranslate/x)
    /// [`CSSTranslate.x`](https://developer.mozilla.org/en-US/docs/Web/API/CSSTranslate/x)
    [[nodiscard]] CSSNumericValue x() const;
    /// Setter of the `x` attribute.
    /// [`CSSTranslate.x`](https://developer.mozilla.org/en-US/docs/Web/API/CSSTranslate/x)
    void x(const CSSNumericValue& value);
    /// [`CSSTranslate.y`](https://developer.mozilla.org/en-US/docs/Web/API/CSSTranslate/y)
    /// [`CSSTranslate.y`](https://developer.mozilla.org/en-US/docs/Web/API/CSSTranslate/y)
    [[nodiscard]] CSSNumericValue y() const;
    /// Setter of the `y` attribute.
    /// [`CSSTranslate.y`](https://developer.mozilla.org/en-US/docs/Web/API/CSSTranslate/y)
    void y(const CSSNumericValue& value);
    /// [`CSSTranslate.z`](https://developer.mozilla.org/en-US/docs/Web/API/CSSTranslate/z)
    /// [`CSSTranslate.z`](https://developer.mozilla.org/en-US/docs/Web/API/CSSTranslate/z)
    [[nodiscard]] CSSNumericValue z() const;
    /// Setter of the `z` attribute.
    /// [`CSSTranslate.z`](https://developer.mozilla.org/en-US/docs/Web/API/CSSTranslate/z)
    void z(const CSSNumericValue& value);
};

} // namespace webbind