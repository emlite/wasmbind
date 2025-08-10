#include <webbind/SVGMetadataElement.hpp>

namespace webbind {

SVGMetadataElement SVGMetadataElement::take_ownership(Handle h) noexcept {
    return SVGMetadataElement(h);
}

SVGMetadataElement SVGMetadataElement::clone() const noexcept { return *this; }

emlite::Val SVGMetadataElement::instance() noexcept { return emlite::Val::global("SVGMetadataElement"); }

SVGMetadataElement::SVGMetadataElement(Handle h) noexcept : SVGElement(emlite::Val::take_ownership(h)) {}

SVGMetadataElement::SVGMetadataElement(const emlite::Val &val) noexcept: SVGElement(val) {}


} // namespace webbind