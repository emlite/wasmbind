#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "PublicKeyCredentialCreationOptions.hpp"

namespace webbind {

/// Dictionary type CredentialCreationOptions
/// [`CredentialCreationOptions`](https://developer.mozilla.org/en-US/docs/Web/API/CredentialCreationOptions)
class CredentialCreationOptions : public emlite::Val {
  explicit CredentialCreationOptions(Handle h) noexcept;
public:
    static CredentialCreationOptions take_ownership(Handle h) noexcept;
    explicit CredentialCreationOptions(const emlite::Val &val) noexcept;
    CredentialCreationOptions() noexcept;
    [[nodiscard]] CredentialCreationOptions clone() const noexcept;
    [[nodiscard]] PublicKeyCredentialCreationOptions publicKey() const;
    void publicKey(const PublicKeyCredentialCreationOptions& value);
};

} // namespace webbind