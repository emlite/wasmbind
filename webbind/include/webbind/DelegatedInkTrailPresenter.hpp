#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "InkTrailStyle.hpp"

namespace webbind {

class Element;
class PointerEvent;

/// Interface DelegatedInkTrailPresenter
/// [`DelegatedInkTrailPresenter`](https://developer.mozilla.org/en-US/docs/Web/API/DelegatedInkTrailPresenter)
class DelegatedInkTrailPresenter : public emlite::Val {
    explicit DelegatedInkTrailPresenter(Handle h) noexcept;
public:
    explicit DelegatedInkTrailPresenter(const emlite::Val &val) noexcept;
    static DelegatedInkTrailPresenter take_ownership(Handle h) noexcept;
    [[nodiscard]] DelegatedInkTrailPresenter clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `presentationArea` attribute.
    /// [`DelegatedInkTrailPresenter.presentationArea`](https://developer.mozilla.org/en-US/docs/Web/API/DelegatedInkTrailPresenter/presentationArea)
    [[nodiscard]] Element presentationArea() const;
    /// The updateInkTrailStartPoint method.
    /// [`DelegatedInkTrailPresenter.updateInkTrailStartPoint`](https://developer.mozilla.org/en-US/docs/Web/API/DelegatedInkTrailPresenter/updateInkTrailStartPoint)
    jsbind::Undefined updateInkTrailStartPoint(const PointerEvent& event, const InkTrailStyle& style);
};

} // namespace webbind