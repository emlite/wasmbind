#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type IDBDatabaseInfo
class IDBDatabaseInfo : public emlite::Val {
  explicit IDBDatabaseInfo(Handle h) noexcept;
public:
    static IDBDatabaseInfo take_ownership(Handle h) noexcept;
    explicit IDBDatabaseInfo(const emlite::Val &val) noexcept;
    IDBDatabaseInfo() noexcept;
    [[nodiscard]] IDBDatabaseInfo clone() const noexcept;
    /// Getter of the `name` attribute.
    [[nodiscard]] jsbind::String name() const;
    /// Setter of the `name` attribute.
    void name(const jsbind::String& value);
    /// Getter of the `version` attribute.
    [[nodiscard]] long long version() const;
    /// Setter of the `version` attribute.
    void version(long long value);
};

} // namespace webbind