#include <webbind/AesGcmParams.hpp>

namespace webbind {

AesGcmParams::AesGcmParams(Handle h) noexcept : Algorithm(emlite::Val::take_ownership(h)) {}
AesGcmParams AesGcmParams::take_ownership(Handle h) noexcept {
    return AesGcmParams(h);
}

AesGcmParams::AesGcmParams(const emlite::Val &val) noexcept: Algorithm(val) {}

AesGcmParams::AesGcmParams() noexcept: Algorithm(emlite::Val::object()) {}

AesGcmParams AesGcmParams::clone() const noexcept { return *this; }

jsbind::Any AesGcmParams::iv() const {
    return emlite::Val::get("iv").as<jsbind::Any>();
}

void AesGcmParams::iv(const jsbind::Any& value) {
    emlite::Val::set("iv", value);
}

jsbind::Any AesGcmParams::additionalData() const {
    return emlite::Val::get("additionalData").as<jsbind::Any>();
}

void AesGcmParams::additionalData(const jsbind::Any& value) {
    emlite::Val::set("additionalData", value);
}

unsigned char AesGcmParams::tagLength() const {
    return emlite::Val::get("tagLength").as<unsigned char>();
}

void AesGcmParams::tagLength(unsigned char value) {
    emlite::Val::set("tagLength", value);
}


} // namespace webbind