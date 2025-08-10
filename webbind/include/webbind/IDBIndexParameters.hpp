#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type IDBIndexParameters
/// [`IDBIndexParameters`](https://developer.mozilla.org/en-US/docs/Web/API/IDBIndexParameters)
class IDBIndexParameters : public emlite::Val {
  explicit IDBIndexParameters(Handle h) noexcept;
public:
    static IDBIndexParameters take_ownership(Handle h) noexcept;
    explicit IDBIndexParameters(const emlite::Val &val) noexcept;
    IDBIndexParameters() noexcept;
    [[nodiscard]] IDBIndexParameters clone() const noexcept;
    [[nodiscard]] bool unique() const;
    void unique(bool value);
    [[nodiscard]] bool multiEntry() const;
    void multiEntry(bool value);
};

} // namespace webbind