#include <webbind/AesKeyGenParams.hpp>

namespace webbind {

AesKeyGenParams::AesKeyGenParams(Handle h) noexcept : Algorithm(emlite::Val::take_ownership(h)) {}
AesKeyGenParams AesKeyGenParams::take_ownership(Handle h) noexcept {
    return AesKeyGenParams(h);
}

AesKeyGenParams::AesKeyGenParams(const emlite::Val &val) noexcept: Algorithm(val) {}

AesKeyGenParams::AesKeyGenParams() noexcept: Algorithm(emlite::Val::object()) {}

AesKeyGenParams AesKeyGenParams::clone() const noexcept { return *this; }

unsigned short AesKeyGenParams::length() const {
    return emlite::Val::get("length").as<unsigned short>();
}

void AesKeyGenParams::length(unsigned short value) {
    emlite::Val::set("length", value);
}


} // namespace webbind