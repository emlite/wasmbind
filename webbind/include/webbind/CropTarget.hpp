#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class CropTarget;
class Element;

/// Interface CropTarget
/// [`CropTarget`](https://developer.mozilla.org/en-US/docs/Web/API/CropTarget)
class CropTarget : public emlite::Val {
    explicit CropTarget(Handle h) noexcept;
public:
    explicit CropTarget(const emlite::Val &val) noexcept;
    static CropTarget take_ownership(Handle h) noexcept;
    [[nodiscard]] CropTarget clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The fromElement method.
    /// [`CropTarget.fromElement`](https://developer.mozilla.org/en-US/docs/Web/API/CropTarget/fromElement)
    static jsbind::Promise<CropTarget> fromElement(const Element& element);
};

} // namespace webbind