#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type AuctionAd
class AuctionAd : public emlite::Val {
  explicit AuctionAd(Handle h) noexcept;
public:
    static AuctionAd take_ownership(Handle h) noexcept;
    explicit AuctionAd(const emlite::Val &val) noexcept;
    AuctionAd() noexcept;
    [[nodiscard]] AuctionAd clone() const noexcept;
    /// Getter of the `renderURL` attribute.
    [[nodiscard]] jsbind::String renderURL() const;
    /// Setter of the `renderURL` attribute.
    void renderURL(const jsbind::String& value);
    /// Getter of the `sizeGroup` attribute.
    [[nodiscard]] jsbind::String sizeGroup() const;
    /// Setter of the `sizeGroup` attribute.
    void sizeGroup(const jsbind::String& value);
    /// Getter of the `metadata` attribute.
    [[nodiscard]] jsbind::Any metadata() const;
    /// Setter of the `metadata` attribute.
    void metadata(const jsbind::Any& value);
    /// Getter of the `buyerReportingId` attribute.
    [[nodiscard]] jsbind::String buyerReportingId() const;
    /// Setter of the `buyerReportingId` attribute.
    void buyerReportingId(const jsbind::String& value);
    /// Getter of the `buyerAndSellerReportingId` attribute.
    [[nodiscard]] jsbind::String buyerAndSellerReportingId() const;
    /// Setter of the `buyerAndSellerReportingId` attribute.
    void buyerAndSellerReportingId(const jsbind::String& value);
    /// Getter of the `selectableBuyerAndSellerReportingIds` attribute.
    [[nodiscard]] jsbind::TypedArray<jsbind::String> selectableBuyerAndSellerReportingIds() const;
    /// Setter of the `selectableBuyerAndSellerReportingIds` attribute.
    void selectableBuyerAndSellerReportingIds(const jsbind::TypedArray<jsbind::String>& value);
    /// Getter of the `allowedReportingOrigins` attribute.
    [[nodiscard]] jsbind::TypedArray<jsbind::String> allowedReportingOrigins() const;
    /// Setter of the `allowedReportingOrigins` attribute.
    void allowedReportingOrigins(const jsbind::TypedArray<jsbind::String>& value);
    /// Getter of the `adRenderId` attribute.
    [[nodiscard]] jsbind::String adRenderId() const;
    /// Setter of the `adRenderId` attribute.
    void adRenderId(const jsbind::String& value);
    /// Getter of the `creativeScanningMetadata` attribute.
    [[nodiscard]] jsbind::String creativeScanningMetadata() const;
    /// Setter of the `creativeScanningMetadata` attribute.
    void creativeScanningMetadata(const jsbind::String& value);
};

} // namespace webbind