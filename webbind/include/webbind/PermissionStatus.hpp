#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "enums.hpp"


class PermissionStatus : public EventTarget {
    explicit PermissionStatus(Handle h) noexcept;

public:
    explicit PermissionStatus(const emlite::Val &val) noexcept;
    static PermissionStatus take_ownership(Handle h) noexcept;

    PermissionStatus clone() const noexcept;
    PermissionState state() const;
    jsbind::DOMString name() const;
    jsbind::Any onchange() const;
    void onchange(const jsbind::Any& value);
};

