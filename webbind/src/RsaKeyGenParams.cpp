#include <webbind/RsaKeyGenParams.hpp>

using emlite::Val;
namespace webbind {

RsaKeyGenParams::RsaKeyGenParams(Handle h) noexcept : Algorithm(emlite::Val::take_ownership(h)) {}
RsaKeyGenParams RsaKeyGenParams::take_ownership(Handle h) noexcept {
        return RsaKeyGenParams(h);
    }
RsaKeyGenParams::RsaKeyGenParams(const emlite::Val &val) noexcept: Algorithm(val) {}
RsaKeyGenParams::RsaKeyGenParams() noexcept: Algorithm(emlite::Val::object()) {}
RsaKeyGenParams RsaKeyGenParams::clone() const noexcept { return *this; }

unsigned long RsaKeyGenParams::modulusLength() const {
    return emlite::Val::get("modulusLength").as<unsigned long>();
}

void RsaKeyGenParams::modulusLength(unsigned long value) {
    emlite::Val::set("modulusLength", value);
}

jsbind::Any RsaKeyGenParams::publicExponent() const {
    return emlite::Val::get("publicExponent").as<jsbind::Any>();
}

void RsaKeyGenParams::publicExponent(const jsbind::Any& value) {
    emlite::Val::set("publicExponent", value);
}


} // namespace webbind