#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "enums.hpp"

class DOMStringList;
class IDBDatabase;
class DOMException;
class IDBObjectStore;


/// The IDBTransaction class.
/// [`IDBTransaction`](https://developer.mozilla.org/en-US/docs/Web/API/IDBTransaction)
class IDBTransaction : public EventTarget {
    explicit IDBTransaction(Handle h) noexcept;

public:
    explicit IDBTransaction(const emlite::Val &val) noexcept;
    static IDBTransaction take_ownership(Handle h) noexcept;

    [[nodiscard]] IDBTransaction clone() const noexcept;
    /// Getter of the `objectStoreNames` attribute.
    /// [`IDBTransaction.objectStoreNames`](https://developer.mozilla.org/en-US/docs/Web/API/IDBTransaction/objectStoreNames)
    [[nodiscard]] DOMStringList objectStoreNames() const;
    /// Getter of the `mode` attribute.
    /// [`IDBTransaction.mode`](https://developer.mozilla.org/en-US/docs/Web/API/IDBTransaction/mode)
    [[nodiscard]] IDBTransactionMode mode() const;
    /// Getter of the `durability` attribute.
    /// [`IDBTransaction.durability`](https://developer.mozilla.org/en-US/docs/Web/API/IDBTransaction/durability)
    [[nodiscard]] IDBTransactionDurability durability() const;
    /// Getter of the `db` attribute.
    /// [`IDBTransaction.db`](https://developer.mozilla.org/en-US/docs/Web/API/IDBTransaction/db)
    [[nodiscard]] IDBDatabase db() const;
    /// Getter of the `error` attribute.
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
    /// Getter of the `onabort` attribute.
    /// [`IDBTransaction.onabort`](https://developer.mozilla.org/en-US/docs/Web/API/IDBTransaction/onabort)
    [[nodiscard]] jsbind::Any onabort() const;
    /// Setter of the `onabort` attribute.
    /// [`IDBTransaction.onabort`](https://developer.mozilla.org/en-US/docs/Web/API/IDBTransaction/onabort)
    void onabort(const jsbind::Any& value);
    /// Getter of the `oncomplete` attribute.
    /// [`IDBTransaction.oncomplete`](https://developer.mozilla.org/en-US/docs/Web/API/IDBTransaction/oncomplete)
    [[nodiscard]] jsbind::Any oncomplete() const;
    /// Setter of the `oncomplete` attribute.
    /// [`IDBTransaction.oncomplete`](https://developer.mozilla.org/en-US/docs/Web/API/IDBTransaction/oncomplete)
    void oncomplete(const jsbind::Any& value);
    /// Getter of the `onerror` attribute.
    /// [`IDBTransaction.onerror`](https://developer.mozilla.org/en-US/docs/Web/API/IDBTransaction/onerror)
    [[nodiscard]] jsbind::Any onerror() const;
    /// Setter of the `onerror` attribute.
    /// [`IDBTransaction.onerror`](https://developer.mozilla.org/en-US/docs/Web/API/IDBTransaction/onerror)
    void onerror(const jsbind::Any& value);
};

