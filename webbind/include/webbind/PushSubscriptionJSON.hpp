#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type PushSubscriptionJSON
/// [`PushSubscriptionJSON`](https://developer.mozilla.org/en-US/docs/Web/API/PushSubscriptionJSON)
class PushSubscriptionJSON : public emlite::Val {
  explicit PushSubscriptionJSON(Handle h) noexcept;
public:
    static PushSubscriptionJSON take_ownership(Handle h) noexcept;
    explicit PushSubscriptionJSON(const emlite::Val &val) noexcept;
    PushSubscriptionJSON() noexcept;
    [[nodiscard]] PushSubscriptionJSON clone() const noexcept;
    [[nodiscard]] jsbind::String endpoint() const;
    void endpoint(const jsbind::String& value);
    [[nodiscard]] jsbind::Any expirationTime() const;
    void expirationTime(const jsbind::Any& value);
    [[nodiscard]] jsbind::Record<jsbind::String, jsbind::String> keys() const;
    void keys(const jsbind::Record<jsbind::String, jsbind::String>& value);
};

} // namespace webbind