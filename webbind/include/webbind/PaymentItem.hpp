#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "PaymentCurrencyAmount.hpp"

namespace webbind {

/// Dictionary type PaymentItem
/// [`PaymentItem`](https://developer.mozilla.org/en-US/docs/Web/API/PaymentItem)
class PaymentItem : public emlite::Val {
  explicit PaymentItem(Handle h) noexcept;
public:
    static PaymentItem take_ownership(Handle h) noexcept;
    explicit PaymentItem(const emlite::Val &val) noexcept;
    PaymentItem() noexcept;
    [[nodiscard]] PaymentItem clone() const noexcept;
    [[nodiscard]] jsbind::String label() const;
    void label(const jsbind::String& value);
    [[nodiscard]] PaymentCurrencyAmount amount() const;
    void amount(const PaymentCurrencyAmount& value);
    [[nodiscard]] bool pending() const;
    void pending(bool value);
};

} // namespace webbind