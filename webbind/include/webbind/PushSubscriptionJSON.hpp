#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type PushSubscriptionJSON
class PushSubscriptionJSON : public emlite::Val {
  explicit PushSubscriptionJSON(Handle h) noexcept;
public:
    static PushSubscriptionJSON take_ownership(Handle h) noexcept;
    explicit PushSubscriptionJSON(const emlite::Val &val) noexcept;
    PushSubscriptionJSON() noexcept;
    [[nodiscard]] PushSubscriptionJSON clone() const noexcept;
    /// Getter of the `endpoint` attribute.
    [[nodiscard]] jsbind::String endpoint() const;
    /// Setter of the `endpoint` attribute.
    void endpoint(const jsbind::String& value);
    /// Getter of the `expirationTime` attribute.
    [[nodiscard]] jsbind::Any expirationTime() const;
    /// Setter of the `expirationTime` attribute.
    void expirationTime(const jsbind::Any& value);
    /// Getter of the `keys` attribute.
    [[nodiscard]] jsbind::Record<jsbind::String, jsbind::String> keys() const;
    /// Setter of the `keys` attribute.
    void keys(const jsbind::Record<jsbind::String, jsbind::String>& value);
};

} // namespace webbind