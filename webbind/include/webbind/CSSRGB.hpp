#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "CSSColorValue.hpp"
#include "enums.hpp"


/// The CSSRGB class.
/// [`CSSRGB`](https://developer.mozilla.org/en-US/docs/Web/API/CSSRGB)
class CSSRGB : public CSSColorValue {
    explicit CSSRGB(Handle h) noexcept;

public:
    explicit CSSRGB(const emlite::Val &val) noexcept;
    static CSSRGB take_ownership(Handle h) noexcept;

    [[nodiscard]] CSSRGB clone() const noexcept;
    /// The `new CSSRGB(..)` constructor, creating a new CSSRGB instance
    CSSRGB(const jsbind::Any& r, const jsbind::Any& g, const jsbind::Any& b);
    /// The `new CSSRGB(..)` constructor, creating a new CSSRGB instance
    CSSRGB(const jsbind::Any& r, const jsbind::Any& g, const jsbind::Any& b, const jsbind::Any& alpha);
    /// Getter of the `r` attribute.
    /// [`CSSRGB.r`](https://developer.mozilla.org/en-US/docs/Web/API/CSSRGB/r)
    [[nodiscard]] jsbind::Any r() const;
    /// Setter of the `r` attribute.
    /// [`CSSRGB.r`](https://developer.mozilla.org/en-US/docs/Web/API/CSSRGB/r)
    void r(const jsbind::Any& value);
    /// Getter of the `g` attribute.
    /// [`CSSRGB.g`](https://developer.mozilla.org/en-US/docs/Web/API/CSSRGB/g)
    [[nodiscard]] jsbind::Any g() const;
    /// Setter of the `g` attribute.
    /// [`CSSRGB.g`](https://developer.mozilla.org/en-US/docs/Web/API/CSSRGB/g)
    void g(const jsbind::Any& value);
    /// Getter of the `b` attribute.
    /// [`CSSRGB.b`](https://developer.mozilla.org/en-US/docs/Web/API/CSSRGB/b)
    [[nodiscard]] jsbind::Any b() const;
    /// Setter of the `b` attribute.
    /// [`CSSRGB.b`](https://developer.mozilla.org/en-US/docs/Web/API/CSSRGB/b)
    void b(const jsbind::Any& value);
    /// Getter of the `alpha` attribute.
    /// [`CSSRGB.alpha`](https://developer.mozilla.org/en-US/docs/Web/API/CSSRGB/alpha)
    [[nodiscard]] jsbind::Any alpha() const;
    /// Setter of the `alpha` attribute.
    /// [`CSSRGB.alpha`](https://developer.mozilla.org/en-US/docs/Web/API/CSSRGB/alpha)
    void alpha(const jsbind::Any& value);
};

