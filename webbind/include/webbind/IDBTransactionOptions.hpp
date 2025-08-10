#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type IDBTransactionOptions
/// [`IDBTransactionOptions`](https://developer.mozilla.org/en-US/docs/Web/API/IDBTransactionOptions)
class IDBTransactionOptions : public emlite::Val {
  explicit IDBTransactionOptions(Handle h) noexcept;
public:
    static IDBTransactionOptions take_ownership(Handle h) noexcept;
    explicit IDBTransactionOptions(const emlite::Val &val) noexcept;
    IDBTransactionOptions() noexcept;
    [[nodiscard]] IDBTransactionOptions clone() const noexcept;
    [[nodiscard]] IDBTransactionDurability durability() const;
    void durability(const IDBTransactionDurability& value);
};

} // namespace webbind