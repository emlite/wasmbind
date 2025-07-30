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
    IDBIndexParameters clone() const noexcept;
    bool unique() const;
    void unique(bool value);
    bool multiEntry() const;
    void multiEntry(bool value);
};

class IDBObjectStore : public emlite::Val {
    explicit IDBObjectStore(Handle h) noexcept;

public:
    explicit IDBObjectStore(const emlite::Val &val) noexcept;
    static IDBObjectStore take_ownership(Handle h) noexcept;

    IDBObjectStore clone() const noexcept;
    jsbind::String name() const;
    void name(const jsbind::String& value);
    jsbind::Any keyPath() const;
    DOMStringList indexNames() const;
    IDBTransaction transaction() const;
    bool autoIncrement() const;
    IDBRequest put(const jsbind::Any& value);
    IDBRequest put(const jsbind::Any& value, const jsbind::Any& key);
    IDBRequest add(const jsbind::Any& value);
    IDBRequest add(const jsbind::Any& value, const jsbind::Any& key);
    IDBRequest delete_(const jsbind::Any& query);
    IDBRequest clear();
    IDBRequest get(const jsbind::Any& query);
    IDBRequest getKey(const jsbind::Any& query);
    IDBRequest getAll();
    IDBRequest getAll(const jsbind::Any& query);
    IDBRequest getAll(const jsbind::Any& query, unsigned long count);
    IDBRequest getAllKeys();
    IDBRequest getAllKeys(const jsbind::Any& query);
    IDBRequest getAllKeys(const jsbind::Any& query, unsigned long count);
    IDBRequest count();
    IDBRequest count(const jsbind::Any& query);
    IDBRequest openCursor();
    IDBRequest openCursor(const jsbind::Any& query);
    IDBRequest openCursor(const jsbind::Any& query, const IDBCursorDirection& direction);
    IDBRequest openKeyCursor();
    IDBRequest openKeyCursor(const jsbind::Any& query);
    IDBRequest openKeyCursor(const jsbind::Any& query, const IDBCursorDirection& direction);
    IDBIndex index(const jsbind::String& name);
    IDBIndex createIndex(const jsbind::String& name, const jsbind::Any& keyPath);
    IDBIndex createIndex(const jsbind::String& name, const jsbind::Any& keyPath, const IDBIndexParameters& options);
    jsbind::Undefined deleteIndex(const jsbind::String& name);
};

