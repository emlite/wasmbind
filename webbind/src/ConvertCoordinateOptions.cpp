#include <webbind/ConvertCoordinateOptions.hpp>

using emlite::Val;
namespace webbind {

ConvertCoordinateOptions::ConvertCoordinateOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
ConvertCoordinateOptions ConvertCoordinateOptions::take_ownership(Handle h) noexcept {
        return ConvertCoordinateOptions(h);
    }
ConvertCoordinateOptions::ConvertCoordinateOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
ConvertCoordinateOptions::ConvertCoordinateOptions() noexcept: emlite::Val(emlite::Val::object()) {}
ConvertCoordinateOptions ConvertCoordinateOptions::clone() const noexcept { return *this; }

CSSBoxType ConvertCoordinateOptions::fromBox() const {
    return emlite::Val::get("fromBox").as<CSSBoxType>();
}

void ConvertCoordinateOptions::fromBox(const CSSBoxType& value) {
    emlite::Val::set("fromBox", value);
}

CSSBoxType ConvertCoordinateOptions::toBox() const {
    return emlite::Val::get("toBox").as<CSSBoxType>();
}

void ConvertCoordinateOptions::toBox(const CSSBoxType& value) {
    emlite::Val::set("toBox", value);
}


} // namespace webbind