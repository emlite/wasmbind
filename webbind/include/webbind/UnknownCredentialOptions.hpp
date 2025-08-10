#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type UnknownCredentialOptions
class UnknownCredentialOptions : public emlite::Val {
  explicit UnknownCredentialOptions(Handle h) noexcept;
public:
    static UnknownCredentialOptions take_ownership(Handle h) noexcept;
    explicit UnknownCredentialOptions(const emlite::Val &val) noexcept;
    UnknownCredentialOptions() noexcept;
    [[nodiscard]] UnknownCredentialOptions clone() const noexcept;
    /// Getter of the `rpId` attribute.
    [[nodiscard]] jsbind::String rpId() const;
    /// Setter of the `rpId` attribute.
    void rpId(const jsbind::String& value);
    /// Getter of the `credentialId` attribute.
    [[nodiscard]] jsbind::Any credentialId() const;
    /// Setter of the `credentialId` attribute.
    void credentialId(const jsbind::Any& value);
};

} // namespace webbind