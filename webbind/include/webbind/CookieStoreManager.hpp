#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "CookieStore.hpp"
#include "enums.hpp"


class CookieStoreManager : public emlite::Val {
    explicit CookieStoreManager(Handle h) noexcept;

public:
    explicit CookieStoreManager(const emlite::Val &val) noexcept;
    static CookieStoreManager take_ownership(Handle h) noexcept;

    CookieStoreManager clone() const noexcept;
    jsbind::Promise<jsbind::Undefined> subscribe(const jsbind::TypedArray<CookieStoreGetOptions>& subscriptions);
    jsbind::Promise<jsbind::TypedArray<CookieStoreGetOptions>> getSubscriptions();
    jsbind::Promise<jsbind::Undefined> unsubscribe(const jsbind::TypedArray<CookieStoreGetOptions>& subscriptions);
};

