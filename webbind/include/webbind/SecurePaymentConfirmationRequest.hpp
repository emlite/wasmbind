#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "PaymentCredentialInstrument.hpp"
#include "PaymentEntityLogo.hpp"
#include "AuthenticationExtensionsClientInputs.hpp"
#include "PublicKeyCredentialParameters.hpp"

namespace webbind {

/// Dictionary type SecurePaymentConfirmationRequest
/// [`SecurePaymentConfirmationRequest`](https://developer.mozilla.org/en-US/docs/Web/API/SecurePaymentConfirmationRequest)
class SecurePaymentConfirmationRequest : public emlite::Val {
  explicit SecurePaymentConfirmationRequest(Handle h) noexcept;
public:
    static SecurePaymentConfirmationRequest take_ownership(Handle h) noexcept;
    explicit SecurePaymentConfirmationRequest(const emlite::Val &val) noexcept;
    SecurePaymentConfirmationRequest() noexcept;
    [[nodiscard]] SecurePaymentConfirmationRequest clone() const noexcept;
    [[nodiscard]] jsbind::Any challenge() const;
    void challenge(const jsbind::Any& value);
    [[nodiscard]] jsbind::String rpId() const;
    void rpId(const jsbind::String& value);
    [[nodiscard]] jsbind::TypedArray<jsbind::Any> credentialIds() const;
    void credentialIds(const jsbind::TypedArray<jsbind::Any>& value);
    [[nodiscard]] PaymentCredentialInstrument instrument() const;
    void instrument(const PaymentCredentialInstrument& value);
    [[nodiscard]] unsigned long timeout() const;
    void timeout(unsigned long value);
    [[nodiscard]] jsbind::String payeeName() const;
    void payeeName(const jsbind::String& value);
    [[nodiscard]] jsbind::String payeeOrigin() const;
    void payeeOrigin(const jsbind::String& value);
    [[nodiscard]] jsbind::TypedArray<PaymentEntityLogo> paymentEntitiesLogos() const;
    void paymentEntitiesLogos(const jsbind::TypedArray<PaymentEntityLogo>& value);
    [[nodiscard]] AuthenticationExtensionsClientInputs extensions() const;
    void extensions(const AuthenticationExtensionsClientInputs& value);
    [[nodiscard]] jsbind::TypedArray<PublicKeyCredentialParameters> browserBoundPubKeyCredParams() const;
    void browserBoundPubKeyCredParams(const jsbind::TypedArray<PublicKeyCredentialParameters>& value);
    [[nodiscard]] jsbind::TypedArray<jsbind::String> locale() const;
    void locale(const jsbind::TypedArray<jsbind::String>& value);
    [[nodiscard]] bool showOptOut() const;
    void showOptOut(bool value);
};

} // namespace webbind