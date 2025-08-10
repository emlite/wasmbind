#include "webbind/AesCbcParams.hpp"

using emlite::Val;
namespace webbind {

AesCbcParams::AesCbcParams(Handle h) noexcept : Algorithm(emlite::Val::take_ownership(h)) {}
AesCbcParams AesCbcParams::take_ownership(Handle h) noexcept {
        return AesCbcParams(h);
    }
AesCbcParams::AesCbcParams(const emlite::Val &val) noexcept: Algorithm(val) {}
AesCbcParams::AesCbcParams() noexcept: Algorithm(emlite::Val::object()) {}
AesCbcParams AesCbcParams::clone() const noexcept { return *this; }

jsbind::Any AesCbcParams::iv() const {
    return emlite::Val::get("iv").as<jsbind::Any>();
}

void AesCbcParams::iv(const jsbind::Any& value) {
    emlite::Val::set("iv", value);
}


} // namespace webbind