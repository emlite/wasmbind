#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "PublicKeyCredentialDescriptor.hpp"
#include "AuthenticationExtensionsClientInputs.hpp"

namespace webbind {

/// Dictionary type PublicKeyCredentialRequestOptions
/// [`PublicKeyCredentialRequestOptions`](https://developer.mozilla.org/en-US/docs/Web/API/PublicKeyCredentialRequestOptions)
class PublicKeyCredentialRequestOptions : public emlite::Val {
  explicit PublicKeyCredentialRequestOptions(Handle h) noexcept;
public:
    static PublicKeyCredentialRequestOptions take_ownership(Handle h) noexcept;
    explicit PublicKeyCredentialRequestOptions(const emlite::Val &val) noexcept;
    PublicKeyCredentialRequestOptions() noexcept;
    [[nodiscard]] PublicKeyCredentialRequestOptions clone() const noexcept;
    [[nodiscard]] jsbind::Any challenge() const;
    void challenge(const jsbind::Any& value);
    [[nodiscard]] unsigned long timeout() const;
    void timeout(unsigned long value);
    [[nodiscard]] jsbind::String rpId() const;
    void rpId(const jsbind::String& value);
    [[nodiscard]] jsbind::TypedArray<PublicKeyCredentialDescriptor> allowCredentials() const;
    void allowCredentials(const jsbind::TypedArray<PublicKeyCredentialDescriptor>& value);
    [[nodiscard]] jsbind::String userVerification() const;
    void userVerification(const jsbind::String& value);
    [[nodiscard]] jsbind::TypedArray<jsbind::String> hints() const;
    void hints(const jsbind::TypedArray<jsbind::String>& value);
    [[nodiscard]] AuthenticationExtensionsClientInputs extensions() const;
    void extensions(const AuthenticationExtensionsClientInputs& value);
};

} // namespace webbind