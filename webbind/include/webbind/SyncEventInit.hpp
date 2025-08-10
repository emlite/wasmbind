#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "ExtendableEventInit.hpp"

namespace webbind {

/// Dictionary type SyncEventInit
class SyncEventInit : public ExtendableEventInit {
  explicit SyncEventInit(Handle h) noexcept;
public:
    static SyncEventInit take_ownership(Handle h) noexcept;
    explicit SyncEventInit(const emlite::Val &val) noexcept;
    SyncEventInit() noexcept;
    [[nodiscard]] SyncEventInit clone() const noexcept;
    /// Getter of the `tag` attribute.
    [[nodiscard]] jsbind::String tag() const;
    /// Setter of the `tag` attribute.
    void tag(const jsbind::String& value);
    /// Getter of the `lastChance` attribute.
    [[nodiscard]] bool lastChance() const;
    /// Setter of the `lastChance` attribute.
    void lastChance(bool value);
};

} // namespace webbind