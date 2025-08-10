#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type GenerateBidOutput
/// [`GenerateBidOutput`](https://developer.mozilla.org/en-US/docs/Web/API/GenerateBidOutput)
class GenerateBidOutput : public emlite::Val {
  explicit GenerateBidOutput(Handle h) noexcept;
public:
    static GenerateBidOutput take_ownership(Handle h) noexcept;
    explicit GenerateBidOutput(const emlite::Val &val) noexcept;
    GenerateBidOutput() noexcept;
    [[nodiscard]] GenerateBidOutput clone() const noexcept;
    [[nodiscard]] double bid() const;
    void bid(double value);
    [[nodiscard]] jsbind::String bidCurrency() const;
    void bidCurrency(const jsbind::String& value);
    [[nodiscard]] jsbind::Any render() const;
    void render(const jsbind::Any& value);
    [[nodiscard]] jsbind::Any ad() const;
    void ad(const jsbind::Any& value);
    [[nodiscard]] jsbind::String selectedBuyerAndSellerReportingId() const;
    void selectedBuyerAndSellerReportingId(const jsbind::String& value);
    [[nodiscard]] jsbind::TypedArray<jsbind::Any> adComponents() const;
    void adComponents(const jsbind::TypedArray<jsbind::Any>& value);
    [[nodiscard]] double adCost() const;
    void adCost(double value);
    [[nodiscard]] double modelingSignals() const;
    void modelingSignals(double value);
    [[nodiscard]] bool allowComponentAuction() const;
    void allowComponentAuction(bool value);
    [[nodiscard]] unsigned long targetNumAdComponents() const;
    void targetNumAdComponents(unsigned long value);
    [[nodiscard]] unsigned long numMandatoryAdComponents() const;
    void numMandatoryAdComponents(unsigned long value);
};

} // namespace webbind