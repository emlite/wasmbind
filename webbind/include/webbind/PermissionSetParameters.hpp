#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type PermissionSetParameters
class PermissionSetParameters : public emlite::Val {
  explicit PermissionSetParameters(Handle h) noexcept;
public:
    static PermissionSetParameters take_ownership(Handle h) noexcept;
    explicit PermissionSetParameters(const emlite::Val &val) noexcept;
    PermissionSetParameters() noexcept;
    [[nodiscard]] PermissionSetParameters clone() const noexcept;
    /// Getter of the `descriptor` attribute.
    [[nodiscard]] jsbind::Object descriptor() const;
    /// Setter of the `descriptor` attribute.
    void descriptor(const jsbind::Object& value);
    /// Getter of the `state` attribute.
    [[nodiscard]] PermissionState state() const;
    /// Setter of the `state` attribute.
    void state(const PermissionState& value);
};

} // namespace webbind