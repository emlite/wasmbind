#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type BiddingBrowserSignals
class BiddingBrowserSignals : public emlite::Val {
  explicit BiddingBrowserSignals(Handle h) noexcept;
public:
    static BiddingBrowserSignals take_ownership(Handle h) noexcept;
    explicit BiddingBrowserSignals(const emlite::Val &val) noexcept;
    BiddingBrowserSignals() noexcept;
    [[nodiscard]] BiddingBrowserSignals clone() const noexcept;
    /// Getter of the `topWindowHostname` attribute.
    [[nodiscard]] jsbind::String topWindowHostname() const;
    /// Setter of the `topWindowHostname` attribute.
    void topWindowHostname(const jsbind::String& value);
    /// Getter of the `seller` attribute.
    [[nodiscard]] jsbind::String seller() const;
    /// Setter of the `seller` attribute.
    void seller(const jsbind::String& value);
    /// Getter of the `joinCount` attribute.
    [[nodiscard]] long joinCount() const;
    /// Setter of the `joinCount` attribute.
    void joinCount(long value);
    /// Getter of the `bidCount` attribute.
    [[nodiscard]] long bidCount() const;
    /// Setter of the `bidCount` attribute.
    void bidCount(long value);
    /// Getter of the `recency` attribute.
    [[nodiscard]] long recency() const;
    /// Setter of the `recency` attribute.
    void recency(long value);
    /// Getter of the `adComponentsLimit` attribute.
    [[nodiscard]] long adComponentsLimit() const;
    /// Setter of the `adComponentsLimit` attribute.
    void adComponentsLimit(long value);
    /// Getter of the `multiBidLimit` attribute.
    [[nodiscard]] unsigned short multiBidLimit() const;
    /// Setter of the `multiBidLimit` attribute.
    void multiBidLimit(unsigned short value);
    /// Getter of the `requestedSize` attribute.
    [[nodiscard]] jsbind::Record<jsbind::String, jsbind::String> requestedSize() const;
    /// Setter of the `requestedSize` attribute.
    void requestedSize(const jsbind::Record<jsbind::String, jsbind::String>& value);
    /// Getter of the `topLevelSeller` attribute.
    [[nodiscard]] jsbind::String topLevelSeller() const;
    /// Setter of the `topLevelSeller` attribute.
    void topLevelSeller(const jsbind::String& value);
    /// Getter of the `prevWinsMs` attribute.
    [[nodiscard]] jsbind::TypedArray<jsbind::Any> prevWinsMs() const;
    /// Setter of the `prevWinsMs` attribute.
    void prevWinsMs(const jsbind::TypedArray<jsbind::Any>& value);
    /// Getter of the `wasmHelper` attribute.
    [[nodiscard]] jsbind::Object wasmHelper() const;
    /// Setter of the `wasmHelper` attribute.
    void wasmHelper(const jsbind::Object& value);
    /// Getter of the `dataVersion` attribute.
    [[nodiscard]] unsigned long dataVersion() const;
    /// Setter of the `dataVersion` attribute.
    void dataVersion(unsigned long value);
    /// Getter of the `crossOriginDataVersion` attribute.
    [[nodiscard]] unsigned long crossOriginDataVersion() const;
    /// Setter of the `crossOriginDataVersion` attribute.
    void crossOriginDataVersion(unsigned long value);
    /// Getter of the `forDebuggingOnlyInCooldownOrLockout` attribute.
    [[nodiscard]] bool forDebuggingOnlyInCooldownOrLockout() const;
    /// Setter of the `forDebuggingOnlyInCooldownOrLockout` attribute.
    void forDebuggingOnlyInCooldownOrLockout(bool value);
};

} // namespace webbind