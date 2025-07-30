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
    jsbind::String supportedMethods() const;
    void supportedMethods(const jsbind::String& value);
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
    jsbind::String supportedMethods() const;
    void supportedMethods(const jsbind::String& value);
    jsbind::Any total() const;
    void total(const jsbind::Any& value);
    jsbind::TypedArray<jsbind::Any> additionalDisplayItems() const;
    void additionalDisplayItems(const jsbind::TypedArray<jsbind::Any>& value);
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
    jsbind::String id() const;
    void id(const jsbind::String& value);
    jsbind::String label() const;
    void label(const jsbind::String& value);
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
    jsbind::String error() const;
    void error(const jsbind::String& value);
    jsbind::Any total() const;
    void total(const jsbind::Any& value);
    jsbind::TypedArray<PaymentDetailsModifier> modifiers() const;
    void modifiers(const jsbind::TypedArray<PaymentDetailsModifier>& value);
    jsbind::TypedArray<PaymentShippingOption> shippingOptions() const;
    void shippingOptions(const jsbind::TypedArray<PaymentShippingOption>& value);
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
    jsbind::String country() const;
    void country(const jsbind::String& value);
    jsbind::TypedArray<jsbind::String> addressLine() const;
    void addressLine(const jsbind::TypedArray<jsbind::String>& value);
    jsbind::String region() const;
    void region(const jsbind::String& value);
    jsbind::String city() const;
    void city(const jsbind::String& value);
    jsbind::String dependentLocality() const;
    void dependentLocality(const jsbind::String& value);
    jsbind::String postalCode() const;
    void postalCode(const jsbind::String& value);
    jsbind::String sortingCode() const;
    void sortingCode(const jsbind::String& value);
    jsbind::String organization() const;
    void organization(const jsbind::String& value);
    jsbind::String recipient() const;
    void recipient(const jsbind::String& value);
    jsbind::String phone() const;
    void phone(const jsbind::String& value);
};

class PaymentHandlerResponse : public emlite::Val {
  explicit PaymentHandlerResponse(Handle h) noexcept;
public:
    static PaymentHandlerResponse take_ownership(Handle h) noexcept;
    explicit PaymentHandlerResponse(const emlite::Val &val) noexcept;
    PaymentHandlerResponse() noexcept;
    PaymentHandlerResponse clone() const noexcept;
    jsbind::String methodName() const;
    void methodName(const jsbind::String& value);
    jsbind::Object details() const;
    void details(const jsbind::Object& value);
    jsbind::String payerName() const;
    void payerName(const jsbind::String& value);
    jsbind::String payerEmail() const;
    void payerEmail(const jsbind::String& value);
    jsbind::String payerPhone() const;
    void payerPhone(const jsbind::String& value);
    AddressInit shippingAddress() const;
    void shippingAddress(const AddressInit& value);
    jsbind::String shippingOption() const;
    void shippingOption(const jsbind::String& value);
};

class PaymentRequestEvent : public ExtendableEvent {
    explicit PaymentRequestEvent(Handle h) noexcept;

public:
    explicit PaymentRequestEvent(const emlite::Val &val) noexcept;
    static PaymentRequestEvent take_ownership(Handle h) noexcept;

    PaymentRequestEvent clone() const noexcept;
    PaymentRequestEvent(const jsbind::String& type);
    PaymentRequestEvent(const jsbind::String& type, const jsbind::Any& eventInitDict);
    jsbind::String topOrigin() const;
    jsbind::String paymentRequestOrigin() const;
    jsbind::String paymentRequestId() const;
    jsbind::TypedArray<PaymentMethodData> methodData() const;
    jsbind::Object total() const;
    jsbind::TypedArray<PaymentDetailsModifier> modifiers() const;
    jsbind::Object paymentOptions() const;
    jsbind::TypedArray<PaymentShippingOption> shippingOptions() const;
    jsbind::Promise<WindowClient> openWindow(const jsbind::String& url);
    jsbind::Promise<PaymentRequestDetailsUpdate> changePaymentMethod(const jsbind::String& methodName);
    jsbind::Promise<PaymentRequestDetailsUpdate> changePaymentMethod(const jsbind::String& methodName, const jsbind::Object& methodDetails);
    jsbind::Promise<PaymentRequestDetailsUpdate> changeShippingAddress();
    jsbind::Promise<PaymentRequestDetailsUpdate> changeShippingAddress(const AddressInit& shippingAddress);
    jsbind::Promise<PaymentRequestDetailsUpdate> changeShippingOption(const jsbind::String& shippingOption);
    jsbind::Undefined respondWith(const jsbind::Promise<PaymentHandlerResponse>& handlerResponsePromise);
};

