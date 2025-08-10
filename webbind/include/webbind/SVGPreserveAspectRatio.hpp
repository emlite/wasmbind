#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Interface SVGPreserveAspectRatio
/// [`SVGPreserveAspectRatio`](https://developer.mozilla.org/en-US/docs/Web/API/SVGPreserveAspectRatio)
class SVGPreserveAspectRatio : public emlite::Val {
    explicit SVGPreserveAspectRatio(Handle h) noexcept;
public:
    explicit SVGPreserveAspectRatio(const emlite::Val &val) noexcept;
    static SVGPreserveAspectRatio take_ownership(Handle h) noexcept;
    [[nodiscard]] SVGPreserveAspectRatio clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`SVGPreserveAspectRatio.align`](https://developer.mozilla.org/en-US/docs/Web/API/SVGPreserveAspectRatio/align)
    /// [`SVGPreserveAspectRatio.align`](https://developer.mozilla.org/en-US/docs/Web/API/SVGPreserveAspectRatio/align)
    [[nodiscard]] unsigned short align() const;
    /// Setter of the `align` attribute.
    /// [`SVGPreserveAspectRatio.align`](https://developer.mozilla.org/en-US/docs/Web/API/SVGPreserveAspectRatio/align)
    void align(unsigned short value);
    /// [`SVGPreserveAspectRatio.meetOrSlice`](https://developer.mozilla.org/en-US/docs/Web/API/SVGPreserveAspectRatio/meetOrSlice)
    /// [`SVGPreserveAspectRatio.meetOrSlice`](https://developer.mozilla.org/en-US/docs/Web/API/SVGPreserveAspectRatio/meetOrSlice)
    [[nodiscard]] unsigned short meetOrSlice() const;
    /// Setter of the `meetOrSlice` attribute.
    /// [`SVGPreserveAspectRatio.meetOrSlice`](https://developer.mozilla.org/en-US/docs/Web/API/SVGPreserveAspectRatio/meetOrSlice)
    void meetOrSlice(unsigned short value);
};

} // namespace webbind