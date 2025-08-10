#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type SubscriptionObserver
/// [`SubscriptionObserver`](https://developer.mozilla.org/en-US/docs/Web/API/SubscriptionObserver)
class SubscriptionObserver : public emlite::Val {
  explicit SubscriptionObserver(Handle h) noexcept;
public:
    static SubscriptionObserver take_ownership(Handle h) noexcept;
    explicit SubscriptionObserver(const emlite::Val &val) noexcept;
    SubscriptionObserver() noexcept;
    [[nodiscard]] SubscriptionObserver clone() const noexcept;
    [[nodiscard]] jsbind::Function next() const;
    void next(const jsbind::Function& value);
    [[nodiscard]] jsbind::Function error() const;
    void error(const jsbind::Function& value);
    [[nodiscard]] jsbind::Function complete() const;
    void complete(const jsbind::Function& value);
};

} // namespace webbind