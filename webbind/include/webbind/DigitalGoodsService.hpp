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
    jsbind::DOMString itemId() const;
    void itemId(const jsbind::DOMString& value);
    jsbind::DOMString title() const;
    void title(const jsbind::DOMString& value);
    jsbind::Any price() const;
    void price(const jsbind::Any& value);
    ItemType type() const;
    void type(const ItemType& value);
    jsbind::DOMString description() const;
    void description(const jsbind::DOMString& value);
    jsbind::Sequence<jsbind::DOMString> iconURLs() const;
    void iconURLs(const jsbind::Sequence<jsbind::DOMString>& value);
    jsbind::DOMString subscriptionPeriod() const;
    void subscriptionPeriod(const jsbind::DOMString& value);
    jsbind::DOMString freeTrialPeriod() const;
    void freeTrialPeriod(const jsbind::DOMString& value);
    jsbind::Any introductoryPrice() const;
    void introductoryPrice(const jsbind::Any& value);
    jsbind::DOMString introductoryPricePeriod() const;
    void introductoryPricePeriod(const jsbind::DOMString& value);
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
    jsbind::DOMString itemId() const;
    void itemId(const jsbind::DOMString& value);
    jsbind::DOMString purchaseToken() const;
    void purchaseToken(const jsbind::DOMString& value);
};

class DigitalGoodsService : public emlite::Val {
    explicit DigitalGoodsService(Handle h) noexcept;

public:
    explicit DigitalGoodsService(const emlite::Val &val) noexcept;
    static DigitalGoodsService take_ownership(Handle h) noexcept;

    DigitalGoodsService clone() const noexcept;
    jsbind::Promise<jsbind::Sequence<ItemDetails>> getDetails(const jsbind::Sequence<jsbind::DOMString>& itemIds);
    jsbind::Promise<jsbind::Sequence<PurchaseDetails>> listPurchases();
    jsbind::Promise<jsbind::Sequence<PurchaseDetails>> listPurchaseHistory();
    jsbind::Promise<jsbind::Undefined> consume(const jsbind::DOMString& purchaseToken);
};

