#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class Element;

/// Dictionary type XRDOMOverlayInit
class XRDOMOverlayInit : public emlite::Val {
  explicit XRDOMOverlayInit(Handle h) noexcept;
public:
    static XRDOMOverlayInit take_ownership(Handle h) noexcept;
    explicit XRDOMOverlayInit(const emlite::Val &val) noexcept;
    XRDOMOverlayInit() noexcept;
    [[nodiscard]] XRDOMOverlayInit clone() const noexcept;
    /// Getter of the `root` attribute.
    [[nodiscard]] Element root() const;
    /// Setter of the `root` attribute.
    void root(const Element& value);
};

} // namespace webbind