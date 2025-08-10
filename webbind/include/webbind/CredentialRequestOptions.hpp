#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "PublicKeyCredentialRequestOptions.hpp"

namespace webbind {

/// Dictionary type CredentialRequestOptions
/// [`CredentialRequestOptions`](https://developer.mozilla.org/en-US/docs/Web/API/CredentialRequestOptions)
class CredentialRequestOptions : public emlite::Val {
  explicit CredentialRequestOptions(Handle h) noexcept;
public:
    static CredentialRequestOptions take_ownership(Handle h) noexcept;
    explicit CredentialRequestOptions(const emlite::Val &val) noexcept;
    CredentialRequestOptions() noexcept;
    [[nodiscard]] CredentialRequestOptions clone() const noexcept;
    [[nodiscard]] PublicKeyCredentialRequestOptions publicKey() const;
    void publicKey(const PublicKeyCredentialRequestOptions& value);
};

} // namespace webbind