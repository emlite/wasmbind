#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class XRSpace;

/// Dictionary type XRMediaLayerInit
/// [`XRMediaLayerInit`](https://developer.mozilla.org/en-US/docs/Web/API/XRMediaLayerInit)
class XRMediaLayerInit : public emlite::Val {
  explicit XRMediaLayerInit(Handle h) noexcept;
public:
    static XRMediaLayerInit take_ownership(Handle h) noexcept;
    explicit XRMediaLayerInit(const emlite::Val &val) noexcept;
    XRMediaLayerInit() noexcept;
    [[nodiscard]] XRMediaLayerInit clone() const noexcept;
    [[nodiscard]] XRSpace space() const;
    void space(const XRSpace& value);
    [[nodiscard]] XRLayerLayout layout() const;
    void layout(const XRLayerLayout& value);
    [[nodiscard]] bool invertStereo() const;
    void invertStereo(bool value);
};

} // namespace webbind