#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class NavigatorUABrandVersion;
class UADataValues;
class UALowEntropyJSON;


class NavigatorUABrandVersion : public emlite::Val {
  explicit NavigatorUABrandVersion(Handle h) noexcept;
public:
    static NavigatorUABrandVersion take_ownership(Handle h) noexcept;
    explicit NavigatorUABrandVersion(const emlite::Val &val) noexcept;
    NavigatorUABrandVersion() noexcept;
    [[nodiscard]] NavigatorUABrandVersion clone() const noexcept;
    [[nodiscard]] jsbind::String brand() const;
    void brand(const jsbind::String& value);
    [[nodiscard]] jsbind::String version() const;
    void version(const jsbind::String& value);
};

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

class UALowEntropyJSON : public emlite::Val {
  explicit UALowEntropyJSON(Handle h) noexcept;
public:
    static UALowEntropyJSON take_ownership(Handle h) noexcept;
    explicit UALowEntropyJSON(const emlite::Val &val) noexcept;
    UALowEntropyJSON() noexcept;
    [[nodiscard]] UALowEntropyJSON clone() const noexcept;
    [[nodiscard]] jsbind::TypedArray<NavigatorUABrandVersion> brands() const;
    void brands(const jsbind::TypedArray<NavigatorUABrandVersion>& value);
    [[nodiscard]] bool mobile() const;
    void mobile(bool value);
    [[nodiscard]] jsbind::String platform() const;
    void platform(const jsbind::String& value);
};

/// The NavigatorUAData class.
/// [`NavigatorUAData`](https://developer.mozilla.org/en-US/docs/Web/API/NavigatorUAData)
class NavigatorUAData : public emlite::Val {
    explicit NavigatorUAData(Handle h) noexcept;

public:
    explicit NavigatorUAData(const emlite::Val &val) noexcept;
    static NavigatorUAData take_ownership(Handle h) noexcept;

    [[nodiscard]] NavigatorUAData clone() const noexcept;
    /// Getter of the `brands` attribute.
    /// [`NavigatorUAData.brands`](https://developer.mozilla.org/en-US/docs/Web/API/NavigatorUAData/brands)
    [[nodiscard]] jsbind::TypedArray<NavigatorUABrandVersion> brands() const;
    /// Getter of the `mobile` attribute.
    /// [`NavigatorUAData.mobile`](https://developer.mozilla.org/en-US/docs/Web/API/NavigatorUAData/mobile)
    [[nodiscard]] bool mobile() const;
    /// Getter of the `platform` attribute.
    /// [`NavigatorUAData.platform`](https://developer.mozilla.org/en-US/docs/Web/API/NavigatorUAData/platform)
    [[nodiscard]] jsbind::String platform() const;
    /// The getHighEntropyValues method.
    /// [`NavigatorUAData.getHighEntropyValues`](https://developer.mozilla.org/en-US/docs/Web/API/NavigatorUAData/getHighEntropyValues)
    jsbind::Promise<UADataValues> getHighEntropyValues(const jsbind::TypedArray<jsbind::String>& hints);
    /// The toJSON method.
    /// [`NavigatorUAData.toJSON`](https://developer.mozilla.org/en-US/docs/Web/API/NavigatorUAData/toJSON)
    UALowEntropyJSON toJSON();
};

