#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "CSSColorValue.hpp"

namespace webbind {

/// Interface CSSLCH
/// [`CSSLCH`](https://developer.mozilla.org/en-US/docs/Web/API/CSSLCH)
class CSSLCH : public CSSColorValue {
    explicit CSSLCH(Handle h) noexcept;
public:
    explicit CSSLCH(const emlite::Val &val) noexcept;
    static CSSLCH take_ownership(Handle h) noexcept;
    [[nodiscard]] CSSLCH clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new CSSLCH(..)` constructor, creating a new CSSLCH instance
    CSSLCH(const jsbind::Any& l, const jsbind::Any& c, const jsbind::Any& h);
    /// The `new CSSLCH(..)` constructor, creating a new CSSLCH instance
    CSSLCH(const jsbind::Any& l, const jsbind::Any& c, const jsbind::Any& h, const jsbind::Any& alpha);
    /// [`CSSLCH.l`](https://developer.mozilla.org/en-US/docs/Web/API/CSSLCH/l)
    /// [`CSSLCH.l`](https://developer.mozilla.org/en-US/docs/Web/API/CSSLCH/l)
    [[nodiscard]] jsbind::Any l() const;
    /// Setter of the `l` attribute.
    /// [`CSSLCH.l`](https://developer.mozilla.org/en-US/docs/Web/API/CSSLCH/l)
    void l(const jsbind::Any& value);
    /// [`CSSLCH.c`](https://developer.mozilla.org/en-US/docs/Web/API/CSSLCH/c)
    /// [`CSSLCH.c`](https://developer.mozilla.org/en-US/docs/Web/API/CSSLCH/c)
    [[nodiscard]] jsbind::Any c() const;
    /// Setter of the `c` attribute.
    /// [`CSSLCH.c`](https://developer.mozilla.org/en-US/docs/Web/API/CSSLCH/c)
    void c(const jsbind::Any& value);
    /// [`CSSLCH.h`](https://developer.mozilla.org/en-US/docs/Web/API/CSSLCH/h)
    /// [`CSSLCH.h`](https://developer.mozilla.org/en-US/docs/Web/API/CSSLCH/h)
    [[nodiscard]] jsbind::Any h() const;
    /// Setter of the `h` attribute.
    /// [`CSSLCH.h`](https://developer.mozilla.org/en-US/docs/Web/API/CSSLCH/h)
    void h(const jsbind::Any& value);
    /// [`CSSLCH.alpha`](https://developer.mozilla.org/en-US/docs/Web/API/CSSLCH/alpha)
    /// [`CSSLCH.alpha`](https://developer.mozilla.org/en-US/docs/Web/API/CSSLCH/alpha)
    [[nodiscard]] jsbind::Any alpha() const;
    /// Setter of the `alpha` attribute.
    /// [`CSSLCH.alpha`](https://developer.mozilla.org/en-US/docs/Web/API/CSSLCH/alpha)
    void alpha(const jsbind::Any& value);
};

} // namespace webbind