#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type PaymentOptions
class PaymentOptions : public emlite::Val {
  explicit PaymentOptions(Handle h) noexcept;
public:
    static PaymentOptions take_ownership(Handle h) noexcept;
    explicit PaymentOptions(const emlite::Val &val) noexcept;
    PaymentOptions() noexcept;
    [[nodiscard]] PaymentOptions clone() const noexcept;
    /// Getter of the `requestPayerName` attribute.
    [[nodiscard]] bool requestPayerName() const;
    /// Setter of the `requestPayerName` attribute.
    void requestPayerName(bool value);
    /// Getter of the `requestBillingAddress` attribute.
    [[nodiscard]] bool requestBillingAddress() const;
    /// Setter of the `requestBillingAddress` attribute.
    void requestBillingAddress(bool value);
    /// Getter of the `requestPayerEmail` attribute.
    [[nodiscard]] bool requestPayerEmail() const;
    /// Setter of the `requestPayerEmail` attribute.
    void requestPayerEmail(bool value);
    /// Getter of the `requestPayerPhone` attribute.
    [[nodiscard]] bool requestPayerPhone() const;
    /// Setter of the `requestPayerPhone` attribute.
    void requestPayerPhone(bool value);
    /// Getter of the `requestShipping` attribute.
    [[nodiscard]] bool requestShipping() const;
    /// Setter of the `requestShipping` attribute.
    void requestShipping(bool value);
    /// Getter of the `shippingType` attribute.
    [[nodiscard]] PaymentShippingType shippingType() const;
    /// Setter of the `shippingType` attribute.
    void shippingType(const PaymentShippingType& value);
};

} // namespace webbind