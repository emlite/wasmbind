#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class ItemDetails;
class PurchaseDetails;


class ItemDetails : public emlite::Val {
  explicit ItemDetails(Handle h) noexcept;
public:
    static ItemDetails take_ownership(Handle h) noexcept;
    explicit ItemDetails(const emlite::Val &val) noexcept;
    ItemDetails() noexcept;
    [[nodiscard]] ItemDetails clone() const noexcept;
    [[nodiscard]] jsbind::String itemId() const;
    void itemId(const jsbind::String& value);
    [[nodiscard]] jsbind::String title() const;
    void title(const jsbind::String& value);
    [[nodiscard]] jsbind::Any price() const;
    void price(const jsbind::Any& value);
    [[nodiscard]] ItemType type() const;
    void type(const ItemType& value);
    [[nodiscard]] jsbind::String description() const;
    void description(const jsbind::String& value);
    [[nodiscard]] jsbind::TypedArray<jsbind::String> iconURLs() const;
    void iconURLs(const jsbind::TypedArray<jsbind::String>& value);
    [[nodiscard]] jsbind::String subscriptionPeriod() const;
    void subscriptionPeriod(const jsbind::String& value);
    [[nodiscard]] jsbind::String freeTrialPeriod() const;
    void freeTrialPeriod(const jsbind::String& value);
    [[nodiscard]] jsbind::Any introductoryPrice() const;
    void introductoryPrice(const jsbind::Any& value);
    [[nodiscard]] jsbind::String introductoryPricePeriod() const;
    void introductoryPricePeriod(const jsbind::String& value);
    [[nodiscard]] long long introductoryPriceCycles() const;
    void introductoryPriceCycles(long long value);
};

class PurchaseDetails : public emlite::Val {
  explicit PurchaseDetails(Handle h) noexcept;
public:
    static PurchaseDetails take_ownership(Handle h) noexcept;
    explicit PurchaseDetails(const emlite::Val &val) noexcept;
    PurchaseDetails() noexcept;
    [[nodiscard]] PurchaseDetails clone() const noexcept;
    [[nodiscard]] jsbind::String itemId() const;
    void itemId(const jsbind::String& value);
    [[nodiscard]] jsbind::String purchaseToken() const;
    void purchaseToken(const jsbind::String& value);
};

/// The DigitalGoodsService class.
/// [`DigitalGoodsService`](https://developer.mozilla.org/en-US/docs/Web/API/DigitalGoodsService)
class DigitalGoodsService : public emlite::Val {
    explicit DigitalGoodsService(Handle h) noexcept;

public:
    explicit DigitalGoodsService(const emlite::Val &val) noexcept;
    static DigitalGoodsService take_ownership(Handle h) noexcept;

    [[nodiscard]] DigitalGoodsService clone() const noexcept;
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

