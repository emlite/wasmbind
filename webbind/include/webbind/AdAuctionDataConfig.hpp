#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class AdAuctionOneSeller;
class AdAuctionDataBuyerConfig;

/// Dictionary type AdAuctionDataConfig
class AdAuctionDataConfig : public emlite::Val {
  explicit AdAuctionDataConfig(Handle h) noexcept;
public:
    static AdAuctionDataConfig take_ownership(Handle h) noexcept;
    explicit AdAuctionDataConfig(const emlite::Val &val) noexcept;
    AdAuctionDataConfig() noexcept;
    [[nodiscard]] AdAuctionDataConfig clone() const noexcept;
    /// Getter of the `seller` attribute.
    [[nodiscard]] jsbind::String seller() const;
    /// Setter of the `seller` attribute.
    void seller(const jsbind::String& value);
    /// Getter of the `coordinatorOrigin` attribute.
    [[nodiscard]] jsbind::String coordinatorOrigin() const;
    /// Setter of the `coordinatorOrigin` attribute.
    void coordinatorOrigin(const jsbind::String& value);
    /// Getter of the `sellers` attribute.
    [[nodiscard]] jsbind::TypedArray<AdAuctionOneSeller> sellers() const;
    /// Setter of the `sellers` attribute.
    void sellers(const jsbind::TypedArray<AdAuctionOneSeller>& value);
    /// Getter of the `requestSize` attribute.
    [[nodiscard]] unsigned long requestSize() const;
    /// Setter of the `requestSize` attribute.
    void requestSize(unsigned long value);
    /// Getter of the `perBuyerConfig` attribute.
    [[nodiscard]] jsbind::Record<jsbind::String, AdAuctionDataBuyerConfig> perBuyerConfig() const;
    /// Setter of the `perBuyerConfig` attribute.
    void perBuyerConfig(const jsbind::Record<jsbind::String, AdAuctionDataBuyerConfig>& value);
};

} // namespace webbind