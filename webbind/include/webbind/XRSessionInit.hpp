#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type XRSessionInit
/// [`XRSessionInit`](https://developer.mozilla.org/en-US/docs/Web/API/XRSessionInit)
class XRSessionInit : public emlite::Val {
  explicit XRSessionInit(Handle h) noexcept;
public:
    static XRSessionInit take_ownership(Handle h) noexcept;
    explicit XRSessionInit(const emlite::Val &val) noexcept;
    XRSessionInit() noexcept;
    [[nodiscard]] XRSessionInit clone() const noexcept;
    [[nodiscard]] jsbind::TypedArray<jsbind::String> requiredFeatures() const;
    void requiredFeatures(const jsbind::TypedArray<jsbind::String>& value);
    [[nodiscard]] jsbind::TypedArray<jsbind::String> optionalFeatures() const;
    void optionalFeatures(const jsbind::TypedArray<jsbind::String>& value);
};

} // namespace webbind