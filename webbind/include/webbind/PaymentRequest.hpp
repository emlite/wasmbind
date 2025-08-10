#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventTarget.hpp"
#include "enums.hpp"

namespace webbind {

class PaymentMethodData;
class PaymentDetailsInit;
class PaymentOptions;
class PaymentResponse;
class PaymentDetailsUpdate;
class ContactAddress;

/// Interface PaymentRequest
/// [`PaymentRequest`](https://developer.mozilla.org/en-US/docs/Web/API/PaymentRequest)
class PaymentRequest : public EventTarget {
    explicit PaymentRequest(Handle h) noexcept;
public:
    explicit PaymentRequest(const emlite::Val &val) noexcept;
    static PaymentRequest take_ownership(Handle h) noexcept;
    [[nodiscard]] PaymentRequest clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new PaymentRequest(..)` constructor, creating a new PaymentRequest instance
    PaymentRequest(const jsbind::TypedArray<PaymentMethodData>& methodData, const PaymentDetailsInit& details);
    /// The `new PaymentRequest(..)` constructor, creating a new PaymentRequest instance
    PaymentRequest(const jsbind::TypedArray<PaymentMethodData>& methodData, const PaymentDetailsInit& details, const PaymentOptions& options);
    /// The show method.
    /// [`PaymentRequest.show`](https://developer.mozilla.org/en-US/docs/Web/API/PaymentRequest/show)
    jsbind::Promise<PaymentResponse> show();
    /// The show method.
    /// [`PaymentRequest.show`](https://developer.mozilla.org/en-US/docs/Web/API/PaymentRequest/show)
    jsbind::Promise<PaymentResponse> show(const jsbind::Promise<PaymentDetailsUpdate>& detailsPromise);
    /// The abort method.
    /// [`PaymentRequest.abort`](https://developer.mozilla.org/en-US/docs/Web/API/PaymentRequest/abort)
    jsbind::Promise<jsbind::Undefined> abort();
    /// The canMakePayment method.
    /// [`PaymentRequest.canMakePayment`](https://developer.mozilla.org/en-US/docs/Web/API/PaymentRequest/canMakePayment)
    jsbind::Promise<bool> canMakePayment();
    /// [`PaymentRequest.id`](https://developer.mozilla.org/en-US/docs/Web/API/PaymentRequest/id)
    /// [`PaymentRequest.id`](https://developer.mozilla.org/en-US/docs/Web/API/PaymentRequest/id)
    [[nodiscard]] jsbind::String id() const;
    /// [`PaymentRequest.shippingAddress`](https://developer.mozilla.org/en-US/docs/Web/API/PaymentRequest/shippingAddress)
    /// [`PaymentRequest.shippingAddress`](https://developer.mozilla.org/en-US/docs/Web/API/PaymentRequest/shippingAddress)
    [[nodiscard]] ContactAddress shippingAddress() const;
    /// [`PaymentRequest.shippingOption`](https://developer.mozilla.org/en-US/docs/Web/API/PaymentRequest/shippingOption)
    /// [`PaymentRequest.shippingOption`](https://developer.mozilla.org/en-US/docs/Web/API/PaymentRequest/shippingOption)
    [[nodiscard]] jsbind::String shippingOption() const;
    /// [`PaymentRequest.shippingType`](https://developer.mozilla.org/en-US/docs/Web/API/PaymentRequest/shippingType)
    /// [`PaymentRequest.shippingType`](https://developer.mozilla.org/en-US/docs/Web/API/PaymentRequest/shippingType)
    [[nodiscard]] PaymentShippingType shippingType() const;
    /// [`PaymentRequest.onshippingaddresschange`](https://developer.mozilla.org/en-US/docs/Web/API/PaymentRequest/onshippingaddresschange)
    /// [`PaymentRequest.onshippingaddresschange`](https://developer.mozilla.org/en-US/docs/Web/API/PaymentRequest/onshippingaddresschange)
    [[nodiscard]] jsbind::Any onshippingaddresschange() const;
    /// Setter of the `onshippingaddresschange` attribute.
    /// [`PaymentRequest.onshippingaddresschange`](https://developer.mozilla.org/en-US/docs/Web/API/PaymentRequest/onshippingaddresschange)
    void onshippingaddresschange(const jsbind::Any& value);
    /// [`PaymentRequest.onshippingoptionchange`](https://developer.mozilla.org/en-US/docs/Web/API/PaymentRequest/onshippingoptionchange)
    /// [`PaymentRequest.onshippingoptionchange`](https://developer.mozilla.org/en-US/docs/Web/API/PaymentRequest/onshippingoptionchange)
    [[nodiscard]] jsbind::Any onshippingoptionchange() const;
    /// Setter of the `onshippingoptionchange` attribute.
    /// [`PaymentRequest.onshippingoptionchange`](https://developer.mozilla.org/en-US/docs/Web/API/PaymentRequest/onshippingoptionchange)
    void onshippingoptionchange(const jsbind::Any& value);
    /// [`PaymentRequest.onpaymentmethodchange`](https://developer.mozilla.org/en-US/docs/Web/API/PaymentRequest/onpaymentmethodchange)
    /// [`PaymentRequest.onpaymentmethodchange`](https://developer.mozilla.org/en-US/docs/Web/API/PaymentRequest/onpaymentmethodchange)
    [[nodiscard]] jsbind::Any onpaymentmethodchange() const;
    /// Setter of the `onpaymentmethodchange` attribute.
    /// [`PaymentRequest.onpaymentmethodchange`](https://developer.mozilla.org/en-US/docs/Web/API/PaymentRequest/onpaymentmethodchange)
    void onpaymentmethodchange(const jsbind::Any& value);
    /// The securePaymentConfirmationAvailability method.
    /// [`PaymentRequest.securePaymentConfirmationAvailability`](https://developer.mozilla.org/en-US/docs/Web/API/PaymentRequest/securePaymentConfirmationAvailability)
    static jsbind::Promise<SecurePaymentConfirmationAvailability> securePaymentConfirmationAvailability();
};

} // namespace webbind