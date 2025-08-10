#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "ExtendableEventInit.hpp"

namespace webbind {

/// Dictionary type SyncEventInit
/// [`SyncEventInit`](https://developer.mozilla.org/en-US/docs/Web/API/SyncEventInit)
class SyncEventInit : public ExtendableEventInit {
  explicit SyncEventInit(Handle h) noexcept;
public:
    static SyncEventInit take_ownership(Handle h) noexcept;
    explicit SyncEventInit(const emlite::Val &val) noexcept;
    SyncEventInit() noexcept;
    [[nodiscard]] SyncEventInit clone() const noexcept;
    [[nodiscard]] jsbind::String tag() const;
    void tag(const jsbind::String& value);
    [[nodiscard]] bool lastChance() const;
    void lastChance(bool value);
};

} // namespace webbind