#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type IDBObjectStoreParameters
class IDBObjectStoreParameters : public emlite::Val {
  explicit IDBObjectStoreParameters(Handle h) noexcept;
public:
    static IDBObjectStoreParameters take_ownership(Handle h) noexcept;
    explicit IDBObjectStoreParameters(const emlite::Val &val) noexcept;
    IDBObjectStoreParameters() noexcept;
    [[nodiscard]] IDBObjectStoreParameters clone() const noexcept;
    /// Getter of the `keyPath` attribute.
    [[nodiscard]] jsbind::Any keyPath() const;
    /// Setter of the `keyPath` attribute.
    void keyPath(const jsbind::Any& value);
    /// Getter of the `autoIncrement` attribute.
    [[nodiscard]] bool autoIncrement() const;
    /// Setter of the `autoIncrement` attribute.
    void autoIncrement(bool value);
};

} // namespace webbind