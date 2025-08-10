#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventInit.hpp"

namespace webbind {

class XRLayer;

/// Dictionary type XRLayerEventInit
/// [`XRLayerEventInit`](https://developer.mozilla.org/en-US/docs/Web/API/XRLayerEventInit)
class XRLayerEventInit : public EventInit {
  explicit XRLayerEventInit(Handle h) noexcept;
public:
    static XRLayerEventInit take_ownership(Handle h) noexcept;
    explicit XRLayerEventInit(const emlite::Val &val) noexcept;
    XRLayerEventInit() noexcept;
    [[nodiscard]] XRLayerEventInit clone() const noexcept;
    [[nodiscard]] XRLayer layer() const;
    void layer(const XRLayer& value);
};

} // namespace webbind