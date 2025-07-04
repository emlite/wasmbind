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
    jsbind::DOMString brand() const;
    void brand(const jsbind::DOMString& value);
    jsbind::DOMString version() const;
    void version(const jsbind::DOMString& value);
};

class UADataValues : public emlite::Val {
  explicit UADataValues(Handle h) noexcept;
public:
    static UADataValues take_ownership(Handle h) noexcept;
    explicit UADataValues(const emlite::Val &val) noexcept;
    UADataValues() noexcept;
    UADataValues clone() const noexcept;
    jsbind::DOMString architecture() const;
    void architecture(const jsbind::DOMString& value);
    jsbind::DOMString bitness() const;
    void bitness(const jsbind::DOMString& value);
    jsbind::Sequence<NavigatorUABrandVersion> brands() const;
    void brands(const jsbind::Sequence<NavigatorUABrandVersion>& value);
    jsbind::Sequence<jsbind::DOMString> formFactors() const;
    void formFactors(const jsbind::Sequence<jsbind::DOMString>& value);
    jsbind::Sequence<NavigatorUABrandVersion> fullVersionList() const;
    void fullVersionList(const jsbind::Sequence<NavigatorUABrandVersion>& value);
    jsbind::DOMString model() const;
    void model(const jsbind::DOMString& value);
    bool mobile() const;
    void mobile(bool value);
    jsbind::DOMString platform() const;
    void platform(const jsbind::DOMString& value);
    jsbind::DOMString platformVersion() const;
    void platformVersion(const jsbind::DOMString& value);
    jsbind::DOMString uaFullVersion() const;
    void uaFullVersion(const jsbind::DOMString& value);
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
    jsbind::Sequence<NavigatorUABrandVersion> brands() const;
    void brands(const jsbind::Sequence<NavigatorUABrandVersion>& value);
    bool mobile() const;
    void mobile(bool value);
    jsbind::DOMString platform() const;
    void platform(const jsbind::DOMString& value);
};

class NavigatorUAData : public emlite::Val {
    explicit NavigatorUAData(Handle h) noexcept;

public:
    explicit NavigatorUAData(const emlite::Val &val) noexcept;
    static NavigatorUAData take_ownership(Handle h) noexcept;

    NavigatorUAData clone() const noexcept;
    jsbind::FrozenArray<NavigatorUABrandVersion> brands() const;
    bool mobile() const;
    jsbind::DOMString platform() const;
    jsbind::Promise getHighEntropyValues(const jsbind::Sequence<jsbind::DOMString>& hints);
    UALowEntropyJSON toJSON();
};

