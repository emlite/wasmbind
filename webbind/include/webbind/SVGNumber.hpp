#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


/// The SVGNumber class.
/// [`SVGNumber`](https://developer.mozilla.org/en-US/docs/Web/API/SVGNumber)
class SVGNumber : public emlite::Val {
    explicit SVGNumber(Handle h) noexcept;

public:
    explicit SVGNumber(const emlite::Val &val) noexcept;
    static SVGNumber take_ownership(Handle h) noexcept;

    [[nodiscard]] SVGNumber clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `value` attribute.
    /// [`SVGNumber.value`](https://developer.mozilla.org/en-US/docs/Web/API/SVGNumber/value)
    [[nodiscard]] float value() const;
    /// Setter of the `value` attribute.
    /// [`SVGNumber.value`](https://developer.mozilla.org/en-US/docs/Web/API/SVGNumber/value)
    void value(float value);
};

