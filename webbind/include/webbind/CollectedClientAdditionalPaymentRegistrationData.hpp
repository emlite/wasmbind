#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type CollectedClientAdditionalPaymentRegistrationData
/// [`CollectedClientAdditionalPaymentRegistrationData`](https://developer.mozilla.org/en-US/docs/Web/API/CollectedClientAdditionalPaymentRegistrationData)
class CollectedClientAdditionalPaymentRegistrationData : public emlite::Val {
  explicit CollectedClientAdditionalPaymentRegistrationData(Handle h) noexcept;
public:
    static CollectedClientAdditionalPaymentRegistrationData take_ownership(Handle h) noexcept;
    explicit CollectedClientAdditionalPaymentRegistrationData(const emlite::Val &val) noexcept;
    CollectedClientAdditionalPaymentRegistrationData() noexcept;
    [[nodiscard]] CollectedClientAdditionalPaymentRegistrationData clone() const noexcept;
    [[nodiscard]] jsbind::String browserBoundPublicKey() const;
    void browserBoundPublicKey(const jsbind::String& value);
};

} // namespace webbind