#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "PaymentDetailsBase.hpp"
#include "PaymentItem.hpp"

namespace webbind {

/// Dictionary type PaymentDetailsInit
class PaymentDetailsInit : public PaymentDetailsBase {
  explicit PaymentDetailsInit(Handle h) noexcept;
public:
    static PaymentDetailsInit take_ownership(Handle h) noexcept;
    explicit PaymentDetailsInit(const emlite::Val &val) noexcept;
    PaymentDetailsInit() noexcept;
    [[nodiscard]] PaymentDetailsInit clone() const noexcept;
    /// Getter of the `id` attribute.
    [[nodiscard]] jsbind::String id() const;
    /// Setter of the `id` attribute.
    void id(const jsbind::String& value);
    /// Getter of the `total` attribute.
    [[nodiscard]] PaymentItem total() const;
    /// Setter of the `total` attribute.
    void total(const PaymentItem& value);
};

} // namespace webbind