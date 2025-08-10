#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventInit.hpp"

namespace webbind {

class XRSession;

/// Dictionary type XRSessionEventInit
class XRSessionEventInit : public EventInit {
  explicit XRSessionEventInit(Handle h) noexcept;
public:
    static XRSessionEventInit take_ownership(Handle h) noexcept;
    explicit XRSessionEventInit(const emlite::Val &val) noexcept;
    XRSessionEventInit() noexcept;
    [[nodiscard]] XRSessionEventInit clone() const noexcept;
    /// Getter of the `session` attribute.
    [[nodiscard]] XRSession session() const;
    /// Setter of the `session` attribute.
    void session(const XRSession& value);
};

} // namespace webbind