#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class IDBObjectStore;
class IDBRequest;


class IDBIndex : public emlite::Val {
    explicit IDBIndex(Handle h) noexcept;

public:
    explicit IDBIndex(const emlite::Val &val) noexcept;
    static IDBIndex take_ownership(Handle h) noexcept;

    IDBIndex clone() const noexcept;
    jsbind::String name() const;
    void name(const jsbind::String& value);
    IDBObjectStore objectStore() const;
    jsbind::Any keyPath() const;
    bool multiEntry() const;
    bool unique() const;
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
};

