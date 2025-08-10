#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class PaymentCredentialInstrument;
class PaymentEntityLogo;
class AuthenticationExtensionsClientInputs;
class PublicKeyCredentialParameters;

/// Dictionary type SecurePaymentConfirmationRequest
class SecurePaymentConfirmationRequest : public emlite::Val {
  explicit SecurePaymentConfirmationRequest(Handle h) noexcept;
public:
    static SecurePaymentConfirmationRequest take_ownership(Handle h) noexcept;
    explicit SecurePaymentConfirmationRequest(const emlite::Val &val) noexcept;
    SecurePaymentConfirmationRequest() noexcept;
    [[nodiscard]] SecurePaymentConfirmationRequest clone() const noexcept;
    /// Getter of the `challenge` attribute.
    [[nodiscard]] jsbind::Any challenge() const;
    /// Setter of the `challenge` attribute.
    void challenge(const jsbind::Any& value);
    /// Getter of the `rpId` attribute.
    [[nodiscard]] jsbind::String rpId() const;
    /// Setter of the `rpId` attribute.
    void rpId(const jsbind::String& value);
    /// Getter of the `credentialIds` attribute.
    [[nodiscard]] jsbind::TypedArray<jsbind::Any> credentialIds() const;
    /// Setter of the `credentialIds` attribute.
    void credentialIds(const jsbind::TypedArray<jsbind::Any>& value);
    /// Getter of the `instrument` attribute.
    [[nodiscard]] PaymentCredentialInstrument instrument() const;
    /// Setter of the `instrument` attribute.
    void instrument(const PaymentCredentialInstrument& value);
    /// Getter of the `timeout` attribute.
    [[nodiscard]] unsigned long timeout() const;
    /// Setter of the `timeout` attribute.
    void timeout(unsigned long value);
    /// Getter of the `payeeName` attribute.
    [[nodiscard]] jsbind::String payeeName() const;
    /// Setter of the `payeeName` attribute.
    void payeeName(const jsbind::String& value);
    /// Getter of the `payeeOrigin` attribute.
    [[nodiscard]] jsbind::String payeeOrigin() const;
    /// Setter of the `payeeOrigin` attribute.
    void payeeOrigin(const jsbind::String& value);
    /// Getter of the `paymentEntitiesLogos` attribute.
    [[nodiscard]] jsbind::TypedArray<PaymentEntityLogo> paymentEntitiesLogos() const;
    /// Setter of the `paymentEntitiesLogos` attribute.
    void paymentEntitiesLogos(const jsbind::TypedArray<PaymentEntityLogo>& value);
    /// Getter of the `extensions` attribute.
    [[nodiscard]] AuthenticationExtensionsClientInputs extensions() const;
    /// Setter of the `extensions` attribute.
    void extensions(const AuthenticationExtensionsClientInputs& value);
    /// Getter of the `browserBoundPubKeyCredParams` attribute.
    [[nodiscard]] jsbind::TypedArray<PublicKeyCredentialParameters> browserBoundPubKeyCredParams() const;
    /// Setter of the `browserBoundPubKeyCredParams` attribute.
    void browserBoundPubKeyCredParams(const jsbind::TypedArray<PublicKeyCredentialParameters>& value);
    /// Getter of the `locale` attribute.
    [[nodiscard]] jsbind::TypedArray<jsbind::String> locale() const;
    /// Setter of the `locale` attribute.
    void locale(const jsbind::TypedArray<jsbind::String>& value);
    /// Getter of the `showOptOut` attribute.
    [[nodiscard]] bool showOptOut() const;
    /// Setter of the `showOptOut` attribute.
    void showOptOut(bool value);
};

} // namespace webbind