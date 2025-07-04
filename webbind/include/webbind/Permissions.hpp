#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class PermissionStatus;


class Permissions : public emlite::Val {
    explicit Permissions(Handle h) noexcept;

public:
    explicit Permissions(const emlite::Val &val) noexcept;
    static Permissions take_ownership(Handle h) noexcept;

    Permissions clone() const noexcept;
    jsbind::Promise query(const jsbind::Object& permissionDesc);
    jsbind::Promise request(const jsbind::Object& permissionDesc);
    jsbind::Promise revoke(const jsbind::Object& permissionDesc);
};

