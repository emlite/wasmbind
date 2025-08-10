#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "AuctionAdInterestGroup.hpp"

namespace webbind {

/// Dictionary type StorageInterestGroup
class StorageInterestGroup : public AuctionAdInterestGroup {
  explicit StorageInterestGroup(Handle h) noexcept;
public:
    static StorageInterestGroup take_ownership(Handle h) noexcept;
    explicit StorageInterestGroup(const emlite::Val &val) noexcept;
    StorageInterestGroup() noexcept;
    [[nodiscard]] StorageInterestGroup clone() const noexcept;
    /// Getter of the `joinCount` attribute.
    [[nodiscard]] long long joinCount() const;
    /// Setter of the `joinCount` attribute.
    void joinCount(long long value);
    /// Getter of the `bidCount` attribute.
    [[nodiscard]] long long bidCount() const;
    /// Setter of the `bidCount` attribute.
    void bidCount(long long value);
    /// Getter of the `prevWinsMs` attribute.
    [[nodiscard]] jsbind::TypedArray<jsbind::Any> prevWinsMs() const;
    /// Setter of the `prevWinsMs` attribute.
    void prevWinsMs(const jsbind::TypedArray<jsbind::Any>& value);
    /// Getter of the `joiningOrigin` attribute.
    [[nodiscard]] jsbind::String joiningOrigin() const;
    /// Setter of the `joiningOrigin` attribute.
    void joiningOrigin(const jsbind::String& value);
    /// Getter of the `timeSinceGroupJoinedMs` attribute.
    [[nodiscard]] long long timeSinceGroupJoinedMs() const;
    /// Setter of the `timeSinceGroupJoinedMs` attribute.
    void timeSinceGroupJoinedMs(long long value);
    /// Getter of the `lifetimeRemainingMs` attribute.
    [[nodiscard]] long long lifetimeRemainingMs() const;
    /// Setter of the `lifetimeRemainingMs` attribute.
    void lifetimeRemainingMs(long long value);
    /// Getter of the `timeSinceLastUpdateMs` attribute.
    [[nodiscard]] long long timeSinceLastUpdateMs() const;
    /// Setter of the `timeSinceLastUpdateMs` attribute.
    void timeSinceLastUpdateMs(long long value);
    /// Getter of the `timeUntilNextUpdateMs` attribute.
    [[nodiscard]] long long timeUntilNextUpdateMs() const;
    /// Setter of the `timeUntilNextUpdateMs` attribute.
    void timeUntilNextUpdateMs(long long value);
    /// Getter of the `estimatedSize` attribute.
    [[nodiscard]] long long estimatedSize() const;
    /// Setter of the `estimatedSize` attribute.
    void estimatedSize(long long value);
};

} // namespace webbind