#include <webbind/SVGDefsElement.hpp>

namespace webbind {

SVGDefsElement SVGDefsElement::take_ownership(Handle h) noexcept {
    return SVGDefsElement(h);
}

SVGDefsElement SVGDefsElement::clone() const noexcept { return *this; }

emlite::Val SVGDefsElement::instance() noexcept { return emlite::Val::global("SVGDefsElement"); }

SVGDefsElement::SVGDefsElement(Handle h) noexcept : SVGGraphicsElement(emlite::Val::take_ownership(h)) {}

SVGDefsElement::SVGDefsElement(const emlite::Val &val) noexcept: SVGGraphicsElement(val) {}


} // namespace webbind