#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "enums.hpp"

namespace webbind {

class IDBRequest;

/// Interface IDBCursor
/// [`IDBCursor`](https://developer.mozilla.org/en-US/docs/Web/API/IDBCursor)
class IDBCursor : public emlite::Val {
    explicit IDBCursor(Handle h) noexcept;
public:
    explicit IDBCursor(const emlite::Val &val) noexcept;
    static IDBCursor take_ownership(Handle h) noexcept;
    [[nodiscard]] IDBCursor clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `source` attribute.
    /// [`IDBCursor.source`](https://developer.mozilla.org/en-US/docs/Web/API/IDBCursor/source)
    [[nodiscard]] jsbind::Any source() const;
    /// Getter of the `direction` attribute.
    /// [`IDBCursor.direction`](https://developer.mozilla.org/en-US/docs/Web/API/IDBCursor/direction)
    [[nodiscard]] IDBCursorDirection direction() const;
    /// Getter of the `key` attribute.
    /// [`IDBCursor.key`](https://developer.mozilla.org/en-US/docs/Web/API/IDBCursor/key)
    [[nodiscard]] jsbind::Any key() const;
    /// Getter of the `primaryKey` attribute.
    /// [`IDBCursor.primaryKey`](https://developer.mozilla.org/en-US/docs/Web/API/IDBCursor/primaryKey)
    [[nodiscard]] jsbind::Any primaryKey() const;
    /// Getter of the `request` attribute.
    /// [`IDBCursor.request`](https://developer.mozilla.org/en-US/docs/Web/API/IDBCursor/request)
    [[nodiscard]] IDBRequest request() const;
    /// The advance method.
    /// [`IDBCursor.advance`](https://developer.mozilla.org/en-US/docs/Web/API/IDBCursor/advance)
    jsbind::Undefined advance(unsigned long count);
    /// The continue method.
    /// [`IDBCursor.continue`](https://developer.mozilla.org/en-US/docs/Web/API/IDBCursor/continue)
    jsbind::Undefined continue_();
    /// The continue method.
    /// [`IDBCursor.continue`](https://developer.mozilla.org/en-US/docs/Web/API/IDBCursor/continue)
    jsbind::Undefined continue_(const jsbind::Any& key);
    /// The continuePrimaryKey method.
    /// [`IDBCursor.continuePrimaryKey`](https://developer.mozilla.org/en-US/docs/Web/API/IDBCursor/continuePrimaryKey)
    jsbind::Undefined continuePrimaryKey(const jsbind::Any& key, const jsbind::Any& primaryKey);
    /// The update method.
    /// [`IDBCursor.update`](https://developer.mozilla.org/en-US/docs/Web/API/IDBCursor/update)
    IDBRequest update(const jsbind::Any& value);
    /// The delete method.
    /// [`IDBCursor.delete`](https://developer.mozilla.org/en-US/docs/Web/API/IDBCursor/delete)
    IDBRequest delete_();
};

} // namespace webbind