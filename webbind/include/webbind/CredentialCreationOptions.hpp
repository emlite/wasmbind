#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class PublicKeyCredentialCreationOptions;

/// Dictionary type CredentialCreationOptions
class CredentialCreationOptions : public emlite::Val {
  explicit CredentialCreationOptions(Handle h) noexcept;
public:
    static CredentialCreationOptions take_ownership(Handle h) noexcept;
    explicit CredentialCreationOptions(const emlite::Val &val) noexcept;
    CredentialCreationOptions() noexcept;
    [[nodiscard]] CredentialCreationOptions clone() const noexcept;
    /// Getter of the `publicKey` attribute.
    [[nodiscard]] PublicKeyCredentialCreationOptions publicKey() const;
    /// Setter of the `publicKey` attribute.
    void publicKey(const PublicKeyCredentialCreationOptions& value);
};

} // namespace webbind