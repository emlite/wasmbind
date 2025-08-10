#include "webbind/SVGPathDataSettings.hpp"

using emlite::Val;
namespace webbind {

SVGPathDataSettings::SVGPathDataSettings(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
SVGPathDataSettings SVGPathDataSettings::take_ownership(Handle h) noexcept {
        return SVGPathDataSettings(h);
    }
SVGPathDataSettings::SVGPathDataSettings(const emlite::Val &val) noexcept: emlite::Val(val) {}
SVGPathDataSettings::SVGPathDataSettings() noexcept: emlite::Val(emlite::Val::object()) {}
SVGPathDataSettings SVGPathDataSettings::clone() const noexcept { return *this; }

bool SVGPathDataSettings::normalize() const {
    return emlite::Val::get("normalize").as<bool>();
}

void SVGPathDataSettings::normalize(bool value) {
    emlite::Val::set("normalize", value);
}


} // namespace webbind