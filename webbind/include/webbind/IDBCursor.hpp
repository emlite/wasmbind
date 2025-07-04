#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class IDBRequest;


class IDBCursor : public emlite::Val {
    explicit IDBCursor(Handle h) noexcept;

public:
    explicit IDBCursor(const emlite::Val &val) noexcept;
    static IDBCursor take_ownership(Handle h) noexcept;

    IDBCursor clone() const noexcept;
    jsbind::Any source() const;
    IDBCursorDirection direction() const;
    jsbind::Any key() const;
    jsbind::Any primaryKey() const;
    IDBRequest request() const;
    jsbind::Undefined advance(unsigned long count);
    jsbind::Undefined continue_(const jsbind::Any& key);
    jsbind::Undefined continuePrimaryKey(const jsbind::Any& key, const jsbind::Any& primaryKey);
    IDBRequest update(const jsbind::Any& value);
    IDBRequest delete_();
};

