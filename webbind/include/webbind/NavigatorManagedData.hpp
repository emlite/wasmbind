#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "enums.hpp"


class NavigatorManagedData : public EventTarget {
    explicit NavigatorManagedData(Handle h) noexcept;

public:
    explicit NavigatorManagedData(const emlite::Val &val) noexcept;
    static NavigatorManagedData take_ownership(Handle h) noexcept;

    NavigatorManagedData clone() const noexcept;
    jsbind::Promise<jsbind::Record<jsbind::String, jsbind::Object>> getManagedConfiguration(const jsbind::TypedArray<jsbind::String>& keys);
    jsbind::Any onmanagedconfigurationchange() const;
    void onmanagedconfigurationchange(const jsbind::Any& value);
    jsbind::Promise<jsbind::String> getAnnotatedAssetId();
    jsbind::Promise<jsbind::String> getAnnotatedLocation();
    jsbind::Promise<jsbind::String> getDirectoryId();
    jsbind::Promise<jsbind::String> getHostname();
    jsbind::Promise<jsbind::String> getSerialNumber();
};

