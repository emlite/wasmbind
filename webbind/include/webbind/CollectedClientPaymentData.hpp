#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "CollectedClientData.hpp"

namespace webbind {

/// Dictionary type CollectedClientPaymentData
/// [`CollectedClientPaymentData`](https://developer.mozilla.org/en-US/docs/Web/API/CollectedClientPaymentData)
class CollectedClientPaymentData : public CollectedClientData {
  explicit CollectedClientPaymentData(Handle h) noexcept;
public:
    static CollectedClientPaymentData take_ownership(Handle h) noexcept;
    explicit CollectedClientPaymentData(const emlite::Val &val) noexcept;
    CollectedClientPaymentData() noexcept;
    [[nodiscard]] CollectedClientPaymentData clone() const noexcept;
    [[nodiscard]] jsbind::Any payment() const;
    void payment(const jsbind::Any& value);
};

} // namespace webbind