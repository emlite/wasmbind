#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "PaymentDetailsBase.hpp"
#include "PaymentItem.hpp"

namespace webbind {

/// Dictionary type PaymentDetailsInit
/// [`PaymentDetailsInit`](https://developer.mozilla.org/en-US/docs/Web/API/PaymentDetailsInit)
class PaymentDetailsInit : public PaymentDetailsBase {
  explicit PaymentDetailsInit(Handle h) noexcept;
public:
    static PaymentDetailsInit take_ownership(Handle h) noexcept;
    explicit PaymentDetailsInit(const emlite::Val &val) noexcept;
    PaymentDetailsInit() noexcept;
    [[nodiscard]] PaymentDetailsInit clone() const noexcept;
    [[nodiscard]] jsbind::String id() const;
    void id(const jsbind::String& value);
    [[nodiscard]] PaymentItem total() const;
    void total(const PaymentItem& value);
};

} // namespace webbind