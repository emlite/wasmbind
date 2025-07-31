#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "enums.hpp"

class DOMStringList;
class IDBTransaction;
class IDBTransactionOptions;
class IDBObjectStore;
class IDBObjectStoreParameters;


class IDBTransactionOptions : public emlite::Val {
  explicit IDBTransactionOptions(Handle h) noexcept;
public:
    static IDBTransactionOptions take_ownership(Handle h) noexcept;
    explicit IDBTransactionOptions(const emlite::Val &val) noexcept;
    IDBTransactionOptions() noexcept;
    [[nodiscard]] IDBTransactionOptions clone() const noexcept;
    [[nodiscard]] IDBTransactionDurability durability() const;
    void durability(const IDBTransactionDurability& value);
};

class IDBObjectStoreParameters : public emlite::Val {
  explicit IDBObjectStoreParameters(Handle h) noexcept;
public:
    static IDBObjectStoreParameters take_ownership(Handle h) noexcept;
    explicit IDBObjectStoreParameters(const emlite::Val &val) noexcept;
    IDBObjectStoreParameters() noexcept;
    [[nodiscard]] IDBObjectStoreParameters clone() const noexcept;
    [[nodiscard]] jsbind::Any keyPath() const;
    void keyPath(const jsbind::Any& value);
    [[nodiscard]] bool autoIncrement() const;
    void autoIncrement(bool value);
};

/// The IDBDatabase class.
/// [`IDBDatabase`](https://developer.mozilla.org/en-US/docs/Web/API/IDBDatabase)
class IDBDatabase : public EventTarget {
    explicit IDBDatabase(Handle h) noexcept;

public:
    explicit IDBDatabase(const emlite::Val &val) noexcept;
    static IDBDatabase take_ownership(Handle h) noexcept;

    [[nodiscard]] IDBDatabase clone() const noexcept;
    /// Getter of the `name` attribute.
    /// [`IDBDatabase.name`](https://developer.mozilla.org/en-US/docs/Web/API/IDBDatabase/name)
    [[nodiscard]] jsbind::String name() const;
    /// Getter of the `version` attribute.
    /// [`IDBDatabase.version`](https://developer.mozilla.org/en-US/docs/Web/API/IDBDatabase/version)
    [[nodiscard]] long long version() const;
    /// Getter of the `objectStoreNames` attribute.
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
    /// Getter of the `onabort` attribute.
    /// [`IDBDatabase.onabort`](https://developer.mozilla.org/en-US/docs/Web/API/IDBDatabase/onabort)
    [[nodiscard]] jsbind::Any onabort() const;
    /// Setter of the `onabort` attribute.
    /// [`IDBDatabase.onabort`](https://developer.mozilla.org/en-US/docs/Web/API/IDBDatabase/onabort)
    void onabort(const jsbind::Any& value);
    /// Getter of the `onclose` attribute.
    /// [`IDBDatabase.onclose`](https://developer.mozilla.org/en-US/docs/Web/API/IDBDatabase/onclose)
    [[nodiscard]] jsbind::Any onclose() const;
    /// Setter of the `onclose` attribute.
    /// [`IDBDatabase.onclose`](https://developer.mozilla.org/en-US/docs/Web/API/IDBDatabase/onclose)
    void onclose(const jsbind::Any& value);
    /// Getter of the `onerror` attribute.
    /// [`IDBDatabase.onerror`](https://developer.mozilla.org/en-US/docs/Web/API/IDBDatabase/onerror)
    [[nodiscard]] jsbind::Any onerror() const;
    /// Setter of the `onerror` attribute.
    /// [`IDBDatabase.onerror`](https://developer.mozilla.org/en-US/docs/Web/API/IDBDatabase/onerror)
    void onerror(const jsbind::Any& value);
    /// Getter of the `onversionchange` attribute.
    /// [`IDBDatabase.onversionchange`](https://developer.mozilla.org/en-US/docs/Web/API/IDBDatabase/onversionchange)
    [[nodiscard]] jsbind::Any onversionchange() const;
    /// Setter of the `onversionchange` attribute.
    /// [`IDBDatabase.onversionchange`](https://developer.mozilla.org/en-US/docs/Web/API/IDBDatabase/onversionchange)
    void onversionchange(const jsbind::Any& value);
};

