#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "PaymentEntityLogo.hpp"
#include "PaymentCurrencyAmount.hpp"
#include "PaymentCredentialInstrument.hpp"

namespace webbind {

/// Dictionary type CollectedClientAdditionalPaymentData
/// [`CollectedClientAdditionalPaymentData`](https://developer.mozilla.org/en-US/docs/Web/API/CollectedClientAdditionalPaymentData)
class CollectedClientAdditionalPaymentData : public emlite::Val {
  explicit CollectedClientAdditionalPaymentData(Handle h) noexcept;
public:
    static CollectedClientAdditionalPaymentData take_ownership(Handle h) noexcept;
    explicit CollectedClientAdditionalPaymentData(const emlite::Val &val) noexcept;
    CollectedClientAdditionalPaymentData() noexcept;
    [[nodiscard]] CollectedClientAdditionalPaymentData clone() const noexcept;
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
    [[nodiscard]] jsbind::String browserBoundPublicKey() const;
    void browserBoundPublicKey(const jsbind::String& value);
};

} // namespace webbind