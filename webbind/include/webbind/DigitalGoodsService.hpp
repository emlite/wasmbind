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
    ItemDetails clone() const noexcept;
    jsbind::String itemId() const;
    void itemId(const jsbind::String& value);
    jsbind::String title() const;
    void title(const jsbind::String& value);
    jsbind::Any price() const;
    void price(const jsbind::Any& value);
    ItemType type() const;
    void type(const ItemType& value);
    jsbind::String description() const;
    void description(const jsbind::String& value);
    jsbind::TypedArray<jsbind::String> iconURLs() const;
    void iconURLs(const jsbind::TypedArray<jsbind::String>& value);
    jsbind::String subscriptionPeriod() const;
    void subscriptionPeriod(const jsbind::String& value);
    jsbind::String freeTrialPeriod() const;
    void freeTrialPeriod(const jsbind::String& value);
    jsbind::Any introductoryPrice() const;
    void introductoryPrice(const jsbind::Any& value);
    jsbind::String introductoryPricePeriod() const;
    void introductoryPricePeriod(const jsbind::String& value);
    long long introductoryPriceCycles() const;
    void introductoryPriceCycles(long long value);
};

class PurchaseDetails : public emlite::Val {
  explicit PurchaseDetails(Handle h) noexcept;
public:
    static PurchaseDetails take_ownership(Handle h) noexcept;
    explicit PurchaseDetails(const emlite::Val &val) noexcept;
    PurchaseDetails() noexcept;
    PurchaseDetails clone() const noexcept;
    jsbind::String itemId() const;
    void itemId(const jsbind::String& value);
    jsbind::String purchaseToken() const;
    void purchaseToken(const jsbind::String& value);
};

class DigitalGoodsService : public emlite::Val {
    explicit DigitalGoodsService(Handle h) noexcept;

public:
    explicit DigitalGoodsService(const emlite::Val &val) noexcept;
    static DigitalGoodsService take_ownership(Handle h) noexcept;

    DigitalGoodsService clone() const noexcept;
    jsbind::Promise<jsbind::TypedArray<ItemDetails>> getDetails(const jsbind::TypedArray<jsbind::String>& itemIds);
    jsbind::Promise<jsbind::TypedArray<PurchaseDetails>> listPurchases();
    jsbind::Promise<jsbind::TypedArray<PurchaseDetails>> listPurchaseHistory();
    jsbind::Promise<jsbind::Undefined> consume(const jsbind::String& purchaseToken);
};

