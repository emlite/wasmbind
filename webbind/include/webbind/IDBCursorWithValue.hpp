#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "IDBCursor.hpp"
#include "enums.hpp"


/// The IDBCursorWithValue class.
/// [`IDBCursorWithValue`](https://developer.mozilla.org/en-US/docs/Web/API/IDBCursorWithValue)
class IDBCursorWithValue : public IDBCursor {
    explicit IDBCursorWithValue(Handle h) noexcept;

public:
    explicit IDBCursorWithValue(const emlite::Val &val) noexcept;
    static IDBCursorWithValue take_ownership(Handle h) noexcept;

    [[nodiscard]] IDBCursorWithValue clone() const noexcept;
    /// Getter of the `value` attribute.
    /// [`IDBCursorWithValue.value`](https://developer.mozilla.org/en-US/docs/Web/API/IDBCursorWithValue/value)
    [[nodiscard]] jsbind::Any value() const;
};

