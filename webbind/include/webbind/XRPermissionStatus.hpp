#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "PermissionStatus.hpp"
#include "enums.hpp"


class XRPermissionStatus : public PermissionStatus {
    explicit XRPermissionStatus(Handle h) noexcept;

public:
    explicit XRPermissionStatus(const emlite::Val &val) noexcept;
    static XRPermissionStatus take_ownership(Handle h) noexcept;

    XRPermissionStatus clone() const noexcept;
    jsbind::FrozenArray<jsbind::DOMString> granted() const;
    void granted(const jsbind::FrozenArray<jsbind::DOMString>& value);
};

