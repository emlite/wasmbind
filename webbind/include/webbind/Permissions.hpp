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
    jsbind::Promise<PermissionStatus> query(const jsbind::Object& permissionDesc);
    jsbind::Promise<PermissionStatus> request(const jsbind::Object& permissionDesc);
    jsbind::Promise<PermissionStatus> revoke(const jsbind::Object& permissionDesc);
};

