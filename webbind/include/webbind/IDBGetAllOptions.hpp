#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type IDBGetAllOptions
class IDBGetAllOptions : public emlite::Val {
  explicit IDBGetAllOptions(Handle h) noexcept;
public:
    static IDBGetAllOptions take_ownership(Handle h) noexcept;
    explicit IDBGetAllOptions(const emlite::Val &val) noexcept;
    IDBGetAllOptions() noexcept;
    [[nodiscard]] IDBGetAllOptions clone() const noexcept;
    /// Getter of the `query` attribute.
    [[nodiscard]] jsbind::Any query() const;
    /// Setter of the `query` attribute.
    void query(const jsbind::Any& value);
    /// Getter of the `count` attribute.
    [[nodiscard]] unsigned long count() const;
    /// Setter of the `count` attribute.
    void count(unsigned long value);
    /// Getter of the `direction` attribute.
    [[nodiscard]] IDBCursorDirection direction() const;
    /// Setter of the `direction` attribute.
    void direction(const IDBCursorDirection& value);
};

} // namespace webbind