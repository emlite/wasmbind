#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type IDBDatabaseInfo
/// [`IDBDatabaseInfo`](https://developer.mozilla.org/en-US/docs/Web/API/IDBDatabaseInfo)
class IDBDatabaseInfo : public emlite::Val {
  explicit IDBDatabaseInfo(Handle h) noexcept;
public:
    static IDBDatabaseInfo take_ownership(Handle h) noexcept;
    explicit IDBDatabaseInfo(const emlite::Val &val) noexcept;
    IDBDatabaseInfo() noexcept;
    [[nodiscard]] IDBDatabaseInfo clone() const noexcept;
    [[nodiscard]] jsbind::String name() const;
    void name(const jsbind::String& value);
    [[nodiscard]] long long version() const;
    void version(long long value);
};

} // namespace webbind