#include "webbind/IDBCursorWithValue.hpp"

namespace webbind {

IDBCursorWithValue IDBCursorWithValue::take_ownership(Handle h) noexcept {
        return IDBCursorWithValue(h);
    }
IDBCursorWithValue IDBCursorWithValue::clone() const noexcept { return *this; }
emlite::Val IDBCursorWithValue::instance() noexcept { return emlite::Val::global("IDBCursorWithValue"); }
IDBCursorWithValue::IDBCursorWithValue(Handle h) noexcept : IDBCursor(emlite::Val::take_ownership(h)) {}
IDBCursorWithValue::IDBCursorWithValue(const emlite::Val &val) noexcept: IDBCursor(val) {}

jsbind::Any IDBCursorWithValue::value() const {
    return IDBCursor::get("value").as<jsbind::Any>();
}


} // namespace webbind