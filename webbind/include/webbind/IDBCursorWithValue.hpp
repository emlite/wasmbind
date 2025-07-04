#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "IDBCursor.hpp"
#include "enums.hpp"


class IDBCursorWithValue : public IDBCursor {
    explicit IDBCursorWithValue(Handle h) noexcept;

public:
    explicit IDBCursorWithValue(const emlite::Val &val) noexcept;
    static IDBCursorWithValue take_ownership(Handle h) noexcept;

    IDBCursorWithValue clone() const noexcept;
    jsbind::Any value() const;
};

