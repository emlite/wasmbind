#include "webbind/EcKeyGenParams.hpp"

using emlite::Val;
namespace webbind {

EcKeyGenParams::EcKeyGenParams(Handle h) noexcept : Algorithm(emlite::Val::take_ownership(h)) {}
EcKeyGenParams EcKeyGenParams::take_ownership(Handle h) noexcept {
        return EcKeyGenParams(h);
    }
EcKeyGenParams::EcKeyGenParams(const emlite::Val &val) noexcept: Algorithm(val) {}
EcKeyGenParams::EcKeyGenParams() noexcept: Algorithm(emlite::Val::object()) {}
EcKeyGenParams EcKeyGenParams::clone() const noexcept { return *this; }

jsbind::Any EcKeyGenParams::namedCurve() const {
    return emlite::Val::get("namedCurve").as<jsbind::Any>();
}

void EcKeyGenParams::namedCurve(const jsbind::Any& value) {
    emlite::Val::set("namedCurve", value);
}


} // namespace webbind