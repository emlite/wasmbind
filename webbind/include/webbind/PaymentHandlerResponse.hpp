#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class AddressInit;

/// Dictionary type PaymentHandlerResponse
class PaymentHandlerResponse : public emlite::Val {
  explicit PaymentHandlerResponse(Handle h) noexcept;
public:
    static PaymentHandlerResponse take_ownership(Handle h) noexcept;
    explicit PaymentHandlerResponse(const emlite::Val &val) noexcept;
    PaymentHandlerResponse() noexcept;
    [[nodiscard]] PaymentHandlerResponse clone() const noexcept;
    /// Getter of the `methodName` attribute.
    [[nodiscard]] jsbind::String methodName() const;
    /// Setter of the `methodName` attribute.
    void methodName(const jsbind::String& value);
    /// Getter of the `details` attribute.
    [[nodiscard]] jsbind::Object details() const;
    /// Setter of the `details` attribute.
    void details(const jsbind::Object& value);
    /// Getter of the `payerName` attribute.
    [[nodiscard]] jsbind::String payerName() const;
    /// Setter of the `payerName` attribute.
    void payerName(const jsbind::String& value);
    /// Getter of the `payerEmail` attribute.
    [[nodiscard]] jsbind::String payerEmail() const;
    /// Setter of the `payerEmail` attribute.
    void payerEmail(const jsbind::String& value);
    /// Getter of the `payerPhone` attribute.
    [[nodiscard]] jsbind::String payerPhone() const;
    /// Setter of the `payerPhone` attribute.
    void payerPhone(const jsbind::String& value);
    /// Getter of the `shippingAddress` attribute.
    [[nodiscard]] AddressInit shippingAddress() const;
    /// Setter of the `shippingAddress` attribute.
    void shippingAddress(const AddressInit& value);
    /// Getter of the `shippingOption` attribute.
    [[nodiscard]] jsbind::String shippingOption() const;
    /// Setter of the `shippingOption` attribute.
    void shippingOption(const jsbind::String& value);
};

} // namespace webbind