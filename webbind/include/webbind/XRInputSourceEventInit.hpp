#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventInit.hpp"

namespace webbind {

class XRFrame;
class XRInputSource;

/// Dictionary type XRInputSourceEventInit
class XRInputSourceEventInit : public EventInit {
  explicit XRInputSourceEventInit(Handle h) noexcept;
public:
    static XRInputSourceEventInit take_ownership(Handle h) noexcept;
    explicit XRInputSourceEventInit(const emlite::Val &val) noexcept;
    XRInputSourceEventInit() noexcept;
    [[nodiscard]] XRInputSourceEventInit clone() const noexcept;
    /// Getter of the `frame` attribute.
    [[nodiscard]] XRFrame frame() const;
    /// Setter of the `frame` attribute.
    void frame(const XRFrame& value);
    /// Getter of the `inputSource` attribute.
    [[nodiscard]] XRInputSource inputSource() const;
    /// Setter of the `inputSource` attribute.
    void inputSource(const XRInputSource& value);
};

} // namespace webbind