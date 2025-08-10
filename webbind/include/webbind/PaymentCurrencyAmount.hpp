#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type PaymentCurrencyAmount
/// [`PaymentCurrencyAmount`](https://developer.mozilla.org/en-US/docs/Web/API/PaymentCurrencyAmount)
class PaymentCurrencyAmount : public emlite::Val {
  explicit PaymentCurrencyAmount(Handle h) noexcept;
public:
    static PaymentCurrencyAmount take_ownership(Handle h) noexcept;
    explicit PaymentCurrencyAmount(const emlite::Val &val) noexcept;
    PaymentCurrencyAmount() noexcept;
    [[nodiscard]] PaymentCurrencyAmount clone() const noexcept;
    [[nodiscard]] jsbind::String currency() const;
    void currency(const jsbind::String& value);
    [[nodiscard]] jsbind::String value() const;
    void value(const jsbind::String& value);
};

} // namespace webbind