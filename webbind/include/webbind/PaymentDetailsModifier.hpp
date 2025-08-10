#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "PaymentItem.hpp"

namespace webbind {

/// Dictionary type PaymentDetailsModifier
/// [`PaymentDetailsModifier`](https://developer.mozilla.org/en-US/docs/Web/API/PaymentDetailsModifier)
class PaymentDetailsModifier : public emlite::Val {
  explicit PaymentDetailsModifier(Handle h) noexcept;
public:
    static PaymentDetailsModifier take_ownership(Handle h) noexcept;
    explicit PaymentDetailsModifier(const emlite::Val &val) noexcept;
    PaymentDetailsModifier() noexcept;
    [[nodiscard]] PaymentDetailsModifier clone() const noexcept;
    [[nodiscard]] jsbind::String supportedMethods() const;
    void supportedMethods(const jsbind::String& value);
    [[nodiscard]] PaymentItem total() const;
    void total(const PaymentItem& value);
    [[nodiscard]] jsbind::TypedArray<PaymentItem> additionalDisplayItems() const;
    void additionalDisplayItems(const jsbind::TypedArray<PaymentItem>& value);
    [[nodiscard]] jsbind::Object data() const;
    void data(const jsbind::Object& value);
};

} // namespace webbind