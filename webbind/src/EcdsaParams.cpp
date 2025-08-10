#include "webbind/EcdsaParams.hpp"

using emlite::Val;
namespace webbind {

EcdsaParams::EcdsaParams(Handle h) noexcept : Algorithm(emlite::Val::take_ownership(h)) {}
EcdsaParams EcdsaParams::take_ownership(Handle h) noexcept {
        return EcdsaParams(h);
    }
EcdsaParams::EcdsaParams(const emlite::Val &val) noexcept: Algorithm(val) {}
EcdsaParams::EcdsaParams() noexcept: Algorithm(emlite::Val::object()) {}
EcdsaParams EcdsaParams::clone() const noexcept { return *this; }

jsbind::Any EcdsaParams::hash() const {
    return emlite::Val::get("hash").as<jsbind::Any>();
}

void EcdsaParams::hash(const jsbind::Any& value) {
    emlite::Val::set("hash", value);
}


} // namespace webbind