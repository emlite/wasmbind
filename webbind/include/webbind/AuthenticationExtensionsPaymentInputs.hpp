#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "PublicKeyCredentialParameters.hpp"
#include "PaymentEntityLogo.hpp"
#include "PaymentCurrencyAmount.hpp"
#include "PaymentCredentialInstrument.hpp"

namespace webbind {

/// Dictionary type AuthenticationExtensionsPaymentInputs
/// [`AuthenticationExtensionsPaymentInputs`](https://developer.mozilla.org/en-US/docs/Web/API/AuthenticationExtensionsPaymentInputs)
class AuthenticationExtensionsPaymentInputs : public emlite::Val {
  explicit AuthenticationExtensionsPaymentInputs(Handle h) noexcept;
public:
    static AuthenticationExtensionsPaymentInputs take_ownership(Handle h) noexcept;
    explicit AuthenticationExtensionsPaymentInputs(const emlite::Val &val) noexcept;
    AuthenticationExtensionsPaymentInputs() noexcept;
    [[nodiscard]] AuthenticationExtensionsPaymentInputs clone() const noexcept;
    [[nodiscard]] bool isPayment() const;
    void isPayment(bool value);
    [[nodiscard]] jsbind::TypedArray<PublicKeyCredentialParameters> browserBoundPubKeyCredParams() const;
    void browserBoundPubKeyCredParams(const jsbind::TypedArray<PublicKeyCredentialParameters>& value);
    [[nodiscard]] jsbind::String rpId() const;
    void rpId(const jsbind::String& value);
    [[nodiscard]] jsbind::String topOrigin() const;
    void topOrigin(const jsbind::String& value);
    [[nodiscard]] jsbind::String payeeName() const;
    void payeeName(const jsbind::String& value);
    [[nodiscard]] jsbind::String payeeOrigin() const;
    void payeeOrigin(const jsbind::String& value);
    [[nodiscard]] jsbind::TypedArray<PaymentEntityLogo> paymentEntitiesLogos() const;
    void paymentEntitiesLogos(const jsbind::TypedArray<PaymentEntityLogo>& value);
    [[nodiscard]] PaymentCurrencyAmount total() const;
    void total(const PaymentCurrencyAmount& value);
    [[nodiscard]] PaymentCredentialInstrument instrument() const;
    void instrument(const PaymentCredentialInstrument& value);
};

} // namespace webbind