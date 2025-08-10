#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventInit.hpp"

namespace webbind {

class XRSession;

/// Dictionary type XRSessionEventInit
/// [`XRSessionEventInit`](https://developer.mozilla.org/en-US/docs/Web/API/XRSessionEventInit)
class XRSessionEventInit : public EventInit {
  explicit XRSessionEventInit(Handle h) noexcept;
public:
    static XRSessionEventInit take_ownership(Handle h) noexcept;
    explicit XRSessionEventInit(const emlite::Val &val) noexcept;
    XRSessionEventInit() noexcept;
    [[nodiscard]] XRSessionEventInit clone() const noexcept;
    [[nodiscard]] XRSession session() const;
    void session(const XRSession& value);
};

} // namespace webbind