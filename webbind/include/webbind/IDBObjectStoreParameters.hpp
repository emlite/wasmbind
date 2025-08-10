#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type IDBObjectStoreParameters
/// [`IDBObjectStoreParameters`](https://developer.mozilla.org/en-US/docs/Web/API/IDBObjectStoreParameters)
class IDBObjectStoreParameters : public emlite::Val {
  explicit IDBObjectStoreParameters(Handle h) noexcept;
public:
    static IDBObjectStoreParameters take_ownership(Handle h) noexcept;
    explicit IDBObjectStoreParameters(const emlite::Val &val) noexcept;
    IDBObjectStoreParameters() noexcept;
    [[nodiscard]] IDBObjectStoreParameters clone() const noexcept;
    [[nodiscard]] jsbind::Any keyPath() const;
    void keyPath(const jsbind::Any& value);
    [[nodiscard]] bool autoIncrement() const;
    void autoIncrement(bool value);
};

} // namespace webbind