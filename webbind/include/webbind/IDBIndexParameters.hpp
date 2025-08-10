#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type IDBIndexParameters
class IDBIndexParameters : public emlite::Val {
  explicit IDBIndexParameters(Handle h) noexcept;
public:
    static IDBIndexParameters take_ownership(Handle h) noexcept;
    explicit IDBIndexParameters(const emlite::Val &val) noexcept;
    IDBIndexParameters() noexcept;
    [[nodiscard]] IDBIndexParameters clone() const noexcept;
    /// Getter of the `unique` attribute.
    [[nodiscard]] bool unique() const;
    /// Setter of the `unique` attribute.
    void unique(bool value);
    /// Getter of the `multiEntry` attribute.
    [[nodiscard]] bool multiEntry() const;
    /// Setter of the `multiEntry` attribute.
    void multiEntry(bool value);
};

} // namespace webbind