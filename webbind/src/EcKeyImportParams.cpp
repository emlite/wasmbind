#include <webbind/EcKeyImportParams.hpp>

using emlite::Val;
namespace webbind {

EcKeyImportParams::EcKeyImportParams(Handle h) noexcept : Algorithm(emlite::Val::take_ownership(h)) {}
EcKeyImportParams EcKeyImportParams::take_ownership(Handle h) noexcept {
        return EcKeyImportParams(h);
    }
EcKeyImportParams::EcKeyImportParams(const emlite::Val &val) noexcept: Algorithm(val) {}
EcKeyImportParams::EcKeyImportParams() noexcept: Algorithm(emlite::Val::object()) {}
EcKeyImportParams EcKeyImportParams::clone() const noexcept { return *this; }

jsbind::Any EcKeyImportParams::namedCurve() const {
    return emlite::Val::get("namedCurve").as<jsbind::Any>();
}

void EcKeyImportParams::namedCurve(const jsbind::Any& value) {
    emlite::Val::set("namedCurve", value);
}


} // namespace webbind