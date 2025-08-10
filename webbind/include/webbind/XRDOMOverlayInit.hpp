#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class Element;

/// Dictionary type XRDOMOverlayInit
/// [`XRDOMOverlayInit`](https://developer.mozilla.org/en-US/docs/Web/API/XRDOMOverlayInit)
class XRDOMOverlayInit : public emlite::Val {
  explicit XRDOMOverlayInit(Handle h) noexcept;
public:
    static XRDOMOverlayInit take_ownership(Handle h) noexcept;
    explicit XRDOMOverlayInit(const emlite::Val &val) noexcept;
    XRDOMOverlayInit() noexcept;
    [[nodiscard]] XRDOMOverlayInit clone() const noexcept;
    [[nodiscard]] Element root() const;
    void root(const Element& value);
};

} // namespace webbind