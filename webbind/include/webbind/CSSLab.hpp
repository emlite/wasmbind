#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "CSSColorValue.hpp"

namespace webbind {

/// Interface CSSLab
/// [`CSSLab`](https://developer.mozilla.org/en-US/docs/Web/API/CSSLab)
class CSSLab : public CSSColorValue {
    explicit CSSLab(Handle h) noexcept;
public:
    explicit CSSLab(const emlite::Val &val) noexcept;
    static CSSLab take_ownership(Handle h) noexcept;
    [[nodiscard]] CSSLab clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new CSSLab(..)` constructor, creating a new CSSLab instance
    CSSLab(const jsbind::Any& l, const jsbind::Any& a, const jsbind::Any& b);
    /// The `new CSSLab(..)` constructor, creating a new CSSLab instance
    CSSLab(const jsbind::Any& l, const jsbind::Any& a, const jsbind::Any& b, const jsbind::Any& alpha);
    /// [`CSSLab.l`](https://developer.mozilla.org/en-US/docs/Web/API/CSSLab/l)
    /// [`CSSLab.l`](https://developer.mozilla.org/en-US/docs/Web/API/CSSLab/l)
    [[nodiscard]] jsbind::Any l() const;
    /// Setter of the `l` attribute.
    /// [`CSSLab.l`](https://developer.mozilla.org/en-US/docs/Web/API/CSSLab/l)
    void l(const jsbind::Any& value);
    /// [`CSSLab.a`](https://developer.mozilla.org/en-US/docs/Web/API/CSSLab/a)
    /// [`CSSLab.a`](https://developer.mozilla.org/en-US/docs/Web/API/CSSLab/a)
    [[nodiscard]] jsbind::Any a() const;
    /// Setter of the `a` attribute.
    /// [`CSSLab.a`](https://developer.mozilla.org/en-US/docs/Web/API/CSSLab/a)
    void a(const jsbind::Any& value);
    /// [`CSSLab.b`](https://developer.mozilla.org/en-US/docs/Web/API/CSSLab/b)
    /// [`CSSLab.b`](https://developer.mozilla.org/en-US/docs/Web/API/CSSLab/b)
    [[nodiscard]] jsbind::Any b() const;
    /// Setter of the `b` attribute.
    /// [`CSSLab.b`](https://developer.mozilla.org/en-US/docs/Web/API/CSSLab/b)
    void b(const jsbind::Any& value);
    /// [`CSSLab.alpha`](https://developer.mozilla.org/en-US/docs/Web/API/CSSLab/alpha)
    /// [`CSSLab.alpha`](https://developer.mozilla.org/en-US/docs/Web/API/CSSLab/alpha)
    [[nodiscard]] jsbind::Any alpha() const;
    /// Setter of the `alpha` attribute.
    /// [`CSSLab.alpha`](https://developer.mozilla.org/en-US/docs/Web/API/CSSLab/alpha)
    void alpha(const jsbind::Any& value);
};

} // namespace webbind