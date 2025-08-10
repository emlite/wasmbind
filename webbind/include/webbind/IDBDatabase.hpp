#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventTarget.hpp"
#include "IDBTransactionOptions.hpp"
#include "IDBObjectStoreParameters.hpp"
#include "enums.hpp"

namespace webbind {

class DOMStringList;
class IDBTransaction;
class IDBObjectStore;

/// Interface IDBDatabase
/// [`IDBDatabase`](https://developer.mozilla.org/en-US/docs/Web/API/IDBDatabase)
class IDBDatabase : public EventTarget {
    explicit IDBDatabase(Handle h) noexcept;
public:
    explicit IDBDatabase(const emlite::Val &val) noexcept;
    static IDBDatabase take_ownership(Handle h) noexcept;
    [[nodiscard]] IDBDatabase clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`IDBDatabase.name`](https://developer.mozilla.org/en-US/docs/Web/API/IDBDatabase/name)
    /// [`IDBDatabase.name`](https://developer.mozilla.org/en-US/docs/Web/API/IDBDatabase/name)
    [[nodiscard]] jsbind::String name() const;
    /// [`IDBDatabase.version`](https://developer.mozilla.org/en-US/docs/Web/API/IDBDatabase/version)
    /// [`IDBDatabase.version`](https://developer.mozilla.org/en-US/docs/Web/API/IDBDatabase/version)
    [[nodiscard]] long long version() const;
    /// [`IDBDatabase.objectStoreNames`](https://developer.mozilla.org/en-US/docs/Web/API/IDBDatabase/objectStoreNames)
    /// [`IDBDatabase.objectStoreNames`](https://developer.mozilla.org/en-US/docs/Web/API/IDBDatabase/objectStoreNames)
    [[nodiscard]] DOMStringList objectStoreNames() const;
    /// The transaction method.
    /// [`IDBDatabase.transaction`](https://developer.mozilla.org/en-US/docs/Web/API/IDBDatabase/transaction)
    IDBTransaction transaction(const jsbind::Any& storeNames);
    /// The transaction method.
    /// [`IDBDatabase.transaction`](https://developer.mozilla.org/en-US/docs/Web/API/IDBDatabase/transaction)
    IDBTransaction transaction(const jsbind::Any& storeNames, const IDBTransactionMode& mode);
    /// The transaction method.
    /// [`IDBDatabase.transaction`](https://developer.mozilla.org/en-US/docs/Web/API/IDBDatabase/transaction)
    IDBTransaction transaction(const jsbind::Any& storeNames, const IDBTransactionMode& mode, const IDBTransactionOptions& options);
    /// The close method.
    /// [`IDBDatabase.close`](https://developer.mozilla.org/en-US/docs/Web/API/IDBDatabase/close)
    jsbind::Undefined close();
    /// The createObjectStore method.
    /// [`IDBDatabase.createObjectStore`](https://developer.mozilla.org/en-US/docs/Web/API/IDBDatabase/createObjectStore)
    IDBObjectStore createObjectStore(const jsbind::String& name);
    /// The createObjectStore method.
    /// [`IDBDatabase.createObjectStore`](https://developer.mozilla.org/en-US/docs/Web/API/IDBDatabase/createObjectStore)
    IDBObjectStore createObjectStore(const jsbind::String& name, const IDBObjectStoreParameters& options);
    /// The deleteObjectStore method.
    /// [`IDBDatabase.deleteObjectStore`](https://developer.mozilla.org/en-US/docs/Web/API/IDBDatabase/deleteObjectStore)
    jsbind::Undefined deleteObjectStore(const jsbind::String& name);
    /// [`IDBDatabase.onabort`](https://developer.mozilla.org/en-US/docs/Web/API/IDBDatabase/onabort)
    /// [`IDBDatabase.onabort`](https://developer.mozilla.org/en-US/docs/Web/API/IDBDatabase/onabort)
    [[nodiscard]] jsbind::Any onabort() const;
    /// Setter of the `onabort` attribute.
    /// [`IDBDatabase.onabort`](https://developer.mozilla.org/en-US/docs/Web/API/IDBDatabase/onabort)
    void onabort(const jsbind::Any& value);
    /// [`IDBDatabase.onclose`](https://developer.mozilla.org/en-US/docs/Web/API/IDBDatabase/onclose)
    /// [`IDBDatabase.onclose`](https://developer.mozilla.org/en-US/docs/Web/API/IDBDatabase/onclose)
    [[nodiscard]] jsbind::Any onclose() const;
    /// Setter of the `onclose` attribute.
    /// [`IDBDatabase.onclose`](https://developer.mozilla.org/en-US/docs/Web/API/IDBDatabase/onclose)
    void onclose(const jsbind::Any& value);
    /// [`IDBDatabase.onerror`](https://developer.mozilla.org/en-US/docs/Web/API/IDBDatabase/onerror)
    /// [`IDBDatabase.onerror`](https://developer.mozilla.org/en-US/docs/Web/API/IDBDatabase/onerror)
    [[nodiscard]] jsbind::Any onerror() const;
    /// Setter of the `onerror` attribute.
    /// [`IDBDatabase.onerror`](https://developer.mozilla.org/en-US/docs/Web/API/IDBDatabase/onerror)
    void onerror(const jsbind::Any& value);
    /// [`IDBDatabase.onversionchange`](https://developer.mozilla.org/en-US/docs/Web/API/IDBDatabase/onversionchange)
    /// [`IDBDatabase.onversionchange`](https://developer.mozilla.org/en-US/docs/Web/API/IDBDatabase/onversionchange)
    [[nodiscard]] jsbind::Any onversionchange() const;
    /// Setter of the `onversionchange` attribute.
    /// [`IDBDatabase.onversionchange`](https://developer.mozilla.org/en-US/docs/Web/API/IDBDatabase/onversionchange)
    void onversionchange(const jsbind::Any& value);
};

} // namespace webbind