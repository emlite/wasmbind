#include <webbind/HmacKeyGenParams.hpp>

namespace webbind {

HmacKeyGenParams::HmacKeyGenParams(Handle h) noexcept : Algorithm(emlite::Val::take_ownership(h)) {}
HmacKeyGenParams HmacKeyGenParams::take_ownership(Handle h) noexcept {
    return HmacKeyGenParams(h);
}

HmacKeyGenParams::HmacKeyGenParams(const emlite::Val &val) noexcept: Algorithm(val) {}

HmacKeyGenParams::HmacKeyGenParams() noexcept: Algorithm(emlite::Val::object()) {}

HmacKeyGenParams HmacKeyGenParams::clone() const noexcept { return *this; }

jsbind::Any HmacKeyGenParams::hash() const {
    return emlite::Val::get("hash").as<jsbind::Any>();
}

void HmacKeyGenParams::hash(const jsbind::Any& value) {
    emlite::Val::set("hash", value);
}

unsigned long HmacKeyGenParams::length() const {
    return emlite::Val::get("length").as<unsigned long>();
}

void HmacKeyGenParams::length(unsigned long value) {
    emlite::Val::set("length", value);
}


} // namespace webbind