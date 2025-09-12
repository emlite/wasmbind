#include <webbind/AeadParams.hpp>

namespace webbind {

AeadParams::AeadParams(Handle h) noexcept : Algorithm(emlite::Val::take_ownership(h)) {}
AeadParams AeadParams::take_ownership(Handle h) noexcept {
    return AeadParams(h);
}

AeadParams::AeadParams(const emlite::Val &val) noexcept: Algorithm(val) {}

AeadParams::AeadParams() noexcept: Algorithm(emlite::Val::object()) {}

AeadParams AeadParams::clone() const noexcept { return *this; }

jsbind::Any AeadParams::iv() const {
    return emlite::Val::get("iv").as<jsbind::Any>();
}

void AeadParams::iv(const jsbind::Any& value) {
    emlite::Val::set("iv", value);
}

jsbind::Any AeadParams::additionalData() const {
    return emlite::Val::get("additionalData").as<jsbind::Any>();
}

void AeadParams::additionalData(const jsbind::Any& value) {
    emlite::Val::set("additionalData", value);
}

unsigned char AeadParams::tagLength() const {
    return emlite::Val::get("tagLength").as<unsigned char>();
}

void AeadParams::tagLength(unsigned char value) {
    emlite::Val::set("tagLength", value);
}


} // namespace webbind