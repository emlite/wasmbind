#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "PaymentEntityLogo.hpp"
#include "PaymentCurrencyAmount.hpp"
#include "PaymentCredentialInstrument.hpp"

namespace webbind {

/// Dictionary type CollectedClientAdditionalPaymentData
class CollectedClientAdditionalPaymentData : public emlite::Val {
  explicit CollectedClientAdditionalPaymentData(Handle h) noexcept;
public:
    static CollectedClientAdditionalPaymentData take_ownership(Handle h) noexcept;
    explicit CollectedClientAdditionalPaymentData(const emlite::Val &val) noexcept;
    CollectedClientAdditionalPaymentData() noexcept;
    [[nodiscard]] CollectedClientAdditionalPaymentData clone() const noexcept;
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
    /// Getter of the `browserBoundPublicKey` attribute.
    [[nodiscard]] jsbind::String browserBoundPublicKey() const;
    /// Setter of the `browserBoundPublicKey` attribute.
    void browserBoundPublicKey(const jsbind::String& value);
};

} // namespace webbind