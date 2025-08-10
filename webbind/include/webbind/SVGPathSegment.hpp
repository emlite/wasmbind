#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Interface SVGPathSegment
/// [`SVGPathSegment`](https://developer.mozilla.org/en-US/docs/Web/API/SVGPathSegment)
class SVGPathSegment : public emlite::Val {
    explicit SVGPathSegment(Handle h) noexcept;
public:
    explicit SVGPathSegment(const emlite::Val &val) noexcept;
    static SVGPathSegment take_ownership(Handle h) noexcept;
    [[nodiscard]] SVGPathSegment clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `type` attribute.
    /// [`SVGPathSegment.type`](https://developer.mozilla.org/en-US/docs/Web/API/SVGPathSegment/type)
    [[nodiscard]] jsbind::String type() const;
    /// Setter of the `type` attribute.
    /// [`SVGPathSegment.type`](https://developer.mozilla.org/en-US/docs/Web/API/SVGPathSegment/type)
    void type(const jsbind::String& value);
    /// Getter of the `values` attribute.
    /// [`SVGPathSegment.values`](https://developer.mozilla.org/en-US/docs/Web/API/SVGPathSegment/values)
    [[nodiscard]] jsbind::TypedArray<float> values() const;
    /// Setter of the `values` attribute.
    /// [`SVGPathSegment.values`](https://developer.mozilla.org/en-US/docs/Web/API/SVGPathSegment/values)
    void values(jsbind::TypedArray<float> value);
};

} // namespace webbind