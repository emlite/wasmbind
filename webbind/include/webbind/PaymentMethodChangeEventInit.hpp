#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "PaymentRequestUpdateEventInit.hpp"

namespace webbind {

/// Dictionary type PaymentMethodChangeEventInit
class PaymentMethodChangeEventInit : public PaymentRequestUpdateEventInit {
  explicit PaymentMethodChangeEventInit(Handle h) noexcept;
public:
    static PaymentMethodChangeEventInit take_ownership(Handle h) noexcept;
    explicit PaymentMethodChangeEventInit(const emlite::Val &val) noexcept;
    PaymentMethodChangeEventInit() noexcept;
    [[nodiscard]] PaymentMethodChangeEventInit clone() const noexcept;
    /// Getter of the `methodName` attribute.
    [[nodiscard]] jsbind::String methodName() const;
    /// Setter of the `methodName` attribute.
    void methodName(const jsbind::String& value);
    /// Getter of the `methodDetails` attribute.
    [[nodiscard]] jsbind::Object methodDetails() const;
    /// Setter of the `methodDetails` attribute.
    void methodDetails(const jsbind::Object& value);
};

} // namespace webbind