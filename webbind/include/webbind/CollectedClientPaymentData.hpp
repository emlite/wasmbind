#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "CollectedClientData.hpp"

namespace webbind {

/// Dictionary type CollectedClientPaymentData
class CollectedClientPaymentData : public CollectedClientData {
  explicit CollectedClientPaymentData(Handle h) noexcept;
public:
    static CollectedClientPaymentData take_ownership(Handle h) noexcept;
    explicit CollectedClientPaymentData(const emlite::Val &val) noexcept;
    CollectedClientPaymentData() noexcept;
    [[nodiscard]] CollectedClientPaymentData clone() const noexcept;
    /// Getter of the `payment` attribute.
    [[nodiscard]] jsbind::Any payment() const;
    /// Setter of the `payment` attribute.
    void payment(const jsbind::Any& value);
};

} // namespace webbind