#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventInit.hpp"

namespace webbind {

/// Dictionary type PaymentRequestUpdateEventInit
class PaymentRequestUpdateEventInit : public EventInit {
  explicit PaymentRequestUpdateEventInit(Handle h) noexcept;
public:
    static PaymentRequestUpdateEventInit take_ownership(Handle h) noexcept;
    explicit PaymentRequestUpdateEventInit(const emlite::Val &val) noexcept;
    PaymentRequestUpdateEventInit() noexcept;
    [[nodiscard]] PaymentRequestUpdateEventInit clone() const noexcept;
};

} // namespace webbind