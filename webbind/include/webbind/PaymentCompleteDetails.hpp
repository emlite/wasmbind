#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type PaymentCompleteDetails
class PaymentCompleteDetails : public emlite::Val {
  explicit PaymentCompleteDetails(Handle h) noexcept;
public:
    static PaymentCompleteDetails take_ownership(Handle h) noexcept;
    explicit PaymentCompleteDetails(const emlite::Val &val) noexcept;
    PaymentCompleteDetails() noexcept;
    [[nodiscard]] PaymentCompleteDetails clone() const noexcept;
    /// Getter of the `data` attribute.
    [[nodiscard]] jsbind::Object data() const;
    /// Setter of the `data` attribute.
    void data(const jsbind::Object& value);
};

} // namespace webbind