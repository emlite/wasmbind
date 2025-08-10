#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type BiddingBrowserSignals
/// [`BiddingBrowserSignals`](https://developer.mozilla.org/en-US/docs/Web/API/BiddingBrowserSignals)
class BiddingBrowserSignals : public emlite::Val {
  explicit BiddingBrowserSignals(Handle h) noexcept;
public:
    static BiddingBrowserSignals take_ownership(Handle h) noexcept;
    explicit BiddingBrowserSignals(const emlite::Val &val) noexcept;
    BiddingBrowserSignals() noexcept;
    [[nodiscard]] BiddingBrowserSignals clone() const noexcept;
    [[nodiscard]] jsbind::String topWindowHostname() const;
    void topWindowHostname(const jsbind::String& value);
    [[nodiscard]] jsbind::String seller() const;
    void seller(const jsbind::String& value);
    [[nodiscard]] long joinCount() const;
    void joinCount(long value);
    [[nodiscard]] long bidCount() const;
    void bidCount(long value);
    [[nodiscard]] long recency() const;
    void recency(long value);
    [[nodiscard]] long adComponentsLimit() const;
    void adComponentsLimit(long value);
    [[nodiscard]] unsigned short multiBidLimit() const;
    void multiBidLimit(unsigned short value);
    [[nodiscard]] jsbind::Record<jsbind::String, jsbind::String> requestedSize() const;
    void requestedSize(const jsbind::Record<jsbind::String, jsbind::String>& value);
    [[nodiscard]] jsbind::String topLevelSeller() const;
    void topLevelSeller(const jsbind::String& value);
    [[nodiscard]] jsbind::TypedArray<jsbind::Any> prevWinsMs() const;
    void prevWinsMs(const jsbind::TypedArray<jsbind::Any>& value);
    [[nodiscard]] jsbind::Object wasmHelper() const;
    void wasmHelper(const jsbind::Object& value);
    [[nodiscard]] unsigned long dataVersion() const;
    void dataVersion(unsigned long value);
    [[nodiscard]] unsigned long crossOriginDataVersion() const;
    void crossOriginDataVersion(unsigned long value);
    [[nodiscard]] bool forDebuggingOnlyInCooldownOrLockout() const;
    void forDebuggingOnlyInCooldownOrLockout(bool value);
};

} // namespace webbind