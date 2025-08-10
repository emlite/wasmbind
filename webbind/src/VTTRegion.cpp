#include <webbind/VTTRegion.hpp>

namespace webbind {

VTTRegion VTTRegion::take_ownership(Handle h) noexcept {
    return VTTRegion(h);
}

VTTRegion VTTRegion::clone() const noexcept { return *this; }

emlite::Val VTTRegion::instance() noexcept { return emlite::Val::global("VTTRegion"); }

VTTRegion::VTTRegion(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}

VTTRegion::VTTRegion(const emlite::Val &val) noexcept: emlite::Val(val) {}

VTTRegion::VTTRegion() : emlite::Val(emlite::Val::global("VTTRegion").new_()) {}

jsbind::String VTTRegion::id() const {
    return emlite::Val::get("id").as<jsbind::String>();
}

void VTTRegion::id(const jsbind::String& value) {
    emlite::Val::set("id", value);
}

double VTTRegion::width() const {
    return emlite::Val::get("width").as<double>();
}

void VTTRegion::width(double value) {
    emlite::Val::set("width", value);
}

unsigned long VTTRegion::lines() const {
    return emlite::Val::get("lines").as<unsigned long>();
}

void VTTRegion::lines(unsigned long value) {
    emlite::Val::set("lines", value);
}

double VTTRegion::regionAnchorX() const {
    return emlite::Val::get("regionAnchorX").as<double>();
}

void VTTRegion::regionAnchorX(double value) {
    emlite::Val::set("regionAnchorX", value);
}

double VTTRegion::regionAnchorY() const {
    return emlite::Val::get("regionAnchorY").as<double>();
}

void VTTRegion::regionAnchorY(double value) {
    emlite::Val::set("regionAnchorY", value);
}

double VTTRegion::viewportAnchorX() const {
    return emlite::Val::get("viewportAnchorX").as<double>();
}

void VTTRegion::viewportAnchorX(double value) {
    emlite::Val::set("viewportAnchorX", value);
}

double VTTRegion::viewportAnchorY() const {
    return emlite::Val::get("viewportAnchorY").as<double>();
}

void VTTRegion::viewportAnchorY(double value) {
    emlite::Val::set("viewportAnchorY", value);
}

ScrollSetting VTTRegion::scroll() const {
    return emlite::Val::get("scroll").as<ScrollSetting>();
}

void VTTRegion::scroll(const ScrollSetting& value) {
    emlite::Val::set("scroll", value);
}


} // namespace webbind