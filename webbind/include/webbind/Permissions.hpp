#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class PermissionStatus;

/// Interface Permissions
/// [`Permissions`](https://developer.mozilla.org/en-US/docs/Web/API/Permissions)
class Permissions : public emlite::Val {
    explicit Permissions(Handle h) noexcept;
public:
    explicit Permissions(const emlite::Val &val) noexcept;
    static Permissions take_ownership(Handle h) noexcept;
    [[nodiscard]] Permissions clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The query method.
    /// [`Permissions.query`](https://developer.mozilla.org/en-US/docs/Web/API/Permissions/query)
    jsbind::Promise<PermissionStatus> query(const jsbind::Object& permissionDesc);
    /// The request method.
    /// [`Permissions.request`](https://developer.mozilla.org/en-US/docs/Web/API/Permissions/request)
    jsbind::Promise<PermissionStatus> request(const jsbind::Object& permissionDesc);
    /// The revoke method.
    /// [`Permissions.revoke`](https://developer.mozilla.org/en-US/docs/Web/API/Permissions/revoke)
    jsbind::Promise<PermissionStatus> revoke(const jsbind::Object& permissionDesc);
};

} // namespace webbind