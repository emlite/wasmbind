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
    PaymentDetailsUpdate clone() const noexcept;
    jsbind::DOMString error() const;
    void error(const jsbind::DOMString& value);
    jsbind::Any total() const;
    void total(const jsbind::Any& value);
    jsbind::Any shippingAddressErrors() const;
    void shippingAddressErrors(const jsbind::Any& value);
    jsbind::Any payerErrors() const;
    void payerErrors(const jsbind::Any& value);
    jsbind::Object paymentMethodErrors() const;
    void paymentMethodErrors(const jsbind::Object& value);
};

class PaymentRequest : public EventTarget {
    explicit PaymentRequest(Handle h) noexcept;

public:
    explicit PaymentRequest(const emlite::Val &val) noexcept;
    static PaymentRequest take_ownership(Handle h) noexcept;

    PaymentRequest clone() const noexcept;
    PaymentRequest(const jsbind::Sequence<PaymentMethodData>& methodData, const jsbind::Any& details);
    PaymentRequest(const jsbind::Sequence<PaymentMethodData>& methodData, const jsbind::Any& details, const jsbind::Any& options);
    jsbind::Promise show();
    jsbind::Promise show(const jsbind::Promise& detailsPromise);
    jsbind::Promise abort();
    jsbind::Promise canMakePayment();
    jsbind::DOMString id() const;
    ContactAddress shippingAddress() const;
    jsbind::DOMString shippingOption() const;
    PaymentShippingType shippingType() const;
    jsbind::Any onshippingaddresschange() const;
    void onshippingaddresschange(const jsbind::Any& value);
    jsbind::Any onshippingoptionchange() const;
    void onshippingoptionchange(const jsbind::Any& value);
    jsbind::Any onpaymentmethodchange() const;
    void onpaymentmethodchange(const jsbind::Any& value);
    static jsbind::Promise securePaymentConfirmationAvailability();
};

