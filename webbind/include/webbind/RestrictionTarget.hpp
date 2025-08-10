#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class RestrictionTarget;
class Element;

/// Interface RestrictionTarget
/// [`RestrictionTarget`](https://developer.mozilla.org/en-US/docs/Web/API/RestrictionTarget)
class RestrictionTarget : public emlite::Val {
    explicit RestrictionTarget(Handle h) noexcept;
public:
    explicit RestrictionTarget(const emlite::Val &val) noexcept;
    static RestrictionTarget take_ownership(Handle h) noexcept;
    [[nodiscard]] RestrictionTarget clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The fromElement method.
    /// [`RestrictionTarget.fromElement`](https://developer.mozilla.org/en-US/docs/Web/API/RestrictionTarget/fromElement)
    static jsbind::Promise<RestrictionTarget> fromElement(const Element& element);
};

} // namespace webbind