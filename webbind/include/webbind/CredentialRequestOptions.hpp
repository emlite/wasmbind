#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "PublicKeyCredentialRequestOptions.hpp"

namespace webbind {

/// Dictionary type CredentialRequestOptions
class CredentialRequestOptions : public emlite::Val {
  explicit CredentialRequestOptions(Handle h) noexcept;
public:
    static CredentialRequestOptions take_ownership(Handle h) noexcept;
    explicit CredentialRequestOptions(const emlite::Val &val) noexcept;
    CredentialRequestOptions() noexcept;
    [[nodiscard]] CredentialRequestOptions clone() const noexcept;
    /// Getter of the `publicKey` attribute.
    [[nodiscard]] PublicKeyCredentialRequestOptions publicKey() const;
    /// Setter of the `publicKey` attribute.
    void publicKey(const PublicKeyCredentialRequestOptions& value);
};

} // namespace webbind