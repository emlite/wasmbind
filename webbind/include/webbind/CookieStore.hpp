#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventTarget.hpp"
#include "CookieListItem.hpp"
#include "CookieStoreGetOptions.hpp"
#include "CookieInit.hpp"
#include "CookieStoreDeleteOptions.hpp"

namespace webbind {

/// Interface CookieStore
/// [`CookieStore`](https://developer.mozilla.org/en-US/docs/Web/API/CookieStore)
class CookieStore : public EventTarget {
    explicit CookieStore(Handle h) noexcept;
public:
    explicit CookieStore(const emlite::Val &val) noexcept;
    static CookieStore take_ownership(Handle h) noexcept;
    [[nodiscard]] CookieStore clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The get method.
    /// [`CookieStore.get`](https://developer.mozilla.org/en-US/docs/Web/API/CookieStore/get)
    jsbind::Promise<CookieListItem> get();
    /// The get method.
    /// [`CookieStore.get`](https://developer.mozilla.org/en-US/docs/Web/API/CookieStore/get)
    jsbind::Promise<CookieListItem> get(const CookieStoreGetOptions& options);
    /// The getAll method.
    /// [`CookieStore.getAll`](https://developer.mozilla.org/en-US/docs/Web/API/CookieStore/getAll)
    jsbind::Promise<jsbind::Any> getAll();
    /// The getAll method.
    /// [`CookieStore.getAll`](https://developer.mozilla.org/en-US/docs/Web/API/CookieStore/getAll)
    jsbind::Promise<jsbind::Any> getAll(const CookieStoreGetOptions& options);
    /// The set method.
    /// [`CookieStore.set`](https://developer.mozilla.org/en-US/docs/Web/API/CookieStore/set)
    jsbind::Promise<jsbind::Undefined> set(const CookieInit& options);
    /// The delete method.
    /// [`CookieStore.delete`](https://developer.mozilla.org/en-US/docs/Web/API/CookieStore/delete)
    jsbind::Promise<jsbind::Undefined> delete_(const CookieStoreDeleteOptions& options);
    /// [`CookieStore.onchange`](https://developer.mozilla.org/en-US/docs/Web/API/CookieStore/onchange)
    /// [`CookieStore.onchange`](https://developer.mozilla.org/en-US/docs/Web/API/CookieStore/onchange)
    [[nodiscard]] jsbind::Any onchange() const;
    /// Setter of the `onchange` attribute.
    /// [`CookieStore.onchange`](https://developer.mozilla.org/en-US/docs/Web/API/CookieStore/onchange)
    void onchange(const jsbind::Any& value);
};

} // namespace webbind