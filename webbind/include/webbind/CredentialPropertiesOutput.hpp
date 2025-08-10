#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type CredentialPropertiesOutput
class CredentialPropertiesOutput : public emlite::Val {
  explicit CredentialPropertiesOutput(Handle h) noexcept;
public:
    static CredentialPropertiesOutput take_ownership(Handle h) noexcept;
    explicit CredentialPropertiesOutput(const emlite::Val &val) noexcept;
    CredentialPropertiesOutput() noexcept;
    [[nodiscard]] CredentialPropertiesOutput clone() const noexcept;
    /// Getter of the `rk` attribute.
    [[nodiscard]] bool rk() const;
    /// Setter of the `rk` attribute.
    void rk(bool value);
};

} // namespace webbind