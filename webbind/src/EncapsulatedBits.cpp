#include <webbind/EncapsulatedBits.hpp>

namespace webbind {

EncapsulatedBits::EncapsulatedBits(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
EncapsulatedBits EncapsulatedBits::take_ownership(Handle h) noexcept {
    return EncapsulatedBits(h);
}

EncapsulatedBits::EncapsulatedBits(const emlite::Val &val) noexcept: emlite::Val(val) {}

EncapsulatedBits::EncapsulatedBits() noexcept: emlite::Val(emlite::Val::object()) {}

EncapsulatedBits EncapsulatedBits::clone() const noexcept { return *this; }

jsbind::ArrayBuffer EncapsulatedBits::sharedKey() const {
    return emlite::Val::get("sharedKey").as<jsbind::ArrayBuffer>();
}

void EncapsulatedBits::sharedKey(const jsbind::ArrayBuffer& value) {
    emlite::Val::set("sharedKey", value);
}

jsbind::ArrayBuffer EncapsulatedBits::ciphertext() const {
    return emlite::Val::get("ciphertext").as<jsbind::ArrayBuffer>();
}

void EncapsulatedBits::ciphertext(const jsbind::ArrayBuffer& value) {
    emlite::Val::set("ciphertext", value);
}


} // namespace webbind