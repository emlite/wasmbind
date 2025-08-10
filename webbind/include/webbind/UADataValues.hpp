#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "NavigatorUABrandVersion.hpp"

namespace webbind {

/// Dictionary type UADataValues
/// [`UADataValues`](https://developer.mozilla.org/en-US/docs/Web/API/UADataValues)
class UADataValues : public emlite::Val {
  explicit UADataValues(Handle h) noexcept;
public:
    static UADataValues take_ownership(Handle h) noexcept;
    explicit UADataValues(const emlite::Val &val) noexcept;
    UADataValues() noexcept;
    [[nodiscard]] UADataValues clone() const noexcept;
    [[nodiscard]] jsbind::String architecture() const;
    void architecture(const jsbind::String& value);
    [[nodiscard]] jsbind::String bitness() const;
    void bitness(const jsbind::String& value);
    [[nodiscard]] jsbind::TypedArray<NavigatorUABrandVersion> brands() const;
    void brands(const jsbind::TypedArray<NavigatorUABrandVersion>& value);
    [[nodiscard]] jsbind::TypedArray<jsbind::String> formFactors() const;
    void formFactors(const jsbind::TypedArray<jsbind::String>& value);
    [[nodiscard]] jsbind::TypedArray<NavigatorUABrandVersion> fullVersionList() const;
    void fullVersionList(const jsbind::TypedArray<NavigatorUABrandVersion>& value);
    [[nodiscard]] jsbind::String model() const;
    void model(const jsbind::String& value);
    [[nodiscard]] bool mobile() const;
    void mobile(bool value);
    [[nodiscard]] jsbind::String platform() const;
    void platform(const jsbind::String& value);
    [[nodiscard]] jsbind::String platformVersion() const;
    void platformVersion(const jsbind::String& value);
    [[nodiscard]] jsbind::String uaFullVersion() const;
    void uaFullVersion(const jsbind::String& value);
    [[nodiscard]] bool wow64() const;
    void wow64(bool value);
};

} // namespace webbind