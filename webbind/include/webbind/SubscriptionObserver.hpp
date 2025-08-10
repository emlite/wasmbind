#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type SubscriptionObserver
class SubscriptionObserver : public emlite::Val {
  explicit SubscriptionObserver(Handle h) noexcept;
public:
    static SubscriptionObserver take_ownership(Handle h) noexcept;
    explicit SubscriptionObserver(const emlite::Val &val) noexcept;
    SubscriptionObserver() noexcept;
    [[nodiscard]] SubscriptionObserver clone() const noexcept;
    /// Getter of the `next` attribute.
    [[nodiscard]] jsbind::Function next() const;
    /// Setter of the `next` attribute.
    void next(const jsbind::Function& value);
    /// Getter of the `error` attribute.
    [[nodiscard]] jsbind::Function error() const;
    /// Setter of the `error` attribute.
    void error(const jsbind::Function& value);
    /// Getter of the `complete` attribute.
    [[nodiscard]] jsbind::Function complete() const;
    /// Setter of the `complete` attribute.
    void complete(const jsbind::Function& value);
};

} // namespace webbind