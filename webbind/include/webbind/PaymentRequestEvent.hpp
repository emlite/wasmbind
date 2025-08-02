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
    [[nodiscard]] PaymentMethodData clone() const noexcept;
    [[nodiscard]] jsbind::String supportedMethods() const;
    void supportedMethods(const jsbind::String& value);
    [[nodiscard]] jsbind::Object data() const;
    void data(const jsbind::Object& value);
};

class PaymentDetailsModifier : public emlite::Val {
  explicit PaymentDetailsModifier(Handle h) noexcept;
public:
    static PaymentDetailsModifier take_ownership(Handle h) noexcept;
    explicit PaymentDetailsModifier(const emlite::Val &val) noexcept;
    PaymentDetailsModifier() noexcept;
    [[nodiscard]] PaymentDetailsModifier clone() const noexcept;
    [[nodiscard]] jsbind::String supportedMethods() const;
    void supportedMethods(const jsbind::String& value);
    [[nodiscard]] jsbind::Any total() const;
    void total(const jsbind::Any& value);
    [[nodiscard]] jsbind::TypedArray<jsbind::Any> additionalDisplayItems() const;
    void additionalDisplayItems(const jsbind::TypedArray<jsbind::Any>& value);
    [[nodiscard]] jsbind::Object data() const;
    void data(const jsbind::Object& value);
};

class PaymentShippingOption : public emlite::Val {
  explicit PaymentShippingOption(Handle h) noexcept;
public:
    static PaymentShippingOption take_ownership(Handle h) noexcept;
    explicit PaymentShippingOption(const emlite::Val &val) noexcept;
    PaymentShippingOption() noexcept;
    [[nodiscard]] PaymentShippingOption clone() const noexcept;
    [[nodiscard]] jsbind::String id() const;
    void id(const jsbind::String& value);
    [[nodiscard]] jsbind::String label() const;
    void label(const jsbind::String& value);
    [[nodiscard]] jsbind::Any amount() const;
    void amount(const jsbind::Any& value);
    [[nodiscard]] bool selected() const;
    void selected(bool value);
};

class PaymentRequestDetailsUpdate : public emlite::Val {
  explicit PaymentRequestDetailsUpdate(Handle h) noexcept;
public:
    static PaymentRequestDetailsUpdate take_ownership(Handle h) noexcept;
    explicit PaymentRequestDetailsUpdate(const emlite::Val &val) noexcept;
    PaymentRequestDetailsUpdate() noexcept;
    [[nodiscard]] PaymentRequestDetailsUpdate clone() const noexcept;
    [[nodiscard]] jsbind::String error() const;
    void error(const jsbind::String& value);
    [[nodiscard]] jsbind::Any total() const;
    void total(const jsbind::Any& value);
    [[nodiscard]] jsbind::TypedArray<PaymentDetailsModifier> modifiers() const;
    void modifiers(const jsbind::TypedArray<PaymentDetailsModifier>& value);
    [[nodiscard]] jsbind::TypedArray<PaymentShippingOption> shippingOptions() const;
    void shippingOptions(const jsbind::TypedArray<PaymentShippingOption>& value);
    [[nodiscard]] jsbind::Object paymentMethodErrors() const;
    void paymentMethodErrors(const jsbind::Object& value);
    [[nodiscard]] jsbind::Any shippingAddressErrors() const;
    void shippingAddressErrors(const jsbind::Any& value);
};

class AddressInit : public emlite::Val {
  explicit AddressInit(Handle h) noexcept;
public:
    static AddressInit take_ownership(Handle h) noexcept;
    explicit AddressInit(const emlite::Val &val) noexcept;
    AddressInit() noexcept;
    [[nodiscard]] AddressInit clone() const noexcept;
    [[nodiscard]] jsbind::String country() const;
    void country(const jsbind::String& value);
    [[nodiscard]] jsbind::TypedArray<jsbind::String> addressLine() const;
    void addressLine(const jsbind::TypedArray<jsbind::String>& value);
    [[nodiscard]] jsbind::String region() const;
    void region(const jsbind::String& value);
    [[nodiscard]] jsbind::String city() const;
    void city(const jsbind::String& value);
    [[nodiscard]] jsbind::String dependentLocality() const;
    void dependentLocality(const jsbind::String& value);
    [[nodiscard]] jsbind::String postalCode() const;
    void postalCode(const jsbind::String& value);
    [[nodiscard]] jsbind::String sortingCode() const;
    void sortingCode(const jsbind::String& value);
    [[nodiscard]] jsbind::String organization() const;
    void organization(const jsbind::String& value);
    [[nodiscard]] jsbind::String recipient() const;
    void recipient(const jsbind::String& value);
    [[nodiscard]] jsbind::String phone() const;
    void phone(const jsbind::String& value);
};

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

/// The PaymentRequestEvent class.
/// [`PaymentRequestEvent`](https://developer.mozilla.org/en-US/docs/Web/API/PaymentRequestEvent)
class PaymentRequestEvent : public ExtendableEvent {
    explicit PaymentRequestEvent(Handle h) noexcept;

public:
    explicit PaymentRequestEvent(const emlite::Val &val) noexcept;
    static PaymentRequestEvent take_ownership(Handle h) noexcept;

    [[nodiscard]] PaymentRequestEvent clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new PaymentRequestEvent(..)` constructor, creating a new PaymentRequestEvent instance
    PaymentRequestEvent(const jsbind::String& type);
    /// The `new PaymentRequestEvent(..)` constructor, creating a new PaymentRequestEvent instance
    PaymentRequestEvent(const jsbind::String& type, const jsbind::Any& eventInitDict);
    /// Getter of the `topOrigin` attribute.
    /// [`PaymentRequestEvent.topOrigin`](https://developer.mozilla.org/en-US/docs/Web/API/PaymentRequestEvent/topOrigin)
    [[nodiscard]] jsbind::String topOrigin() const;
    /// Getter of the `paymentRequestOrigin` attribute.
    /// [`PaymentRequestEvent.paymentRequestOrigin`](https://developer.mozilla.org/en-US/docs/Web/API/PaymentRequestEvent/paymentRequestOrigin)
    [[nodiscard]] jsbind::String paymentRequestOrigin() const;
    /// Getter of the `paymentRequestId` attribute.
    /// [`PaymentRequestEvent.paymentRequestId`](https://developer.mozilla.org/en-US/docs/Web/API/PaymentRequestEvent/paymentRequestId)
    [[nodiscard]] jsbind::String paymentRequestId() const;
    /// Getter of the `methodData` attribute.
    /// [`PaymentRequestEvent.methodData`](https://developer.mozilla.org/en-US/docs/Web/API/PaymentRequestEvent/methodData)
    [[nodiscard]] jsbind::TypedArray<PaymentMethodData> methodData() const;
    /// Getter of the `total` attribute.
    /// [`PaymentRequestEvent.total`](https://developer.mozilla.org/en-US/docs/Web/API/PaymentRequestEvent/total)
    [[nodiscard]] jsbind::Object total() const;
    /// Getter of the `modifiers` attribute.
    /// [`PaymentRequestEvent.modifiers`](https://developer.mozilla.org/en-US/docs/Web/API/PaymentRequestEvent/modifiers)
    [[nodiscard]] jsbind::TypedArray<PaymentDetailsModifier> modifiers() const;
    /// Getter of the `paymentOptions` attribute.
    /// [`PaymentRequestEvent.paymentOptions`](https://developer.mozilla.org/en-US/docs/Web/API/PaymentRequestEvent/paymentOptions)
    [[nodiscard]] jsbind::Object paymentOptions() const;
    /// Getter of the `shippingOptions` attribute.
    /// [`PaymentRequestEvent.shippingOptions`](https://developer.mozilla.org/en-US/docs/Web/API/PaymentRequestEvent/shippingOptions)
    [[nodiscard]] jsbind::TypedArray<PaymentShippingOption> shippingOptions() const;
    /// The openWindow method.
    /// [`PaymentRequestEvent.openWindow`](https://developer.mozilla.org/en-US/docs/Web/API/PaymentRequestEvent/openWindow)
    jsbind::Promise<WindowClient> openWindow(const jsbind::String& url);
    /// The changePaymentMethod method.
    /// [`PaymentRequestEvent.changePaymentMethod`](https://developer.mozilla.org/en-US/docs/Web/API/PaymentRequestEvent/changePaymentMethod)
    jsbind::Promise<PaymentRequestDetailsUpdate> changePaymentMethod(const jsbind::String& methodName);
    /// The changePaymentMethod method.
    /// [`PaymentRequestEvent.changePaymentMethod`](https://developer.mozilla.org/en-US/docs/Web/API/PaymentRequestEvent/changePaymentMethod)
    jsbind::Promise<PaymentRequestDetailsUpdate> changePaymentMethod(const jsbind::String& methodName, const jsbind::Object& methodDetails);
    /// The changeShippingAddress method.
    /// [`PaymentRequestEvent.changeShippingAddress`](https://developer.mozilla.org/en-US/docs/Web/API/PaymentRequestEvent/changeShippingAddress)
    jsbind::Promise<PaymentRequestDetailsUpdate> changeShippingAddress();
    /// The changeShippingAddress method.
    /// [`PaymentRequestEvent.changeShippingAddress`](https://developer.mozilla.org/en-US/docs/Web/API/PaymentRequestEvent/changeShippingAddress)
    jsbind::Promise<PaymentRequestDetailsUpdate> changeShippingAddress(const AddressInit& shippingAddress);
    /// The changeShippingOption method.
    /// [`PaymentRequestEvent.changeShippingOption`](https://developer.mozilla.org/en-US/docs/Web/API/PaymentRequestEvent/changeShippingOption)
    jsbind::Promise<PaymentRequestDetailsUpdate> changeShippingOption(const jsbind::String& shippingOption);
    /// The respondWith method.
    /// [`PaymentRequestEvent.respondWith`](https://developer.mozilla.org/en-US/docs/Web/API/PaymentRequestEvent/respondWith)
    jsbind::Undefined respondWith(const jsbind::Promise<PaymentHandlerResponse>& handlerResponsePromise);
};

