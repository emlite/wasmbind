#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "ExtendableEventInit.hpp"

namespace webbind {

/// Dictionary type PeriodicSyncEventInit
/// [`PeriodicSyncEventInit`](https://developer.mozilla.org/en-US/docs/Web/API/PeriodicSyncEventInit)
class PeriodicSyncEventInit : public ExtendableEventInit {
  explicit PeriodicSyncEventInit(Handle h) noexcept;
public:
    static PeriodicSyncEventInit take_ownership(Handle h) noexcept;
    explicit PeriodicSyncEventInit(const emlite::Val &val) noexcept;
    PeriodicSyncEventInit() noexcept;
    [[nodiscard]] PeriodicSyncEventInit clone() const noexcept;
    [[nodiscard]] jsbind::String tag() const;
    void tag(const jsbind::String& value);
};

} // namespace webbind