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
    jsbind::Promise getManagedConfiguration(const jsbind::Sequence<jsbind::DOMString>& keys);
    jsbind::Any onmanagedconfigurationchange() const;
    void onmanagedconfigurationchange(const jsbind::Any& value);
    jsbind::Promise getAnnotatedAssetId();
    jsbind::Promise getAnnotatedLocation();
    jsbind::Promise getDirectoryId();
    jsbind::Promise getHostname();
    jsbind::Promise getSerialNumber();
};

