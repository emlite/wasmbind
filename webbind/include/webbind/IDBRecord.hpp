#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Interface IDBRecord
/// [`IDBRecord`](https://developer.mozilla.org/en-US/docs/Web/API/IDBRecord)
class IDBRecord : public emlite::Val {
    explicit IDBRecord(Handle h) noexcept;
public:
    explicit IDBRecord(const emlite::Val &val) noexcept;
    static IDBRecord take_ownership(Handle h) noexcept;
    [[nodiscard]] IDBRecord clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`IDBRecord.key`](https://developer.mozilla.org/en-US/docs/Web/API/IDBRecord/key)
    /// [`IDBRecord.key`](https://developer.mozilla.org/en-US/docs/Web/API/IDBRecord/key)
    [[nodiscard]] jsbind::Any key() const;
    /// [`IDBRecord.primaryKey`](https://developer.mozilla.org/en-US/docs/Web/API/IDBRecord/primaryKey)
    /// [`IDBRecord.primaryKey`](https://developer.mozilla.org/en-US/docs/Web/API/IDBRecord/primaryKey)
    [[nodiscard]] jsbind::Any primaryKey() const;
    /// [`IDBRecord.value`](https://developer.mozilla.org/en-US/docs/Web/API/IDBRecord/value)
    /// [`IDBRecord.value`](https://developer.mozilla.org/en-US/docs/Web/API/IDBRecord/value)
    [[nodiscard]] jsbind::Any value() const;
};

} // namespace webbind