#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class NavigatorUABrandVersion;

/// Dictionary type UADataValues
class UADataValues : public emlite::Val {
  explicit UADataValues(Handle h) noexcept;
public:
    static UADataValues take_ownership(Handle h) noexcept;
    explicit UADataValues(const emlite::Val &val) noexcept;
    UADataValues() noexcept;
    [[nodiscard]] UADataValues clone() const noexcept;
    /// Getter of the `architecture` attribute.
    [[nodiscard]] jsbind::String architecture() const;
    /// Setter of the `architecture` attribute.
    void architecture(const jsbind::String& value);
    /// Getter of the `bitness` attribute.
    [[nodiscard]] jsbind::String bitness() const;
    /// Setter of the `bitness` attribute.
    void bitness(const jsbind::String& value);
    /// Getter of the `brands` attribute.
    [[nodiscard]] jsbind::TypedArray<NavigatorUABrandVersion> brands() const;
    /// Setter of the `brands` attribute.
    void brands(const jsbind::TypedArray<NavigatorUABrandVersion>& value);
    /// Getter of the `formFactors` attribute.
    [[nodiscard]] jsbind::TypedArray<jsbind::String> formFactors() const;
    /// Setter of the `formFactors` attribute.
    void formFactors(const jsbind::TypedArray<jsbind::String>& value);
    /// Getter of the `fullVersionList` attribute.
    [[nodiscard]] jsbind::TypedArray<NavigatorUABrandVersion> fullVersionList() const;
    /// Setter of the `fullVersionList` attribute.
    void fullVersionList(const jsbind::TypedArray<NavigatorUABrandVersion>& value);
    /// Getter of the `model` attribute.
    [[nodiscard]] jsbind::String model() const;
    /// Setter of the `model` attribute.
    void model(const jsbind::String& value);
    /// Getter of the `mobile` attribute.
    [[nodiscard]] bool mobile() const;
    /// Setter of the `mobile` attribute.
    void mobile(bool value);
    /// Getter of the `platform` attribute.
    [[nodiscard]] jsbind::String platform() const;
    /// Setter of the `platform` attribute.
    void platform(const jsbind::String& value);
    /// Getter of the `platformVersion` attribute.
    [[nodiscard]] jsbind::String platformVersion() const;
    /// Setter of the `platformVersion` attribute.
    void platformVersion(const jsbind::String& value);
    /// Getter of the `uaFullVersion` attribute.
    [[nodiscard]] jsbind::String uaFullVersion() const;
    /// Setter of the `uaFullVersion` attribute.
    void uaFullVersion(const jsbind::String& value);
    /// Getter of the `wow64` attribute.
    [[nodiscard]] bool wow64() const;
    /// Setter of the `wow64` attribute.
    void wow64(bool value);
};

} // namespace webbind