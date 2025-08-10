#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "PaymentRequestUpdateEvent.hpp"
#include "PaymentMethodChangeEventInit.hpp"

namespace webbind {

/// Interface PaymentMethodChangeEvent
/// [`PaymentMethodChangeEvent`](https://developer.mozilla.org/en-US/docs/Web/API/PaymentMethodChangeEvent)
class PaymentMethodChangeEvent : public PaymentRequestUpdateEvent {
    explicit PaymentMethodChangeEvent(Handle h) noexcept;
public:
    explicit PaymentMethodChangeEvent(const emlite::Val &val) noexcept;
    static PaymentMethodChangeEvent take_ownership(Handle h) noexcept;
    [[nodiscard]] PaymentMethodChangeEvent clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new PaymentMethodChangeEvent(..)` constructor, creating a new PaymentMethodChangeEvent instance
    PaymentMethodChangeEvent(const jsbind::String& type);
    /// The `new PaymentMethodChangeEvent(..)` constructor, creating a new PaymentMethodChangeEvent instance
    PaymentMethodChangeEvent(const jsbind::String& type, const PaymentMethodChangeEventInit& eventInitDict);
    /// Getter of the `methodName` attribute.
    /// [`PaymentMethodChangeEvent.methodName`](https://developer.mozilla.org/en-US/docs/Web/API/PaymentMethodChangeEvent/methodName)
    [[nodiscard]] jsbind::String methodName() const;
    /// Getter of the `methodDetails` attribute.
    /// [`PaymentMethodChangeEvent.methodDetails`](https://developer.mozilla.org/en-US/docs/Web/API/PaymentMethodChangeEvent/methodDetails)
    [[nodiscard]] jsbind::Object methodDetails() const;
};

} // namespace webbind