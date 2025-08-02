#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "CSSColorValue.hpp"
#include "enums.hpp"


/// The CSSOKLab class.
/// [`CSSOKLab`](https://developer.mozilla.org/en-US/docs/Web/API/CSSOKLab)
class CSSOKLab : public CSSColorValue {
    explicit CSSOKLab(Handle h) noexcept;

public:
    explicit CSSOKLab(const emlite::Val &val) noexcept;
    static CSSOKLab take_ownership(Handle h) noexcept;

    [[nodiscard]] CSSOKLab clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new CSSOKLab(..)` constructor, creating a new CSSOKLab instance
    CSSOKLab(const jsbind::Any& l, const jsbind::Any& a, const jsbind::Any& b);
    /// The `new CSSOKLab(..)` constructor, creating a new CSSOKLab instance
    CSSOKLab(const jsbind::Any& l, const jsbind::Any& a, const jsbind::Any& b, const jsbind::Any& alpha);
    /// Getter of the `l` attribute.
    /// [`CSSOKLab.l`](https://developer.mozilla.org/en-US/docs/Web/API/CSSOKLab/l)
    [[nodiscard]] jsbind::Any l() const;
    /// Setter of the `l` attribute.
    /// [`CSSOKLab.l`](https://developer.mozilla.org/en-US/docs/Web/API/CSSOKLab/l)
    void l(const jsbind::Any& value);
    /// Getter of the `a` attribute.
    /// [`CSSOKLab.a`](https://developer.mozilla.org/en-US/docs/Web/API/CSSOKLab/a)
    [[nodiscard]] jsbind::Any a() const;
    /// Setter of the `a` attribute.
    /// [`CSSOKLab.a`](https://developer.mozilla.org/en-US/docs/Web/API/CSSOKLab/a)
    void a(const jsbind::Any& value);
    /// Getter of the `b` attribute.
    /// [`CSSOKLab.b`](https://developer.mozilla.org/en-US/docs/Web/API/CSSOKLab/b)
    [[nodiscard]] jsbind::Any b() const;
    /// Setter of the `b` attribute.
    /// [`CSSOKLab.b`](https://developer.mozilla.org/en-US/docs/Web/API/CSSOKLab/b)
    void b(const jsbind::Any& value);
    /// Getter of the `alpha` attribute.
    /// [`CSSOKLab.alpha`](https://developer.mozilla.org/en-US/docs/Web/API/CSSOKLab/alpha)
    [[nodiscard]] jsbind::Any alpha() const;
    /// Setter of the `alpha` attribute.
    /// [`CSSOKLab.alpha`](https://developer.mozilla.org/en-US/docs/Web/API/CSSOKLab/alpha)
    void alpha(const jsbind::Any& value);
};

