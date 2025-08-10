#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "PublicKeyCredentialDescriptorJSON.hpp"
#include "AuthenticationExtensionsClientInputsJSON.hpp"

namespace webbind {

/// Dictionary type PublicKeyCredentialRequestOptionsJSON
/// [`PublicKeyCredentialRequestOptionsJSON`](https://developer.mozilla.org/en-US/docs/Web/API/PublicKeyCredentialRequestOptionsJSON)
class PublicKeyCredentialRequestOptionsJSON : public emlite::Val {
  explicit PublicKeyCredentialRequestOptionsJSON(Handle h) noexcept;
public:
    static PublicKeyCredentialRequestOptionsJSON take_ownership(Handle h) noexcept;
    explicit PublicKeyCredentialRequestOptionsJSON(const emlite::Val &val) noexcept;
    PublicKeyCredentialRequestOptionsJSON() noexcept;
    [[nodiscard]] PublicKeyCredentialRequestOptionsJSON clone() const noexcept;
    [[nodiscard]] jsbind::Any challenge() const;
    void challenge(const jsbind::Any& value);
    [[nodiscard]] unsigned long timeout() const;
    void timeout(unsigned long value);
    [[nodiscard]] jsbind::String rpId() const;
    void rpId(const jsbind::String& value);
    [[nodiscard]] jsbind::TypedArray<PublicKeyCredentialDescriptorJSON> allowCredentials() const;
    void allowCredentials(const jsbind::TypedArray<PublicKeyCredentialDescriptorJSON>& value);
    [[nodiscard]] jsbind::String userVerification() const;
    void userVerification(const jsbind::String& value);
    [[nodiscard]] jsbind::TypedArray<jsbind::String> hints() const;
    void hints(const jsbind::TypedArray<jsbind::String>& value);
    [[nodiscard]] AuthenticationExtensionsClientInputsJSON extensions() const;
    void extensions(const AuthenticationExtensionsClientInputsJSON& value);
};

} // namespace webbind