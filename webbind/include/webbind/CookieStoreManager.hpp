#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "CookieStore.hpp"
#include "enums.hpp"


/// The CookieStoreManager class.
/// [`CookieStoreManager`](https://developer.mozilla.org/en-US/docs/Web/API/CookieStoreManager)
class CookieStoreManager : public emlite::Val {
    explicit CookieStoreManager(Handle h) noexcept;

public:
    explicit CookieStoreManager(const emlite::Val &val) noexcept;
    static CookieStoreManager take_ownership(Handle h) noexcept;

    [[nodiscard]] CookieStoreManager clone() const noexcept;
    /// The subscribe method.
    /// [`CookieStoreManager.subscribe`](https://developer.mozilla.org/en-US/docs/Web/API/CookieStoreManager/subscribe)
    jsbind::Promise<jsbind::Undefined> subscribe(const jsbind::TypedArray<CookieStoreGetOptions>& subscriptions);
    /// The getSubscriptions method.
    /// [`CookieStoreManager.getSubscriptions`](https://developer.mozilla.org/en-US/docs/Web/API/CookieStoreManager/getSubscriptions)
    jsbind::Promise<jsbind::TypedArray<CookieStoreGetOptions>> getSubscriptions();
    /// The unsubscribe method.
    /// [`CookieStoreManager.unsubscribe`](https://developer.mozilla.org/en-US/docs/Web/API/CookieStoreManager/unsubscribe)
    jsbind::Promise<jsbind::Undefined> unsubscribe(const jsbind::TypedArray<CookieStoreGetOptions>& subscriptions);
};

