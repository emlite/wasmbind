#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "ExtendableEvent.hpp"
#include "PaymentRequestEventInit.hpp"
#include "PaymentMethodData.hpp"
#include "PaymentDetailsModifier.hpp"
#include "PaymentShippingOption.hpp"
#include "PaymentRequestDetailsUpdate.hpp"
#include "AddressInit.hpp"
#include "PaymentHandlerResponse.hpp"

namespace webbind {

class WindowClient;

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

} // namespace webbind