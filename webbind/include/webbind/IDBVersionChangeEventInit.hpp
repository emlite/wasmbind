#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventInit.hpp"

namespace webbind {

/// Dictionary type IDBVersionChangeEventInit
/// [`IDBVersionChangeEventInit`](https://developer.mozilla.org/en-US/docs/Web/API/IDBVersionChangeEventInit)
class IDBVersionChangeEventInit : public EventInit {
  explicit IDBVersionChangeEventInit(Handle h) noexcept;
public:
    static IDBVersionChangeEventInit take_ownership(Handle h) noexcept;
    explicit IDBVersionChangeEventInit(const emlite::Val &val) noexcept;
    IDBVersionChangeEventInit() noexcept;
    [[nodiscard]] IDBVersionChangeEventInit clone() const noexcept;
    [[nodiscard]] long long oldVersion() const;
    void oldVersion(long long value);
    [[nodiscard]] long long newVersion() const;
    void newVersion(long long value);
};

} // namespace webbind