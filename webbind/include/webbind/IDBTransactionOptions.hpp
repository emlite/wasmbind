#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type IDBTransactionOptions
class IDBTransactionOptions : public emlite::Val {
  explicit IDBTransactionOptions(Handle h) noexcept;
public:
    static IDBTransactionOptions take_ownership(Handle h) noexcept;
    explicit IDBTransactionOptions(const emlite::Val &val) noexcept;
    IDBTransactionOptions() noexcept;
    [[nodiscard]] IDBTransactionOptions clone() const noexcept;
    /// Getter of the `durability` attribute.
    [[nodiscard]] IDBTransactionDurability durability() const;
    /// Setter of the `durability` attribute.
    void durability(const IDBTransactionDurability& value);
};

} // namespace webbind