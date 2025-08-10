#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type CollectedClientAdditionalPaymentRegistrationData
class CollectedClientAdditionalPaymentRegistrationData : public emlite::Val {
  explicit CollectedClientAdditionalPaymentRegistrationData(Handle h) noexcept;
public:
    static CollectedClientAdditionalPaymentRegistrationData take_ownership(Handle h) noexcept;
    explicit CollectedClientAdditionalPaymentRegistrationData(const emlite::Val &val) noexcept;
    CollectedClientAdditionalPaymentRegistrationData() noexcept;
    [[nodiscard]] CollectedClientAdditionalPaymentRegistrationData clone() const noexcept;
    /// Getter of the `browserBoundPublicKey` attribute.
    [[nodiscard]] jsbind::String browserBoundPublicKey() const;
    /// Setter of the `browserBoundPublicKey` attribute.
    void browserBoundPublicKey(const jsbind::String& value);
};

} // namespace webbind