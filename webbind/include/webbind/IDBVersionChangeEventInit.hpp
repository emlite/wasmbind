#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventInit.hpp"

namespace webbind {

/// Dictionary type IDBVersionChangeEventInit
class IDBVersionChangeEventInit : public EventInit {
  explicit IDBVersionChangeEventInit(Handle h) noexcept;
public:
    static IDBVersionChangeEventInit take_ownership(Handle h) noexcept;
    explicit IDBVersionChangeEventInit(const emlite::Val &val) noexcept;
    IDBVersionChangeEventInit() noexcept;
    [[nodiscard]] IDBVersionChangeEventInit clone() const noexcept;
    /// Getter of the `oldVersion` attribute.
    [[nodiscard]] long long oldVersion() const;
    /// Setter of the `oldVersion` attribute.
    void oldVersion(long long value);
    /// Getter of the `newVersion` attribute.
    [[nodiscard]] long long newVersion() const;
    /// Setter of the `newVersion` attribute.
    void newVersion(long long value);
};

} // namespace webbind