#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class DOMStringList;
class IDBTransaction;
class IDBRequest;
class IDBIndex;
class IDBIndexParameters;


class IDBIndexParameters : public emlite::Val {
  explicit IDBIndexParameters(Handle h) noexcept;
public:
    static IDBIndexParameters take_ownership(Handle h) noexcept;
    explicit IDBIndexParameters(const emlite::Val &val) noexcept;
    IDBIndexParameters() noexcept;
    [[nodiscard]] IDBIndexParameters clone() const noexcept;
    [[nodiscard]] bool unique() const;
    void unique(bool value);
    [[nodiscard]] bool multiEntry() const;
    void multiEntry(bool value);
};

/// The IDBObjectStore class.
/// [`IDBObjectStore`](https://developer.mozilla.org/en-US/docs/Web/API/IDBObjectStore)
class IDBObjectStore : public emlite::Val {
    explicit IDBObjectStore(Handle h) noexcept;

public:
    explicit IDBObjectStore(const emlite::Val &val) noexcept;
    static IDBObjectStore take_ownership(Handle h) noexcept;

    [[nodiscard]] IDBObjectStore clone() const noexcept;
    /// Getter of the `name` attribute.
    /// [`IDBObjectStore.name`](https://developer.mozilla.org/en-US/docs/Web/API/IDBObjectStore/name)
    [[nodiscard]] jsbind::String name() const;
    /// Setter of the `name` attribute.
    /// [`IDBObjectStore.name`](https://developer.mozilla.org/en-US/docs/Web/API/IDBObjectStore/name)
    void name(const jsbind::String& value);
    /// Getter of the `keyPath` attribute.
    /// [`IDBObjectStore.keyPath`](https://developer.mozilla.org/en-US/docs/Web/API/IDBObjectStore/keyPath)
    [[nodiscard]] jsbind::Any keyPath() const;
    /// Getter of the `indexNames` attribute.
    /// [`IDBObjectStore.indexNames`](https://developer.mozilla.org/en-US/docs/Web/API/IDBObjectStore/indexNames)
    [[nodiscard]] DOMStringList indexNames() const;
    /// Getter of the `transaction` attribute.
    /// [`IDBObjectStore.transaction`](https://developer.mozilla.org/en-US/docs/Web/API/IDBObjectStore/transaction)
    [[nodiscard]] IDBTransaction transaction() const;
    /// Getter of the `autoIncrement` attribute.
    /// [`IDBObjectStore.autoIncrement`](https://developer.mozilla.org/en-US/docs/Web/API/IDBObjectStore/autoIncrement)
    [[nodiscard]] bool autoIncrement() const;
    /// The put method.
    /// [`IDBObjectStore.put`](https://developer.mozilla.org/en-US/docs/Web/API/IDBObjectStore/put)
    IDBRequest put(const jsbind::Any& value);
    /// The put method.
    /// [`IDBObjectStore.put`](https://developer.mozilla.org/en-US/docs/Web/API/IDBObjectStore/put)
    IDBRequest put(const jsbind::Any& value, const jsbind::Any& key);
    /// The add method.
    /// [`IDBObjectStore.add`](https://developer.mozilla.org/en-US/docs/Web/API/IDBObjectStore/add)
    IDBRequest add(const jsbind::Any& value);
    /// The add method.
    /// [`IDBObjectStore.add`](https://developer.mozilla.org/en-US/docs/Web/API/IDBObjectStore/add)
    IDBRequest add(const jsbind::Any& value, const jsbind::Any& key);
    /// The delete method.
    /// [`IDBObjectStore.delete`](https://developer.mozilla.org/en-US/docs/Web/API/IDBObjectStore/delete)
    IDBRequest delete_(const jsbind::Any& query);
    /// The clear method.
    /// [`IDBObjectStore.clear`](https://developer.mozilla.org/en-US/docs/Web/API/IDBObjectStore/clear)
    IDBRequest clear();
    /// The get method.
    /// [`IDBObjectStore.get`](https://developer.mozilla.org/en-US/docs/Web/API/IDBObjectStore/get)
    IDBRequest get(const jsbind::Any& query);
    /// The getKey method.
    /// [`IDBObjectStore.getKey`](https://developer.mozilla.org/en-US/docs/Web/API/IDBObjectStore/getKey)
    IDBRequest getKey(const jsbind::Any& query);
    /// The getAll method.
    /// [`IDBObjectStore.getAll`](https://developer.mozilla.org/en-US/docs/Web/API/IDBObjectStore/getAll)
    IDBRequest getAll();
    /// The getAll method.
    /// [`IDBObjectStore.getAll`](https://developer.mozilla.org/en-US/docs/Web/API/IDBObjectStore/getAll)
    IDBRequest getAll(const jsbind::Any& query);
    /// The getAll method.
    /// [`IDBObjectStore.getAll`](https://developer.mozilla.org/en-US/docs/Web/API/IDBObjectStore/getAll)
    IDBRequest getAll(const jsbind::Any& query, unsigned long count);
    /// The getAllKeys method.
    /// [`IDBObjectStore.getAllKeys`](https://developer.mozilla.org/en-US/docs/Web/API/IDBObjectStore/getAllKeys)
    IDBRequest getAllKeys();
    /// The getAllKeys method.
    /// [`IDBObjectStore.getAllKeys`](https://developer.mozilla.org/en-US/docs/Web/API/IDBObjectStore/getAllKeys)
    IDBRequest getAllKeys(const jsbind::Any& query);
    /// The getAllKeys method.
    /// [`IDBObjectStore.getAllKeys`](https://developer.mozilla.org/en-US/docs/Web/API/IDBObjectStore/getAllKeys)
    IDBRequest getAllKeys(const jsbind::Any& query, unsigned long count);
    /// The count method.
    /// [`IDBObjectStore.count`](https://developer.mozilla.org/en-US/docs/Web/API/IDBObjectStore/count)
    IDBRequest count();
    /// The count method.
    /// [`IDBObjectStore.count`](https://developer.mozilla.org/en-US/docs/Web/API/IDBObjectStore/count)
    IDBRequest count(const jsbind::Any& query);
    /// The openCursor method.
    /// [`IDBObjectStore.openCursor`](https://developer.mozilla.org/en-US/docs/Web/API/IDBObjectStore/openCursor)
    IDBRequest openCursor();
    /// The openCursor method.
    /// [`IDBObjectStore.openCursor`](https://developer.mozilla.org/en-US/docs/Web/API/IDBObjectStore/openCursor)
    IDBRequest openCursor(const jsbind::Any& query);
    /// The openCursor method.
    /// [`IDBObjectStore.openCursor`](https://developer.mozilla.org/en-US/docs/Web/API/IDBObjectStore/openCursor)
    IDBRequest openCursor(const jsbind::Any& query, const IDBCursorDirection& direction);
    /// The openKeyCursor method.
    /// [`IDBObjectStore.openKeyCursor`](https://developer.mozilla.org/en-US/docs/Web/API/IDBObjectStore/openKeyCursor)
    IDBRequest openKeyCursor();
    /// The openKeyCursor method.
    /// [`IDBObjectStore.openKeyCursor`](https://developer.mozilla.org/en-US/docs/Web/API/IDBObjectStore/openKeyCursor)
    IDBRequest openKeyCursor(const jsbind::Any& query);
    /// The openKeyCursor method.
    /// [`IDBObjectStore.openKeyCursor`](https://developer.mozilla.org/en-US/docs/Web/API/IDBObjectStore/openKeyCursor)
    IDBRequest openKeyCursor(const jsbind::Any& query, const IDBCursorDirection& direction);
    /// The index method.
    /// [`IDBObjectStore.index`](https://developer.mozilla.org/en-US/docs/Web/API/IDBObjectStore/index)
    IDBIndex index(const jsbind::String& name);
    /// The createIndex method.
    /// [`IDBObjectStore.createIndex`](https://developer.mozilla.org/en-US/docs/Web/API/IDBObjectStore/createIndex)
    IDBIndex createIndex(const jsbind::String& name, const jsbind::Any& keyPath);
    /// The createIndex method.
    /// [`IDBObjectStore.createIndex`](https://developer.mozilla.org/en-US/docs/Web/API/IDBObjectStore/createIndex)
    IDBIndex createIndex(const jsbind::String& name, const jsbind::Any& keyPath, const IDBIndexParameters& options);
    /// The deleteIndex method.
    /// [`IDBObjectStore.deleteIndex`](https://developer.mozilla.org/en-US/docs/Web/API/IDBObjectStore/deleteIndex)
    jsbind::Undefined deleteIndex(const jsbind::String& name);
};

