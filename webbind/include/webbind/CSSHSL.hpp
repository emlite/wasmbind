#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "CSSColorValue.hpp"

namespace webbind {

/// Interface CSSHSL
/// [`CSSHSL`](https://developer.mozilla.org/en-US/docs/Web/API/CSSHSL)
class CSSHSL : public CSSColorValue {
    explicit CSSHSL(Handle h) noexcept;
public:
    explicit CSSHSL(const emlite::Val &val) noexcept;
    static CSSHSL take_ownership(Handle h) noexcept;
    [[nodiscard]] CSSHSL clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new CSSHSL(..)` constructor, creating a new CSSHSL instance
    CSSHSL(const jsbind::Any& h, const jsbind::Any& s, const jsbind::Any& l);
    /// The `new CSSHSL(..)` constructor, creating a new CSSHSL instance
    CSSHSL(const jsbind::Any& h, const jsbind::Any& s, const jsbind::Any& l, const jsbind::Any& alpha);
    /// Getter of the `h` attribute.
    /// [`CSSHSL.h`](https://developer.mozilla.org/en-US/docs/Web/API/CSSHSL/h)
    [[nodiscard]] jsbind::Any h() const;
    /// Setter of the `h` attribute.
    /// [`CSSHSL.h`](https://developer.mozilla.org/en-US/docs/Web/API/CSSHSL/h)
    void h(const jsbind::Any& value);
    /// Getter of the `s` attribute.
    /// [`CSSHSL.s`](https://developer.mozilla.org/en-US/docs/Web/API/CSSHSL/s)
    [[nodiscard]] jsbind::Any s() const;
    /// Setter of the `s` attribute.
    /// [`CSSHSL.s`](https://developer.mozilla.org/en-US/docs/Web/API/CSSHSL/s)
    void s(const jsbind::Any& value);
    /// Getter of the `l` attribute.
    /// [`CSSHSL.l`](https://developer.mozilla.org/en-US/docs/Web/API/CSSHSL/l)
    [[nodiscard]] jsbind::Any l() const;
    /// Setter of the `l` attribute.
    /// [`CSSHSL.l`](https://developer.mozilla.org/en-US/docs/Web/API/CSSHSL/l)
    void l(const jsbind::Any& value);
    /// Getter of the `alpha` attribute.
    /// [`CSSHSL.alpha`](https://developer.mozilla.org/en-US/docs/Web/API/CSSHSL/alpha)
    [[nodiscard]] jsbind::Any alpha() const;
    /// Setter of the `alpha` attribute.
    /// [`CSSHSL.alpha`](https://developer.mozilla.org/en-US/docs/Web/API/CSSHSL/alpha)
    void alpha(const jsbind::Any& value);
};

} // namespace webbind