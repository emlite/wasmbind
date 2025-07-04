#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "ExtendableEvent.hpp"
#include "enums.hpp"

class PaymentMethodData;
class PaymentDetailsModifier;
class PaymentShippingOption;
class WindowClient;
class PaymentRequestDetailsUpdate;
class AddressInit;
class PaymentHandlerResponse;


class PaymentMethodData : public emlite::Val {
  explicit PaymentMethodData(Handle h) noexcept;
public:
    static PaymentMethodData take_ownership(Handle h) noexcept;
    explicit PaymentMethodData(const emlite::Val &val) noexcept;
    PaymentMethodData() noexcept;
    PaymentMethodData clone() const noexcept;
    jsbind::DOMString supportedMethods() const;
    void supportedMethods(const jsbind::DOMString& value);
    jsbind::Object data() const;
    void data(const jsbind::Object& value);
};

class PaymentDetailsModifier : public emlite::Val {
  explicit PaymentDetailsModifier(Handle h) noexcept;
public:
    static PaymentDetailsModifier take_ownership(Handle h) noexcept;
    explicit PaymentDetailsModifier(const emlite::Val &val) noexcept;
    PaymentDetailsModifier() noexcept;
    PaymentDetailsModifier clone() const noexcept;
    jsbind::DOMString supportedMethods() const;
    void supportedMethods(const jsbind::DOMString& value);
    jsbind::Any total() const;
    void total(const jsbind::Any& value);
    jsbind::Sequence<jsbind::Any> additionalDisplayItems() const;
    void additionalDisplayItems(const jsbind::Sequence<jsbind::Any>& value);
    jsbind::Object data() const;
    void data(const jsbind::Object& value);
};

class PaymentShippingOption : public emlite::Val {
  explicit PaymentShippingOption(Handle h) noexcept;
public:
    static PaymentShippingOption take_ownership(Handle h) noexcept;
    explicit PaymentShippingOption(const emlite::Val &val) noexcept;
    PaymentShippingOption() noexcept;
    PaymentShippingOption clone() const noexcept;
    jsbind::DOMString id() const;
    void id(const jsbind::DOMString& value);
    jsbind::DOMString label() const;
    void label(const jsbind::DOMString& value);
    jsbind::Any amount() const;
    void amount(const jsbind::Any& value);
    bool selected() const;
    void selected(bool value);
};

class PaymentRequestDetailsUpdate : public emlite::Val {
  explicit PaymentRequestDetailsUpdate(Handle h) noexcept;
public:
    static PaymentRequestDetailsUpdate take_ownership(Handle h) noexcept;
    explicit PaymentRequestDetailsUpdate(const emlite::Val &val) noexcept;
    PaymentRequestDetailsUpdate() noexcept;
    PaymentRequestDetailsUpdate clone() const noexcept;
    jsbind::DOMString error() const;
    void error(const jsbind::DOMString& value);
    jsbind::Any total() const;
    void total(const jsbind::Any& value);
    jsbind::Sequence<PaymentDetailsModifier> modifiers() const;
    void modifiers(const jsbind::Sequence<PaymentDetailsModifier>& value);
    jsbind::Sequence<PaymentShippingOption> shippingOptions() const;
    void shippingOptions(const jsbind::Sequence<PaymentShippingOption>& value);
    jsbind::Object paymentMethodErrors() const;
    void paymentMethodErrors(const jsbind::Object& value);
    jsbind::Any shippingAddressErrors() const;
    void shippingAddressErrors(const jsbind::Any& value);
};

class AddressInit : public emlite::Val {
  explicit AddressInit(Handle h) noexcept;
public:
    static AddressInit take_ownership(Handle h) noexcept;
    explicit AddressInit(const emlite::Val &val) noexcept;
    AddressInit() noexcept;
    AddressInit clone() const noexcept;
    jsbind::DOMString country() const;
    void country(const jsbind::DOMString& value);
    jsbind::Sequence<jsbind::DOMString> addressLine() const;
    void addressLine(const jsbind::Sequence<jsbind::DOMString>& value);
    jsbind::DOMString region() const;
    void region(const jsbind::DOMString& value);
    jsbind::DOMString city() const;
    void city(const jsbind::DOMString& value);
    jsbind::DOMString dependentLocality() const;
    void dependentLocality(const jsbind::DOMString& value);
    jsbind::DOMString postalCode() const;
    void postalCode(const jsbind::DOMString& value);
    jsbind::DOMString sortingCode() const;
    void sortingCode(const jsbind::DOMString& value);
    jsbind::DOMString organization() const;
    void organization(const jsbind::DOMString& value);
    jsbind::DOMString recipient() const;
    void recipient(const jsbind::DOMString& value);
    jsbind::DOMString phone() const;
    void phone(const jsbind::DOMString& value);
};

class PaymentHandlerResponse : public emlite::Val {
  explicit PaymentHandlerResponse(Handle h) noexcept;
public:
    static PaymentHandlerResponse take_ownership(Handle h) noexcept;
    explicit PaymentHandlerResponse(const emlite::Val &val) noexcept;
    PaymentHandlerResponse() noexcept;
    PaymentHandlerResponse clone() const noexcept;
    jsbind::DOMString methodName() const;
    void methodName(const jsbind::DOMString& value);
    jsbind::Object details() const;
    void details(const jsbind::Object& value);
    jsbind::DOMString payerName() const;
    void payerName(const jsbind::DOMString& value);
    jsbind::DOMString payerEmail() const;
    void payerEmail(const jsbind::DOMString& value);
    jsbind::DOMString payerPhone() const;
    void payerPhone(const jsbind::DOMString& value);
    AddressInit shippingAddress() const;
    void shippingAddress(const AddressInit& value);
    jsbind::DOMString shippingOption() const;
    void shippingOption(const jsbind::DOMString& value);
};

class PaymentRequestEvent : public ExtendableEvent {
    explicit PaymentRequestEvent(Handle h) noexcept;

public:
    explicit PaymentRequestEvent(const emlite::Val &val) noexcept;
    static PaymentRequestEvent take_ownership(Handle h) noexcept;

    PaymentRequestEvent clone() const noexcept;
    PaymentRequestEvent(const jsbind::DOMString& type, const jsbind::Any& eventInitDict);
    jsbind::USVString topOrigin() const;
    jsbind::USVString paymentRequestOrigin() const;
    jsbind::DOMString paymentRequestId() const;
    jsbind::FrozenArray<PaymentMethodData> methodData() const;
    jsbind::Object total() const;
    jsbind::FrozenArray<PaymentDetailsModifier> modifiers() const;
    jsbind::Object paymentOptions() const;
    jsbind::FrozenArray<PaymentShippingOption> shippingOptions() const;
    jsbind::Promise openWindow(const jsbind::USVString& url);
    jsbind::Promise changePaymentMethod(const jsbind::DOMString& methodName, const jsbind::Object& methodDetails);
    jsbind::Promise changeShippingAddress(const AddressInit& shippingAddress);
    jsbind::Promise changeShippingOption(const jsbind::DOMString& shippingOption);
    jsbind::Undefined respondWith(const jsbind::Promise& handlerResponsePromise);
};

