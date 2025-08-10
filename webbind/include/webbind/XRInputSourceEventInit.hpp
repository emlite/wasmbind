#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventInit.hpp"

namespace webbind {

class XRFrame;
class XRInputSource;

/// Dictionary type XRInputSourceEventInit
/// [`XRInputSourceEventInit`](https://developer.mozilla.org/en-US/docs/Web/API/XRInputSourceEventInit)
class XRInputSourceEventInit : public EventInit {
  explicit XRInputSourceEventInit(Handle h) noexcept;
public:
    static XRInputSourceEventInit take_ownership(Handle h) noexcept;
    explicit XRInputSourceEventInit(const emlite::Val &val) noexcept;
    XRInputSourceEventInit() noexcept;
    [[nodiscard]] XRInputSourceEventInit clone() const noexcept;
    [[nodiscard]] XRFrame frame() const;
    void frame(const XRFrame& value);
    [[nodiscard]] XRInputSource inputSource() const;
    void inputSource(const XRInputSource& value);
};

} // namespace webbind