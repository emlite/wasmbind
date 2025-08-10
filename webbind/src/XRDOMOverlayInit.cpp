#include "webbind/XRDOMOverlayInit.hpp"
#include "webbind/Element.hpp"

using emlite::Val;
namespace webbind {

XRDOMOverlayInit::XRDOMOverlayInit(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
XRDOMOverlayInit XRDOMOverlayInit::take_ownership(Handle h) noexcept {
        return XRDOMOverlayInit(h);
    }
XRDOMOverlayInit::XRDOMOverlayInit(const emlite::Val &val) noexcept: emlite::Val(val) {}
XRDOMOverlayInit::XRDOMOverlayInit() noexcept: emlite::Val(emlite::Val::object()) {}
XRDOMOverlayInit XRDOMOverlayInit::clone() const noexcept { return *this; }

Element XRDOMOverlayInit::root() const {
    return emlite::Val::get("root").as<Element>();
}

void XRDOMOverlayInit::root(const Element& value) {
    emlite::Val::set("root", value);
}


} // namespace webbind