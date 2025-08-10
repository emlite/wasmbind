#include <webbind/EcdhKeyDeriveParams.hpp>
#include <webbind/CryptoKey.hpp>

namespace webbind {

EcdhKeyDeriveParams::EcdhKeyDeriveParams(Handle h) noexcept : Algorithm(emlite::Val::take_ownership(h)) {}
EcdhKeyDeriveParams EcdhKeyDeriveParams::take_ownership(Handle h) noexcept {
    return EcdhKeyDeriveParams(h);
}

EcdhKeyDeriveParams::EcdhKeyDeriveParams(const emlite::Val &val) noexcept: Algorithm(val) {}

EcdhKeyDeriveParams::EcdhKeyDeriveParams() noexcept: Algorithm(emlite::Val::object()) {}

EcdhKeyDeriveParams EcdhKeyDeriveParams::clone() const noexcept { return *this; }

CryptoKey EcdhKeyDeriveParams::public_() const {
    return emlite::Val::get("public").as<CryptoKey>();
}

void EcdhKeyDeriveParams::public_(const CryptoKey& value) {
    emlite::Val::set("public", value);
}


} // namespace webbind