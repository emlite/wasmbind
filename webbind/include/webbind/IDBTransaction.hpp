#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventTarget.hpp"
#include "enums.hpp"

namespace webbind {

class DOMStringList;
class IDBDatabase;
class DOMException;
class IDBObjectStore;

/// Interface IDBTransaction
/// [`IDBTransaction`](https://developer.mozilla.org/en-US/docs/Web/API/IDBTransaction)
class IDBTransaction : public EventTarget {
    explicit IDBTransaction(Handle h) noexcept;
public:
    explicit IDBTransaction(const emlite::Val &val) noexcept;
    static IDBTransaction take_ownership(Handle h) noexcept;
    [[nodiscard]] IDBTransaction clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`IDBTransaction.objectStoreNames`](https://developer.mozilla.org/en-US/docs/Web/API/IDBTransaction/objectStoreNames)
    /// [`IDBTransaction.objectStoreNames`](https://developer.mozilla.org/en-US/docs/Web/API/IDBTransaction/objectStoreNames)
    [[nodiscard]] DOMStringList objectStoreNames() const;
    /// [`IDBTransaction.mode`](https://developer.mozilla.org/en-US/docs/Web/API/IDBTransaction/mode)
    /// [`IDBTransaction.mode`](https://developer.mozilla.org/en-US/docs/Web/API/IDBTransaction/mode)
    [[nodiscard]] IDBTransactionMode mode() const;
    /// [`IDBTransaction.durability`](https://developer.mozilla.org/en-US/docs/Web/API/IDBTransaction/durability)
    /// [`IDBTransaction.durability`](https://developer.mozilla.org/en-US/docs/Web/API/IDBTransaction/durability)
    [[nodiscard]] IDBTransactionDurability durability() const;
    /// [`IDBTransaction.db`](https://developer.mozilla.org/en-US/docs/Web/API/IDBTransaction/db)
    /// [`IDBTransaction.db`](https://developer.mozilla.org/en-US/docs/Web/API/IDBTransaction/db)
    [[nodiscard]] IDBDatabase db() const;
    /// [`IDBTransaction.error`](https://developer.mozilla.org/en-US/docs/Web/API/IDBTransaction/error)
    /// [`IDBTransaction.error`](https://developer.mozilla.org/en-US/docs/Web/API/IDBTransaction/error)
    [[nodiscard]] DOMException error() const;
    /// The objectStore method.
    /// [`IDBTransaction.objectStore`](https://developer.mozilla.org/en-US/docs/Web/API/IDBTransaction/objectStore)
    IDBObjectStore objectStore(const jsbind::String& name);
    /// The commit method.
    /// [`IDBTransaction.commit`](https://developer.mozilla.org/en-US/docs/Web/API/IDBTransaction/commit)
    jsbind::Undefined commit();
    /// The abort method.
    /// [`IDBTransaction.abort`](https://developer.mozilla.org/en-US/docs/Web/API/IDBTransaction/abort)
    jsbind::Undefined abort();
    /// [`IDBTransaction.onabort`](https://developer.mozilla.org/en-US/docs/Web/API/IDBTransaction/onabort)
    /// [`IDBTransaction.onabort`](https://developer.mozilla.org/en-US/docs/Web/API/IDBTransaction/onabort)
    [[nodiscard]] jsbind::Any onabort() const;
    /// Setter of the `onabort` attribute.
    /// [`IDBTransaction.onabort`](https://developer.mozilla.org/en-US/docs/Web/API/IDBTransaction/onabort)
    void onabort(const jsbind::Any& value);
    /// [`IDBTransaction.oncomplete`](https://developer.mozilla.org/en-US/docs/Web/API/IDBTransaction/oncomplete)
    /// [`IDBTransaction.oncomplete`](https://developer.mozilla.org/en-US/docs/Web/API/IDBTransaction/oncomplete)
    [[nodiscard]] jsbind::Any oncomplete() const;
    /// Setter of the `oncomplete` attribute.
    /// [`IDBTransaction.oncomplete`](https://developer.mozilla.org/en-US/docs/Web/API/IDBTransaction/oncomplete)
    void oncomplete(const jsbind::Any& value);
    /// [`IDBTransaction.onerror`](https://developer.mozilla.org/en-US/docs/Web/API/IDBTransaction/onerror)
    /// [`IDBTransaction.onerror`](https://developer.mozilla.org/en-US/docs/Web/API/IDBTransaction/onerror)
    [[nodiscard]] jsbind::Any onerror() const;
    /// Setter of the `onerror` attribute.
    /// [`IDBTransaction.onerror`](https://developer.mozilla.org/en-US/docs/Web/API/IDBTransaction/onerror)
    void onerror(const jsbind::Any& value);
};

} // namespace webbind