#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "CSSColorValue.hpp"
#include "enums.hpp"


/// The CSSLab class.
/// [`CSSLab`](https://developer.mozilla.org/en-US/docs/Web/API/CSSLab)
class CSSLab : public CSSColorValue {
    explicit CSSLab(Handle h) noexcept;

public:
    explicit CSSLab(const emlite::Val &val) noexcept;
    static CSSLab take_ownership(Handle h) noexcept;

    [[nodiscard]] CSSLab clone() const noexcept;
    /// The `new CSSLab(..)` constructor, creating a new CSSLab instance
    CSSLab(const jsbind::Any& l, const jsbind::Any& a, const jsbind::Any& b);
    /// The `new CSSLab(..)` constructor, creating a new CSSLab instance
    CSSLab(const jsbind::Any& l, const jsbind::Any& a, const jsbind::Any& b, const jsbind::Any& alpha);
    /// Getter of the `l` attribute.
    /// [`CSSLab.l`](https://developer.mozilla.org/en-US/docs/Web/API/CSSLab/l)
    [[nodiscard]] jsbind::Any l() const;
    /// Setter of the `l` attribute.
    /// [`CSSLab.l`](https://developer.mozilla.org/en-US/docs/Web/API/CSSLab/l)
    void l(const jsbind::Any& value);
    /// Getter of the `a` attribute.
    /// [`CSSLab.a`](https://developer.mozilla.org/en-US/docs/Web/API/CSSLab/a)
    [[nodiscard]] jsbind::Any a() const;
    /// Setter of the `a` attribute.
    /// [`CSSLab.a`](https://developer.mozilla.org/en-US/docs/Web/API/CSSLab/a)
    void a(const jsbind::Any& value);
    /// Getter of the `b` attribute.
    /// [`CSSLab.b`](https://developer.mozilla.org/en-US/docs/Web/API/CSSLab/b)
    [[nodiscard]] jsbind::Any b() const;
    /// Setter of the `b` attribute.
    /// [`CSSLab.b`](https://developer.mozilla.org/en-US/docs/Web/API/CSSLab/b)
    void b(const jsbind::Any& value);
    /// Getter of the `alpha` attribute.
    /// [`CSSLab.alpha`](https://developer.mozilla.org/en-US/docs/Web/API/CSSLab/alpha)
    [[nodiscard]] jsbind::Any alpha() const;
    /// Setter of the `alpha` attribute.
    /// [`CSSLab.alpha`](https://developer.mozilla.org/en-US/docs/Web/API/CSSLab/alpha)
    void alpha(const jsbind::Any& value);
};

