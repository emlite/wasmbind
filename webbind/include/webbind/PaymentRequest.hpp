#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "enums.hpp"

class PaymentResponse;
class PaymentDetailsUpdate;
class ContactAddress;
class PaymentMethodData;


class PaymentDetailsUpdate : public emlite::Val {
  explicit PaymentDetailsUpdate(Handle h) noexcept;
public:
    static PaymentDetailsUpdate take_ownership(Handle h) noexcept;
    explicit PaymentDetailsUpdate(const emlite::Val &val) noexcept;
    PaymentDetailsUpdate() noexcept;
    [[nodiscard]] PaymentDetailsUpdate clone() const noexcept;
    [[nodiscard]] jsbind::String error() const;
    void error(const jsbind::String& value);
    [[nodiscard]] jsbind::Any total() const;
    void total(const jsbind::Any& value);
    [[nodiscard]] jsbind::Any shippingAddressErrors() const;
    void shippingAddressErrors(const jsbind::Any& value);
    [[nodiscard]] jsbind::Any payerErrors() const;
    void payerErrors(const jsbind::Any& value);
    [[nodiscard]] jsbind::Object paymentMethodErrors() const;
    void paymentMethodErrors(const jsbind::Object& value);
};

/// The PaymentRequest class.
/// [`PaymentRequest`](https://developer.mozilla.org/en-US/docs/Web/API/PaymentRequest)
class PaymentRequest : public EventTarget {
    explicit PaymentRequest(Handle h) noexcept;

public:
    explicit PaymentRequest(const emlite::Val &val) noexcept;
    static PaymentRequest take_ownership(Handle h) noexcept;

    [[nodiscard]] PaymentRequest clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new PaymentRequest(..)` constructor, creating a new PaymentRequest instance
    PaymentRequest(const jsbind::TypedArray<PaymentMethodData>& methodData, const jsbind::Any& details);
    /// The `new PaymentRequest(..)` constructor, creating a new PaymentRequest instance
    PaymentRequest(const jsbind::TypedArray<PaymentMethodData>& methodData, const jsbind::Any& details, const jsbind::Any& options);
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
    /// Getter of the `id` attribute.
    /// [`PaymentRequest.id`](https://developer.mozilla.org/en-US/docs/Web/API/PaymentRequest/id)
    [[nodiscard]] jsbind::String id() const;
    /// Getter of the `shippingAddress` attribute.
    /// [`PaymentRequest.shippingAddress`](https://developer.mozilla.org/en-US/docs/Web/API/PaymentRequest/shippingAddress)
    [[nodiscard]] ContactAddress shippingAddress() const;
    /// Getter of the `shippingOption` attribute.
    /// [`PaymentRequest.shippingOption`](https://developer.mozilla.org/en-US/docs/Web/API/PaymentRequest/shippingOption)
    [[nodiscard]] jsbind::String shippingOption() const;
    /// Getter of the `shippingType` attribute.
    /// [`PaymentRequest.shippingType`](https://developer.mozilla.org/en-US/docs/Web/API/PaymentRequest/shippingType)
    [[nodiscard]] PaymentShippingType shippingType() const;
    /// Getter of the `onshippingaddresschange` attribute.
    /// [`PaymentRequest.onshippingaddresschange`](https://developer.mozilla.org/en-US/docs/Web/API/PaymentRequest/onshippingaddresschange)
    [[nodiscard]] jsbind::Any onshippingaddresschange() const;
    /// Setter of the `onshippingaddresschange` attribute.
    /// [`PaymentRequest.onshippingaddresschange`](https://developer.mozilla.org/en-US/docs/Web/API/PaymentRequest/onshippingaddresschange)
    void onshippingaddresschange(const jsbind::Any& value);
    /// Getter of the `onshippingoptionchange` attribute.
    /// [`PaymentRequest.onshippingoptionchange`](https://developer.mozilla.org/en-US/docs/Web/API/PaymentRequest/onshippingoptionchange)
    [[nodiscard]] jsbind::Any onshippingoptionchange() const;
    /// Setter of the `onshippingoptionchange` attribute.
    /// [`PaymentRequest.onshippingoptionchange`](https://developer.mozilla.org/en-US/docs/Web/API/PaymentRequest/onshippingoptionchange)
    void onshippingoptionchange(const jsbind::Any& value);
    /// Getter of the `onpaymentmethodchange` attribute.
    /// [`PaymentRequest.onpaymentmethodchange`](https://developer.mozilla.org/en-US/docs/Web/API/PaymentRequest/onpaymentmethodchange)
    [[nodiscard]] jsbind::Any onpaymentmethodchange() const;
    /// Setter of the `onpaymentmethodchange` attribute.
    /// [`PaymentRequest.onpaymentmethodchange`](https://developer.mozilla.org/en-US/docs/Web/API/PaymentRequest/onpaymentmethodchange)
    void onpaymentmethodchange(const jsbind::Any& value);
    /// The securePaymentConfirmationAvailability method.
    /// [`PaymentRequest.securePaymentConfirmationAvailability`](https://developer.mozilla.org/en-US/docs/Web/API/PaymentRequest/securePaymentConfirmationAvailability)
    static jsbind::Promise<SecurePaymentConfirmationAvailability> securePaymentConfirmationAvailability();
};

