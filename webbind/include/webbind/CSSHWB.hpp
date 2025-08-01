#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "CSSColorValue.hpp"
#include "enums.hpp"

class CSSNumericValue;


/// The CSSHWB class.
/// [`CSSHWB`](https://developer.mozilla.org/en-US/docs/Web/API/CSSHWB)
class CSSHWB : public CSSColorValue {
    explicit CSSHWB(Handle h) noexcept;

public:
    explicit CSSHWB(const emlite::Val &val) noexcept;
    static CSSHWB take_ownership(Handle h) noexcept;

    [[nodiscard]] CSSHWB clone() const noexcept;
    /// The `new CSSHWB(..)` constructor, creating a new CSSHWB instance
    CSSHWB(const CSSNumericValue& h, const jsbind::Any& w, const jsbind::Any& b);
    /// The `new CSSHWB(..)` constructor, creating a new CSSHWB instance
    CSSHWB(const CSSNumericValue& h, const jsbind::Any& w, const jsbind::Any& b, const jsbind::Any& alpha);
    /// Getter of the `h` attribute.
    /// [`CSSHWB.h`](https://developer.mozilla.org/en-US/docs/Web/API/CSSHWB/h)
    [[nodiscard]] CSSNumericValue h() const;
    /// Setter of the `h` attribute.
    /// [`CSSHWB.h`](https://developer.mozilla.org/en-US/docs/Web/API/CSSHWB/h)
    void h(const CSSNumericValue& value);
    /// Getter of the `w` attribute.
    /// [`CSSHWB.w`](https://developer.mozilla.org/en-US/docs/Web/API/CSSHWB/w)
    [[nodiscard]] jsbind::Any w() const;
    /// Setter of the `w` attribute.
    /// [`CSSHWB.w`](https://developer.mozilla.org/en-US/docs/Web/API/CSSHWB/w)
    void w(const jsbind::Any& value);
    /// Getter of the `b` attribute.
    /// [`CSSHWB.b`](https://developer.mozilla.org/en-US/docs/Web/API/CSSHWB/b)
    [[nodiscard]] jsbind::Any b() const;
    /// Setter of the `b` attribute.
    /// [`CSSHWB.b`](https://developer.mozilla.org/en-US/docs/Web/API/CSSHWB/b)
    void b(const jsbind::Any& value);
    /// Getter of the `alpha` attribute.
    /// [`CSSHWB.alpha`](https://developer.mozilla.org/en-US/docs/Web/API/CSSHWB/alpha)
    [[nodiscard]] jsbind::Any alpha() const;
    /// Setter of the `alpha` attribute.
    /// [`CSSHWB.alpha`](https://developer.mozilla.org/en-US/docs/Web/API/CSSHWB/alpha)
    void alpha(const jsbind::Any& value);
};

