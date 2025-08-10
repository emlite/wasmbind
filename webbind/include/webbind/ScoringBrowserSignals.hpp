#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type ScoringBrowserSignals
class ScoringBrowserSignals : public emlite::Val {
  explicit ScoringBrowserSignals(Handle h) noexcept;
public:
    static ScoringBrowserSignals take_ownership(Handle h) noexcept;
    explicit ScoringBrowserSignals(const emlite::Val &val) noexcept;
    ScoringBrowserSignals() noexcept;
    [[nodiscard]] ScoringBrowserSignals clone() const noexcept;
    /// Getter of the `topWindowHostname` attribute.
    [[nodiscard]] jsbind::String topWindowHostname() const;
    /// Setter of the `topWindowHostname` attribute.
    void topWindowHostname(const jsbind::String& value);
    /// Getter of the `interestGroupOwner` attribute.
    [[nodiscard]] jsbind::String interestGroupOwner() const;
    /// Setter of the `interestGroupOwner` attribute.
    void interestGroupOwner(const jsbind::String& value);
    /// Getter of the `renderURL` attribute.
    [[nodiscard]] jsbind::String renderURL() const;
    /// Setter of the `renderURL` attribute.
    void renderURL(const jsbind::String& value);
    /// Getter of the `biddingDurationMsec` attribute.
    [[nodiscard]] unsigned long biddingDurationMsec() const;
    /// Setter of the `biddingDurationMsec` attribute.
    void biddingDurationMsec(unsigned long value);
    /// Getter of the `bidCurrency` attribute.
    [[nodiscard]] jsbind::String bidCurrency() const;
    /// Setter of the `bidCurrency` attribute.
    void bidCurrency(const jsbind::String& value);
    /// Getter of the `renderSize` attribute.
    [[nodiscard]] jsbind::Record<jsbind::String, jsbind::String> renderSize() const;
    /// Setter of the `renderSize` attribute.
    void renderSize(const jsbind::Record<jsbind::String, jsbind::String>& value);
    /// Getter of the `dataVersion` attribute.
    [[nodiscard]] unsigned long dataVersion() const;
    /// Setter of the `dataVersion` attribute.
    void dataVersion(unsigned long value);
    /// Getter of the `crossOriginDataVersion` attribute.
    [[nodiscard]] unsigned long crossOriginDataVersion() const;
    /// Setter of the `crossOriginDataVersion` attribute.
    void crossOriginDataVersion(unsigned long value);
    /// Getter of the `adComponents` attribute.
    [[nodiscard]] jsbind::TypedArray<jsbind::String> adComponents() const;
    /// Setter of the `adComponents` attribute.
    void adComponents(const jsbind::TypedArray<jsbind::String>& value);
    /// Getter of the `forDebuggingOnlyInCooldownOrLockout` attribute.
    [[nodiscard]] bool forDebuggingOnlyInCooldownOrLockout() const;
    /// Setter of the `forDebuggingOnlyInCooldownOrLockout` attribute.
    void forDebuggingOnlyInCooldownOrLockout(bool value);
    /// Getter of the `creativeScanningMetadata` attribute.
    [[nodiscard]] jsbind::String creativeScanningMetadata() const;
    /// Setter of the `creativeScanningMetadata` attribute.
    void creativeScanningMetadata(const jsbind::String& value);
    /// Getter of the `adComponentsCreativeScanningMetadata` attribute.
    [[nodiscard]] jsbind::TypedArray<jsbind::String> adComponentsCreativeScanningMetadata() const;
    /// Setter of the `adComponentsCreativeScanningMetadata` attribute.
    void adComponentsCreativeScanningMetadata(const jsbind::TypedArray<jsbind::String>& value);
};

} // namespace webbind