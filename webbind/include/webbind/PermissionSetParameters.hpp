#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type PermissionSetParameters
/// [`PermissionSetParameters`](https://developer.mozilla.org/en-US/docs/Web/API/PermissionSetParameters)
class PermissionSetParameters : public emlite::Val {
  explicit PermissionSetParameters(Handle h) noexcept;
public:
    static PermissionSetParameters take_ownership(Handle h) noexcept;
    explicit PermissionSetParameters(const emlite::Val &val) noexcept;
    PermissionSetParameters() noexcept;
    [[nodiscard]] PermissionSetParameters clone() const noexcept;
    [[nodiscard]] jsbind::Object descriptor() const;
    void descriptor(const jsbind::Object& value);
    [[nodiscard]] PermissionState state() const;
    void state(const PermissionState& value);
};

} // namespace webbind