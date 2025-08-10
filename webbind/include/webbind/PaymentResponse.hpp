#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventTarget.hpp"
#include "PaymentCompleteDetails.hpp"
#include "PaymentValidationErrors.hpp"
#include "enums.hpp"

namespace webbind {

class ContactAddress;

/// Interface PaymentResponse
/// [`PaymentResponse`](https://developer.mozilla.org/en-US/docs/Web/API/PaymentResponse)
class PaymentResponse : public EventTarget {
    explicit PaymentResponse(Handle h) noexcept;
public:
    explicit PaymentResponse(const emlite::Val &val) noexcept;
    static PaymentResponse take_ownership(Handle h) noexcept;
    [[nodiscard]] PaymentResponse clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The toJSON method.
    /// [`PaymentResponse.toJSON`](https://developer.mozilla.org/en-US/docs/Web/API/PaymentResponse/toJSON)
    jsbind::Object toJSON();
    /// [`PaymentResponse.requestId`](https://developer.mozilla.org/en-US/docs/Web/API/PaymentResponse/requestId)
    /// [`PaymentResponse.requestId`](https://developer.mozilla.org/en-US/docs/Web/API/PaymentResponse/requestId)
    [[nodiscard]] jsbind::String requestId() const;
    /// [`PaymentResponse.methodName`](https://developer.mozilla.org/en-US/docs/Web/API/PaymentResponse/methodName)
    /// [`PaymentResponse.methodName`](https://developer.mozilla.org/en-US/docs/Web/API/PaymentResponse/methodName)
    [[nodiscard]] jsbind::String methodName() const;
    /// [`PaymentResponse.details`](https://developer.mozilla.org/en-US/docs/Web/API/PaymentResponse/details)
    /// [`PaymentResponse.details`](https://developer.mozilla.org/en-US/docs/Web/API/PaymentResponse/details)
    [[nodiscard]] jsbind::Object details() const;
    /// [`PaymentResponse.shippingAddress`](https://developer.mozilla.org/en-US/docs/Web/API/PaymentResponse/shippingAddress)
    /// [`PaymentResponse.shippingAddress`](https://developer.mozilla.org/en-US/docs/Web/API/PaymentResponse/shippingAddress)
    [[nodiscard]] ContactAddress shippingAddress() const;
    /// [`PaymentResponse.shippingOption`](https://developer.mozilla.org/en-US/docs/Web/API/PaymentResponse/shippingOption)
    /// [`PaymentResponse.shippingOption`](https://developer.mozilla.org/en-US/docs/Web/API/PaymentResponse/shippingOption)
    [[nodiscard]] jsbind::String shippingOption() const;
    /// [`PaymentResponse.payerName`](https://developer.mozilla.org/en-US/docs/Web/API/PaymentResponse/payerName)
    /// [`PaymentResponse.payerName`](https://developer.mozilla.org/en-US/docs/Web/API/PaymentResponse/payerName)
    [[nodiscard]] jsbind::String payerName() const;
    /// [`PaymentResponse.payerEmail`](https://developer.mozilla.org/en-US/docs/Web/API/PaymentResponse/payerEmail)
    /// [`PaymentResponse.payerEmail`](https://developer.mozilla.org/en-US/docs/Web/API/PaymentResponse/payerEmail)
    [[nodiscard]] jsbind::String payerEmail() const;
    /// [`PaymentResponse.payerPhone`](https://developer.mozilla.org/en-US/docs/Web/API/PaymentResponse/payerPhone)
    /// [`PaymentResponse.payerPhone`](https://developer.mozilla.org/en-US/docs/Web/API/PaymentResponse/payerPhone)
    [[nodiscard]] jsbind::String payerPhone() const;
    /// The complete method.
    /// [`PaymentResponse.complete`](https://developer.mozilla.org/en-US/docs/Web/API/PaymentResponse/complete)
    jsbind::Promise<jsbind::Undefined> complete();
    /// The complete method.
    /// [`PaymentResponse.complete`](https://developer.mozilla.org/en-US/docs/Web/API/PaymentResponse/complete)
    jsbind::Promise<jsbind::Undefined> complete(const PaymentComplete& result);
    /// The complete method.
    /// [`PaymentResponse.complete`](https://developer.mozilla.org/en-US/docs/Web/API/PaymentResponse/complete)
    jsbind::Promise<jsbind::Undefined> complete(const PaymentComplete& result, const PaymentCompleteDetails& details);
    /// The retry method.
    /// [`PaymentResponse.retry`](https://developer.mozilla.org/en-US/docs/Web/API/PaymentResponse/retry)
    jsbind::Promise<jsbind::Undefined> retry();
    /// The retry method.
    /// [`PaymentResponse.retry`](https://developer.mozilla.org/en-US/docs/Web/API/PaymentResponse/retry)
    jsbind::Promise<jsbind::Undefined> retry(const PaymentValidationErrors& errorFields);
    /// [`PaymentResponse.onpayerdetailchange`](https://developer.mozilla.org/en-US/docs/Web/API/PaymentResponse/onpayerdetailchange)
    /// [`PaymentResponse.onpayerdetailchange`](https://developer.mozilla.org/en-US/docs/Web/API/PaymentResponse/onpayerdetailchange)
    [[nodiscard]] jsbind::Any onpayerdetailchange() const;
    /// Setter of the `onpayerdetailchange` attribute.
    /// [`PaymentResponse.onpayerdetailchange`](https://developer.mozilla.org/en-US/docs/Web/API/PaymentResponse/onpayerdetailchange)
    void onpayerdetailchange(const jsbind::Any& value);
};

} // namespace webbind