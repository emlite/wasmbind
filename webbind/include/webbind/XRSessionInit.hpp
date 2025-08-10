#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type XRSessionInit
class XRSessionInit : public emlite::Val {
  explicit XRSessionInit(Handle h) noexcept;
public:
    static XRSessionInit take_ownership(Handle h) noexcept;
    explicit XRSessionInit(const emlite::Val &val) noexcept;
    XRSessionInit() noexcept;
    [[nodiscard]] XRSessionInit clone() const noexcept;
    /// Getter of the `requiredFeatures` attribute.
    [[nodiscard]] jsbind::TypedArray<jsbind::String> requiredFeatures() const;
    /// Setter of the `requiredFeatures` attribute.
    void requiredFeatures(const jsbind::TypedArray<jsbind::String>& value);
    /// Getter of the `optionalFeatures` attribute.
    [[nodiscard]] jsbind::TypedArray<jsbind::String> optionalFeatures() const;
    /// Setter of the `optionalFeatures` attribute.
    void optionalFeatures(const jsbind::TypedArray<jsbind::String>& value);
};

} // namespace webbind