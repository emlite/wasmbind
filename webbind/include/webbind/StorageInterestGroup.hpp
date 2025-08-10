#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "AuctionAdInterestGroup.hpp"

namespace webbind {

/// Dictionary type StorageInterestGroup
/// [`StorageInterestGroup`](https://developer.mozilla.org/en-US/docs/Web/API/StorageInterestGroup)
class StorageInterestGroup : public AuctionAdInterestGroup {
  explicit StorageInterestGroup(Handle h) noexcept;
public:
    static StorageInterestGroup take_ownership(Handle h) noexcept;
    explicit StorageInterestGroup(const emlite::Val &val) noexcept;
    StorageInterestGroup() noexcept;
    [[nodiscard]] StorageInterestGroup clone() const noexcept;
    [[nodiscard]] long long joinCount() const;
    void joinCount(long long value);
    [[nodiscard]] long long bidCount() const;
    void bidCount(long long value);
    [[nodiscard]] jsbind::TypedArray<jsbind::Any> prevWinsMs() const;
    void prevWinsMs(const jsbind::TypedArray<jsbind::Any>& value);
    [[nodiscard]] jsbind::String joiningOrigin() const;
    void joiningOrigin(const jsbind::String& value);
    [[nodiscard]] long long timeSinceGroupJoinedMs() const;
    void timeSinceGroupJoinedMs(long long value);
    [[nodiscard]] long long lifetimeRemainingMs() const;
    void lifetimeRemainingMs(long long value);
    [[nodiscard]] long long timeSinceLastUpdateMs() const;
    void timeSinceLastUpdateMs(long long value);
    [[nodiscard]] long long timeUntilNextUpdateMs() const;
    void timeUntilNextUpdateMs(long long value);
    [[nodiscard]] long long estimatedSize() const;
    void estimatedSize(long long value);
};

} // namespace webbind