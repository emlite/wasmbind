#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class PublicKeyCredentialParameters;
class PaymentEntityLogo;
class PaymentCurrencyAmount;
class PaymentCredentialInstrument;

/// Dictionary type AuthenticationExtensionsPaymentInputs
class AuthenticationExtensionsPaymentInputs : public emlite::Val {
  explicit AuthenticationExtensionsPaymentInputs(Handle h) noexcept;
public:
    static AuthenticationExtensionsPaymentInputs take_ownership(Handle h) noexcept;
    explicit AuthenticationExtensionsPaymentInputs(const emlite::Val &val) noexcept;
    AuthenticationExtensionsPaymentInputs() noexcept;
    [[nodiscard]] AuthenticationExtensionsPaymentInputs clone() const noexcept;
    /// Getter of the `isPayment` attribute.
    [[nodiscard]] bool isPayment() const;
    /// Setter of the `isPayment` attribute.
    void isPayment(bool value);
    /// Getter of the `browserBoundPubKeyCredParams` attribute.
    [[nodiscard]] jsbind::TypedArray<PublicKeyCredentialParameters> browserBoundPubKeyCredParams() const;
    /// Setter of the `browserBoundPubKeyCredParams` attribute.
    void browserBoundPubKeyCredParams(const jsbind::TypedArray<PublicKeyCredentialParameters>& value);
    /// Getter of the `rpId` attribute.
    [[nodiscard]] jsbind::String rpId() const;
    /// Setter of the `rpId` attribute.
    void rpId(const jsbind::String& value);
    /// Getter of the `topOrigin` attribute.
    [[nodiscard]] jsbind::String topOrigin() const;
    /// Setter of the `topOrigin` attribute.
    void topOrigin(const jsbind::String& value);
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
    /// Getter of the `total` attribute.
    [[nodiscard]] PaymentCurrencyAmount total() const;
    /// Setter of the `total` attribute.
    void total(const PaymentCurrencyAmount& value);
    /// Getter of the `instrument` attribute.
    [[nodiscard]] PaymentCredentialInstrument instrument() const;
    /// Setter of the `instrument` attribute.
    void instrument(const PaymentCredentialInstrument& value);
};

} // namespace webbind