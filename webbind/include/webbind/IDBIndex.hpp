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
    jsbind::DOMString name() const;
    void name(const jsbind::DOMString& value);
    IDBObjectStore objectStore() const;
    jsbind::Any keyPath() const;
    bool multiEntry() const;
    bool unique() const;
    IDBRequest get(const jsbind::Any& query);
    IDBRequest getKey(const jsbind::Any& query);
    IDBRequest getAll(const jsbind::Any& query, unsigned long count);
    IDBRequest getAllKeys(const jsbind::Any& query, unsigned long count);
    IDBRequest count(const jsbind::Any& query);
    IDBRequest openCursor(const jsbind::Any& query, const IDBCursorDirection& direction);
    IDBRequest openKeyCursor(const jsbind::Any& query, const IDBCursorDirection& direction);
};

