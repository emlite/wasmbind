#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "ExtendableEvent.hpp"

namespace webbind {

class PaymentRequestEventInit;
class PaymentMethodData;
class PaymentDetailsModifier;
class PaymentShippingOption;
class WindowClient;
class PaymentRequestDetailsUpdate;
class AddressInit;
class PaymentHandlerResponse;

/// Interface PaymentRequestEvent
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
    PaymentRequestEvent(const jsbind::String& type, const PaymentRequestEventInit& eventInitDict);
    /// [`PaymentRequestEvent.topOrigin`](https://developer.mozilla.org/en-US/docs/Web/API/PaymentRequestEvent/topOrigin)
    /// [`PaymentRequestEvent.topOrigin`](https://developer.mozilla.org/en-US/docs/Web/API/PaymentRequestEvent/topOrigin)
    [[nodiscard]] jsbind::String topOrigin() const;
    /// [`PaymentRequestEvent.paymentRequestOrigin`](https://developer.mozilla.org/en-US/docs/Web/API/PaymentRequestEvent/paymentRequestOrigin)
    /// [`PaymentRequestEvent.paymentRequestOrigin`](https://developer.mozilla.org/en-US/docs/Web/API/PaymentRequestEvent/paymentRequestOrigin)
    [[nodiscard]] jsbind::String paymentRequestOrigin() const;
    /// [`PaymentRequestEvent.paymentRequestId`](https://developer.mozilla.org/en-US/docs/Web/API/PaymentRequestEvent/paymentRequestId)
    /// [`PaymentRequestEvent.paymentRequestId`](https://developer.mozilla.org/en-US/docs/Web/API/PaymentRequestEvent/paymentRequestId)
    [[nodiscard]] jsbind::String paymentRequestId() const;
    /// [`PaymentRequestEvent.methodData`](https://developer.mozilla.org/en-US/docs/Web/API/PaymentRequestEvent/methodData)
    /// [`PaymentRequestEvent.methodData`](https://developer.mozilla.org/en-US/docs/Web/API/PaymentRequestEvent/methodData)
    [[nodiscard]] jsbind::TypedArray<PaymentMethodData> methodData() const;
    /// [`PaymentRequestEvent.total`](https://developer.mozilla.org/en-US/docs/Web/API/PaymentRequestEvent/total)
    /// [`PaymentRequestEvent.total`](https://developer.mozilla.org/en-US/docs/Web/API/PaymentRequestEvent/total)
    [[nodiscard]] jsbind::Object total() const;
    /// [`PaymentRequestEvent.modifiers`](https://developer.mozilla.org/en-US/docs/Web/API/PaymentRequestEvent/modifiers)
    /// [`PaymentRequestEvent.modifiers`](https://developer.mozilla.org/en-US/docs/Web/API/PaymentRequestEvent/modifiers)
    [[nodiscard]] jsbind::TypedArray<PaymentDetailsModifier> modifiers() const;
    /// [`PaymentRequestEvent.paymentOptions`](https://developer.mozilla.org/en-US/docs/Web/API/PaymentRequestEvent/paymentOptions)
    /// [`PaymentRequestEvent.paymentOptions`](https://developer.mozilla.org/en-US/docs/Web/API/PaymentRequestEvent/paymentOptions)
    [[nodiscard]] jsbind::Object paymentOptions() const;
    /// [`PaymentRequestEvent.shippingOptions`](https://developer.mozilla.org/en-US/docs/Web/API/PaymentRequestEvent/shippingOptions)
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

} // namespace webbind