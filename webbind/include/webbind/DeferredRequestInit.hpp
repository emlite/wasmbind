#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "RequestInit.hpp"

namespace webbind {

/// Dictionary type DeferredRequestInit
class DeferredRequestInit : public RequestInit {
  explicit DeferredRequestInit(Handle h) noexcept;
public:
    static DeferredRequestInit take_ownership(Handle h) noexcept;
    explicit DeferredRequestInit(const emlite::Val &val) noexcept;
    DeferredRequestInit() noexcept;
    [[nodiscard]] DeferredRequestInit clone() const noexcept;
    /// Getter of the `activateAfter` attribute.
    [[nodiscard]] jsbind::Any activateAfter() const;
    /// Setter of the `activateAfter` attribute.
    void activateAfter(const jsbind::Any& value);
};

} // namespace webbind