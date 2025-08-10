#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "AddressInit.hpp"

namespace webbind {

/// Dictionary type PaymentHandlerResponse
/// [`PaymentHandlerResponse`](https://developer.mozilla.org/en-US/docs/Web/API/PaymentHandlerResponse)
class PaymentHandlerResponse : public emlite::Val {
  explicit PaymentHandlerResponse(Handle h) noexcept;
public:
    static PaymentHandlerResponse take_ownership(Handle h) noexcept;
    explicit PaymentHandlerResponse(const emlite::Val &val) noexcept;
    PaymentHandlerResponse() noexcept;
    [[nodiscard]] PaymentHandlerResponse clone() const noexcept;
    [[nodiscard]] jsbind::String methodName() const;
    void methodName(const jsbind::String& value);
    [[nodiscard]] jsbind::Object details() const;
    void details(const jsbind::Object& value);
    [[nodiscard]] jsbind::String payerName() const;
    void payerName(const jsbind::String& value);
    [[nodiscard]] jsbind::String payerEmail() const;
    void payerEmail(const jsbind::String& value);
    [[nodiscard]] jsbind::String payerPhone() const;
    void payerPhone(const jsbind::String& value);
    [[nodiscard]] AddressInit shippingAddress() const;
    void shippingAddress(const AddressInit& value);
    [[nodiscard]] jsbind::String shippingOption() const;
    void shippingOption(const jsbind::String& value);
};

} // namespace webbind