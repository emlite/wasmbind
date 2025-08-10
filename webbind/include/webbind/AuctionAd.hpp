#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type AuctionAd
/// [`AuctionAd`](https://developer.mozilla.org/en-US/docs/Web/API/AuctionAd)
class AuctionAd : public emlite::Val {
  explicit AuctionAd(Handle h) noexcept;
public:
    static AuctionAd take_ownership(Handle h) noexcept;
    explicit AuctionAd(const emlite::Val &val) noexcept;
    AuctionAd() noexcept;
    [[nodiscard]] AuctionAd clone() const noexcept;
    [[nodiscard]] jsbind::String renderURL() const;
    void renderURL(const jsbind::String& value);
    [[nodiscard]] jsbind::String sizeGroup() const;
    void sizeGroup(const jsbind::String& value);
    [[nodiscard]] jsbind::Any metadata() const;
    void metadata(const jsbind::Any& value);
    [[nodiscard]] jsbind::String buyerReportingId() const;
    void buyerReportingId(const jsbind::String& value);
    [[nodiscard]] jsbind::String buyerAndSellerReportingId() const;
    void buyerAndSellerReportingId(const jsbind::String& value);
    [[nodiscard]] jsbind::TypedArray<jsbind::String> selectableBuyerAndSellerReportingIds() const;
    void selectableBuyerAndSellerReportingIds(const jsbind::TypedArray<jsbind::String>& value);
    [[nodiscard]] jsbind::TypedArray<jsbind::String> allowedReportingOrigins() const;
    void allowedReportingOrigins(const jsbind::TypedArray<jsbind::String>& value);
    [[nodiscard]] jsbind::String adRenderId() const;
    void adRenderId(const jsbind::String& value);
    [[nodiscard]] jsbind::String creativeScanningMetadata() const;
    void creativeScanningMetadata(const jsbind::String& value);
};

} // namespace webbind