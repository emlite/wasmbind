#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "enums.hpp"

class ContactAddress;
class PaymentCompleteDetails;
class PaymentValidationErrors;


class PaymentCompleteDetails : public emlite::Val {
  explicit PaymentCompleteDetails(Handle h) noexcept;
public:
    static PaymentCompleteDetails take_ownership(Handle h) noexcept;
    explicit PaymentCompleteDetails(const emlite::Val &val) noexcept;
    PaymentCompleteDetails() noexcept;
    [[nodiscard]] PaymentCompleteDetails clone() const noexcept;
    [[nodiscard]] jsbind::Object data() const;
    void data(const jsbind::Object& value);
};

class PaymentValidationErrors : public emlite::Val {
  explicit PaymentValidationErrors(Handle h) noexcept;
public:
    static PaymentValidationErrors take_ownership(Handle h) noexcept;
    explicit PaymentValidationErrors(const emlite::Val &val) noexcept;
    PaymentValidationErrors() noexcept;
    [[nodiscard]] PaymentValidationErrors clone() const noexcept;
    [[nodiscard]] jsbind::Any payer() const;
    void payer(const jsbind::Any& value);
    [[nodiscard]] jsbind::Any shippingAddress() const;
    void shippingAddress(const jsbind::Any& value);
    [[nodiscard]] jsbind::String error() const;
    void error(const jsbind::String& value);
    [[nodiscard]] jsbind::Object paymentMethod() const;
    void paymentMethod(const jsbind::Object& value);
};

/// The PaymentResponse class.
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
    /// Getter of the `requestId` attribute.
    /// [`PaymentResponse.requestId`](https://developer.mozilla.org/en-US/docs/Web/API/PaymentResponse/requestId)
    [[nodiscard]] jsbind::String requestId() const;
    /// Getter of the `methodName` attribute.
    /// [`PaymentResponse.methodName`](https://developer.mozilla.org/en-US/docs/Web/API/PaymentResponse/methodName)
    [[nodiscard]] jsbind::String methodName() const;
    /// Getter of the `details` attribute.
    /// [`PaymentResponse.details`](https://developer.mozilla.org/en-US/docs/Web/API/PaymentResponse/details)
    [[nodiscard]] jsbind::Object details() const;
    /// Getter of the `shippingAddress` attribute.
    /// [`PaymentResponse.shippingAddress`](https://developer.mozilla.org/en-US/docs/Web/API/PaymentResponse/shippingAddress)
    [[nodiscard]] ContactAddress shippingAddress() const;
    /// Getter of the `shippingOption` attribute.
    /// [`PaymentResponse.shippingOption`](https://developer.mozilla.org/en-US/docs/Web/API/PaymentResponse/shippingOption)
    [[nodiscard]] jsbind::String shippingOption() const;
    /// Getter of the `payerName` attribute.
    /// [`PaymentResponse.payerName`](https://developer.mozilla.org/en-US/docs/Web/API/PaymentResponse/payerName)
    [[nodiscard]] jsbind::String payerName() const;
    /// Getter of the `payerEmail` attribute.
    /// [`PaymentResponse.payerEmail`](https://developer.mozilla.org/en-US/docs/Web/API/PaymentResponse/payerEmail)
    [[nodiscard]] jsbind::String payerEmail() const;
    /// Getter of the `payerPhone` attribute.
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
    /// Getter of the `onpayerdetailchange` attribute.
    /// [`PaymentResponse.onpayerdetailchange`](https://developer.mozilla.org/en-US/docs/Web/API/PaymentResponse/onpayerdetailchange)
    [[nodiscard]] jsbind::Any onpayerdetailchange() const;
    /// Setter of the `onpayerdetailchange` attribute.
    /// [`PaymentResponse.onpayerdetailchange`](https://developer.mozilla.org/en-US/docs/Web/API/PaymentResponse/onpayerdetailchange)
    void onpayerdetailchange(const jsbind::Any& value);
};

