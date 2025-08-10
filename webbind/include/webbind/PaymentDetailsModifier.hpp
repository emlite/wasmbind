#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "PaymentItem.hpp"

namespace webbind {

/// Dictionary type PaymentDetailsModifier
class PaymentDetailsModifier : public emlite::Val {
  explicit PaymentDetailsModifier(Handle h) noexcept;
public:
    static PaymentDetailsModifier take_ownership(Handle h) noexcept;
    explicit PaymentDetailsModifier(const emlite::Val &val) noexcept;
    PaymentDetailsModifier() noexcept;
    [[nodiscard]] PaymentDetailsModifier clone() const noexcept;
    /// Getter of the `supportedMethods` attribute.
    [[nodiscard]] jsbind::String supportedMethods() const;
    /// Setter of the `supportedMethods` attribute.
    void supportedMethods(const jsbind::String& value);
    /// Getter of the `total` attribute.
    [[nodiscard]] PaymentItem total() const;
    /// Setter of the `total` attribute.
    void total(const PaymentItem& value);
    /// Getter of the `additionalDisplayItems` attribute.
    [[nodiscard]] jsbind::TypedArray<PaymentItem> additionalDisplayItems() const;
    /// Setter of the `additionalDisplayItems` attribute.
    void additionalDisplayItems(const jsbind::TypedArray<PaymentItem>& value);
    /// Getter of the `data` attribute.
    [[nodiscard]] jsbind::Object data() const;
    /// Setter of the `data` attribute.
    void data(const jsbind::Object& value);
};

} // namespace webbind