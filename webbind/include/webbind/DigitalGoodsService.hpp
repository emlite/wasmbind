#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "ItemDetails.hpp"
#include "PurchaseDetails.hpp"

namespace webbind {

/// Interface DigitalGoodsService
/// [`DigitalGoodsService`](https://developer.mozilla.org/en-US/docs/Web/API/DigitalGoodsService)
class DigitalGoodsService : public emlite::Val {
    explicit DigitalGoodsService(Handle h) noexcept;
public:
    explicit DigitalGoodsService(const emlite::Val &val) noexcept;
    static DigitalGoodsService take_ownership(Handle h) noexcept;
    [[nodiscard]] DigitalGoodsService clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The getDetails method.
    /// [`DigitalGoodsService.getDetails`](https://developer.mozilla.org/en-US/docs/Web/API/DigitalGoodsService/getDetails)
    jsbind::Promise<jsbind::TypedArray<ItemDetails>> getDetails(const jsbind::TypedArray<jsbind::String>& itemIds);
    /// The listPurchases method.
    /// [`DigitalGoodsService.listPurchases`](https://developer.mozilla.org/en-US/docs/Web/API/DigitalGoodsService/listPurchases)
    jsbind::Promise<jsbind::TypedArray<PurchaseDetails>> listPurchases();
    /// The listPurchaseHistory method.
    /// [`DigitalGoodsService.listPurchaseHistory`](https://developer.mozilla.org/en-US/docs/Web/API/DigitalGoodsService/listPurchaseHistory)
    jsbind::Promise<jsbind::TypedArray<PurchaseDetails>> listPurchaseHistory();
    /// The consume method.
    /// [`DigitalGoodsService.consume`](https://developer.mozilla.org/en-US/docs/Web/API/DigitalGoodsService/consume)
    jsbind::Promise<jsbind::Undefined> consume(const jsbind::String& purchaseToken);
};

} // namespace webbind