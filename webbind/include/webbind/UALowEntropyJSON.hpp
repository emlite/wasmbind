#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class NavigatorUABrandVersion;

/// Dictionary type UALowEntropyJSON
class UALowEntropyJSON : public emlite::Val {
  explicit UALowEntropyJSON(Handle h) noexcept;
public:
    static UALowEntropyJSON take_ownership(Handle h) noexcept;
    explicit UALowEntropyJSON(const emlite::Val &val) noexcept;
    UALowEntropyJSON() noexcept;
    [[nodiscard]] UALowEntropyJSON clone() const noexcept;
    /// Getter of the `brands` attribute.
    [[nodiscard]] jsbind::TypedArray<NavigatorUABrandVersion> brands() const;
    /// Setter of the `brands` attribute.
    void brands(const jsbind::TypedArray<NavigatorUABrandVersion>& value);
    /// Getter of the `mobile` attribute.
    [[nodiscard]] bool mobile() const;
    /// Setter of the `mobile` attribute.
    void mobile(bool value);
    /// Getter of the `platform` attribute.
    [[nodiscard]] jsbind::String platform() const;
    /// Setter of the `platform` attribute.
    void platform(const jsbind::String& value);
};

} // namespace webbind