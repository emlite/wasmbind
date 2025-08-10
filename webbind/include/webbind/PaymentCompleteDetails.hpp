#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type PaymentCompleteDetails
/// [`PaymentCompleteDetails`](https://developer.mozilla.org/en-US/docs/Web/API/PaymentCompleteDetails)
class PaymentCompleteDetails : public emlite::Val {
  explicit PaymentCompleteDetails(Handle h) noexcept;
public:
    static PaymentCompleteDetails take_ownership(Handle h) noexcept;
    explicit PaymentCompleteDetails(const emlite::Val &val) noexcept;
    PaymentCompleteDetails() noexcept;
    [[nodiscard]] PaymentCompleteDetails clone() const noexcept;
    [[nodiscard]] jsbind::Object data() const;
    void data(const jsbind::Object& value);
};

} // namespace webbind