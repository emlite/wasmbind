#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type ScoringBrowserSignals
/// [`ScoringBrowserSignals`](https://developer.mozilla.org/en-US/docs/Web/API/ScoringBrowserSignals)
class ScoringBrowserSignals : public emlite::Val {
  explicit ScoringBrowserSignals(Handle h) noexcept;
public:
    static ScoringBrowserSignals take_ownership(Handle h) noexcept;
    explicit ScoringBrowserSignals(const emlite::Val &val) noexcept;
    ScoringBrowserSignals() noexcept;
    [[nodiscard]] ScoringBrowserSignals clone() const noexcept;
    [[nodiscard]] jsbind::String topWindowHostname() const;
    void topWindowHostname(const jsbind::String& value);
    [[nodiscard]] jsbind::String interestGroupOwner() const;
    void interestGroupOwner(const jsbind::String& value);
    [[nodiscard]] jsbind::String renderURL() const;
    void renderURL(const jsbind::String& value);
    [[nodiscard]] unsigned long biddingDurationMsec() const;
    void biddingDurationMsec(unsigned long value);
    [[nodiscard]] jsbind::String bidCurrency() const;
    void bidCurrency(const jsbind::String& value);
    [[nodiscard]] jsbind::Record<jsbind::String, jsbind::String> renderSize() const;
    void renderSize(const jsbind::Record<jsbind::String, jsbind::String>& value);
    [[nodiscard]] unsigned long dataVersion() const;
    void dataVersion(unsigned long value);
    [[nodiscard]] unsigned long crossOriginDataVersion() const;
    void crossOriginDataVersion(unsigned long value);
    [[nodiscard]] jsbind::TypedArray<jsbind::String> adComponents() const;
    void adComponents(const jsbind::TypedArray<jsbind::String>& value);
    [[nodiscard]] bool forDebuggingOnlyInCooldownOrLockout() const;
    void forDebuggingOnlyInCooldownOrLockout(bool value);
    [[nodiscard]] jsbind::String creativeScanningMetadata() const;
    void creativeScanningMetadata(const jsbind::String& value);
    [[nodiscard]] jsbind::TypedArray<jsbind::String> adComponentsCreativeScanningMetadata() const;
    void adComponentsCreativeScanningMetadata(const jsbind::TypedArray<jsbind::String>& value);
};

} // namespace webbind