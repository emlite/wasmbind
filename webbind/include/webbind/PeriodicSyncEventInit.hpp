#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "ExtendableEventInit.hpp"

namespace webbind {

/// Dictionary type PeriodicSyncEventInit
class PeriodicSyncEventInit : public ExtendableEventInit {
  explicit PeriodicSyncEventInit(Handle h) noexcept;
public:
    static PeriodicSyncEventInit take_ownership(Handle h) noexcept;
    explicit PeriodicSyncEventInit(const emlite::Val &val) noexcept;
    PeriodicSyncEventInit() noexcept;
    [[nodiscard]] PeriodicSyncEventInit clone() const noexcept;
    /// Getter of the `tag` attribute.
    [[nodiscard]] jsbind::String tag() const;
    /// Setter of the `tag` attribute.
    void tag(const jsbind::String& value);
};

} // namespace webbind