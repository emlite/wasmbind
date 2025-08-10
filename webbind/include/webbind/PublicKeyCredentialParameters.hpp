#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type PublicKeyCredentialParameters
class PublicKeyCredentialParameters : public emlite::Val {
  explicit PublicKeyCredentialParameters(Handle h) noexcept;
public:
    static PublicKeyCredentialParameters take_ownership(Handle h) noexcept;
    explicit PublicKeyCredentialParameters(const emlite::Val &val) noexcept;
    PublicKeyCredentialParameters() noexcept;
    [[nodiscard]] PublicKeyCredentialParameters clone() const noexcept;
    /// Getter of the `type` attribute.
    [[nodiscard]] jsbind::String type() const;
    /// Setter of the `type` attribute.
    void type(const jsbind::String& value);
    /// Getter of the `alg` attribute.
    [[nodiscard]] jsbind::Any alg() const;
    /// Setter of the `alg` attribute.
    void alg(const jsbind::Any& value);
};

} // namespace webbind