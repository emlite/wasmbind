#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type GenerateBidOutput
class GenerateBidOutput : public emlite::Val {
  explicit GenerateBidOutput(Handle h) noexcept;
public:
    static GenerateBidOutput take_ownership(Handle h) noexcept;
    explicit GenerateBidOutput(const emlite::Val &val) noexcept;
    GenerateBidOutput() noexcept;
    [[nodiscard]] GenerateBidOutput clone() const noexcept;
    /// Getter of the `bid` attribute.
    [[nodiscard]] double bid() const;
    /// Setter of the `bid` attribute.
    void bid(double value);
    /// Getter of the `bidCurrency` attribute.
    [[nodiscard]] jsbind::String bidCurrency() const;
    /// Setter of the `bidCurrency` attribute.
    void bidCurrency(const jsbind::String& value);
    /// Getter of the `render` attribute.
    [[nodiscard]] jsbind::Any render() const;
    /// Setter of the `render` attribute.
    void render(const jsbind::Any& value);
    /// Getter of the `ad` attribute.
    [[nodiscard]] jsbind::Any ad() const;
    /// Setter of the `ad` attribute.
    void ad(const jsbind::Any& value);
    /// Getter of the `selectedBuyerAndSellerReportingId` attribute.
    [[nodiscard]] jsbind::String selectedBuyerAndSellerReportingId() const;
    /// Setter of the `selectedBuyerAndSellerReportingId` attribute.
    void selectedBuyerAndSellerReportingId(const jsbind::String& value);
    /// Getter of the `adComponents` attribute.
    [[nodiscard]] jsbind::TypedArray<jsbind::Any> adComponents() const;
    /// Setter of the `adComponents` attribute.
    void adComponents(const jsbind::TypedArray<jsbind::Any>& value);
    /// Getter of the `adCost` attribute.
    [[nodiscard]] double adCost() const;
    /// Setter of the `adCost` attribute.
    void adCost(double value);
    /// Getter of the `modelingSignals` attribute.
    [[nodiscard]] double modelingSignals() const;
    /// Setter of the `modelingSignals` attribute.
    void modelingSignals(double value);
    /// Getter of the `allowComponentAuction` attribute.
    [[nodiscard]] bool allowComponentAuction() const;
    /// Setter of the `allowComponentAuction` attribute.
    void allowComponentAuction(bool value);
    /// Getter of the `targetNumAdComponents` attribute.
    [[nodiscard]] unsigned long targetNumAdComponents() const;
    /// Setter of the `targetNumAdComponents` attribute.
    void targetNumAdComponents(unsigned long value);
    /// Getter of the `numMandatoryAdComponents` attribute.
    [[nodiscard]] unsigned long numMandatoryAdComponents() const;
    /// Setter of the `numMandatoryAdComponents` attribute.
    void numMandatoryAdComponents(unsigned long value);
};

} // namespace webbind