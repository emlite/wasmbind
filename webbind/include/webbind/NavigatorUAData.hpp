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
    NavigatorUABrandVersion clone() const noexcept;
    jsbind::String brand() const;
    void brand(const jsbind::String& value);
    jsbind::String version() const;
    void version(const jsbind::String& value);
};

class UADataValues : public emlite::Val {
  explicit UADataValues(Handle h) noexcept;
public:
    static UADataValues take_ownership(Handle h) noexcept;
    explicit UADataValues(const emlite::Val &val) noexcept;
    UADataValues() noexcept;
    UADataValues clone() const noexcept;
    jsbind::String architecture() const;
    void architecture(const jsbind::String& value);
    jsbind::String bitness() const;
    void bitness(const jsbind::String& value);
    jsbind::TypedArray<NavigatorUABrandVersion> brands() const;
    void brands(const jsbind::TypedArray<NavigatorUABrandVersion>& value);
    jsbind::TypedArray<jsbind::String> formFactors() const;
    void formFactors(const jsbind::TypedArray<jsbind::String>& value);
    jsbind::TypedArray<NavigatorUABrandVersion> fullVersionList() const;
    void fullVersionList(const jsbind::TypedArray<NavigatorUABrandVersion>& value);
    jsbind::String model() const;
    void model(const jsbind::String& value);
    bool mobile() const;
    void mobile(bool value);
    jsbind::String platform() const;
    void platform(const jsbind::String& value);
    jsbind::String platformVersion() const;
    void platformVersion(const jsbind::String& value);
    jsbind::String uaFullVersion() const;
    void uaFullVersion(const jsbind::String& value);
    bool wow64() const;
    void wow64(bool value);
};

class UALowEntropyJSON : public emlite::Val {
  explicit UALowEntropyJSON(Handle h) noexcept;
public:
    static UALowEntropyJSON take_ownership(Handle h) noexcept;
    explicit UALowEntropyJSON(const emlite::Val &val) noexcept;
    UALowEntropyJSON() noexcept;
    UALowEntropyJSON clone() const noexcept;
    jsbind::TypedArray<NavigatorUABrandVersion> brands() const;
    void brands(const jsbind::TypedArray<NavigatorUABrandVersion>& value);
    bool mobile() const;
    void mobile(bool value);
    jsbind::String platform() const;
    void platform(const jsbind::String& value);
};

class NavigatorUAData : public emlite::Val {
    explicit NavigatorUAData(Handle h) noexcept;

public:
    explicit NavigatorUAData(const emlite::Val &val) noexcept;
    static NavigatorUAData take_ownership(Handle h) noexcept;

    NavigatorUAData clone() const noexcept;
    jsbind::TypedArray<NavigatorUABrandVersion> brands() const;
    bool mobile() const;
    jsbind::String platform() const;
    jsbind::Promise<UADataValues> getHighEntropyValues(const jsbind::TypedArray<jsbind::String>& hints);
    UALowEntropyJSON toJSON();
};

