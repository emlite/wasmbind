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
    PaymentCompleteDetails clone() const noexcept;
    jsbind::Object data() const;
    void data(const jsbind::Object& value);
};

class PaymentValidationErrors : public emlite::Val {
  explicit PaymentValidationErrors(Handle h) noexcept;
public:
    static PaymentValidationErrors take_ownership(Handle h) noexcept;
    explicit PaymentValidationErrors(const emlite::Val &val) noexcept;
    PaymentValidationErrors() noexcept;
    PaymentValidationErrors clone() const noexcept;
    jsbind::Any payer() const;
    void payer(const jsbind::Any& value);
    jsbind::Any shippingAddress() const;
    void shippingAddress(const jsbind::Any& value);
    jsbind::DOMString error() const;
    void error(const jsbind::DOMString& value);
    jsbind::Object paymentMethod() const;
    void paymentMethod(const jsbind::Object& value);
};

class PaymentResponse : public EventTarget {
    explicit PaymentResponse(Handle h) noexcept;

public:
    explicit PaymentResponse(const emlite::Val &val) noexcept;
    static PaymentResponse take_ownership(Handle h) noexcept;

    PaymentResponse clone() const noexcept;
    jsbind::Object toJSON();
    jsbind::DOMString requestId() const;
    jsbind::DOMString methodName() const;
    jsbind::Object details() const;
    ContactAddress shippingAddress() const;
    jsbind::DOMString shippingOption() const;
    jsbind::DOMString payerName() const;
    jsbind::DOMString payerEmail() const;
    jsbind::DOMString payerPhone() const;
    jsbind::Promise<jsbind::Undefined> complete();
    jsbind::Promise<jsbind::Undefined> complete(const PaymentComplete& result);
    jsbind::Promise<jsbind::Undefined> complete(const PaymentComplete& result, const PaymentCompleteDetails& details);
    jsbind::Promise<jsbind::Undefined> retry();
    jsbind::Promise<jsbind::Undefined> retry(const PaymentValidationErrors& errorFields);
    jsbind::Any onpayerdetailchange() const;
    void onpayerdetailchange(const jsbind::Any& value);
};

