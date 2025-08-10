#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "PaymentRequestUpdateEventInit.hpp"

namespace webbind {

/// Dictionary type PaymentMethodChangeEventInit
/// [`PaymentMethodChangeEventInit`](https://developer.mozilla.org/en-US/docs/Web/API/PaymentMethodChangeEventInit)
class PaymentMethodChangeEventInit : public PaymentRequestUpdateEventInit {
  explicit PaymentMethodChangeEventInit(Handle h) noexcept;
public:
    static PaymentMethodChangeEventInit take_ownership(Handle h) noexcept;
    explicit PaymentMethodChangeEventInit(const emlite::Val &val) noexcept;
    PaymentMethodChangeEventInit() noexcept;
    [[nodiscard]] PaymentMethodChangeEventInit clone() const noexcept;
    [[nodiscard]] jsbind::String methodName() const;
    void methodName(const jsbind::String& value);
    [[nodiscard]] jsbind::Object methodDetails() const;
    void methodDetails(const jsbind::Object& value);
};

} // namespace webbind