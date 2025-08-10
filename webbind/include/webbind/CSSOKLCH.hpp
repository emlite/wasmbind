#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "CSSColorValue.hpp"

namespace webbind {

/// Interface CSSOKLCH
/// [`CSSOKLCH`](https://developer.mozilla.org/en-US/docs/Web/API/CSSOKLCH)
class CSSOKLCH : public CSSColorValue {
    explicit CSSOKLCH(Handle h) noexcept;
public:
    explicit CSSOKLCH(const emlite::Val &val) noexcept;
    static CSSOKLCH take_ownership(Handle h) noexcept;
    [[nodiscard]] CSSOKLCH clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new CSSOKLCH(..)` constructor, creating a new CSSOKLCH instance
    CSSOKLCH(const jsbind::Any& l, const jsbind::Any& c, const jsbind::Any& h);
    /// The `new CSSOKLCH(..)` constructor, creating a new CSSOKLCH instance
    CSSOKLCH(const jsbind::Any& l, const jsbind::Any& c, const jsbind::Any& h, const jsbind::Any& alpha);
    /// Getter of the `l` attribute.
    /// [`CSSOKLCH.l`](https://developer.mozilla.org/en-US/docs/Web/API/CSSOKLCH/l)
    [[nodiscard]] jsbind::Any l() const;
    /// Setter of the `l` attribute.
    /// [`CSSOKLCH.l`](https://developer.mozilla.org/en-US/docs/Web/API/CSSOKLCH/l)
    void l(const jsbind::Any& value);
    /// Getter of the `c` attribute.
    /// [`CSSOKLCH.c`](https://developer.mozilla.org/en-US/docs/Web/API/CSSOKLCH/c)
    [[nodiscard]] jsbind::Any c() const;
    /// Setter of the `c` attribute.
    /// [`CSSOKLCH.c`](https://developer.mozilla.org/en-US/docs/Web/API/CSSOKLCH/c)
    void c(const jsbind::Any& value);
    /// Getter of the `h` attribute.
    /// [`CSSOKLCH.h`](https://developer.mozilla.org/en-US/docs/Web/API/CSSOKLCH/h)
    [[nodiscard]] jsbind::Any h() const;
    /// Setter of the `h` attribute.
    /// [`CSSOKLCH.h`](https://developer.mozilla.org/en-US/docs/Web/API/CSSOKLCH/h)
    void h(const jsbind::Any& value);
    /// Getter of the `alpha` attribute.
    /// [`CSSOKLCH.alpha`](https://developer.mozilla.org/en-US/docs/Web/API/CSSOKLCH/alpha)
    [[nodiscard]] jsbind::Any alpha() const;
    /// Setter of the `alpha` attribute.
    /// [`CSSOKLCH.alpha`](https://developer.mozilla.org/en-US/docs/Web/API/CSSOKLCH/alpha)
    void alpha(const jsbind::Any& value);
};

} // namespace webbind