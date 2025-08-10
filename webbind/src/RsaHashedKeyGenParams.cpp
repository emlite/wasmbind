#include "webbind/RsaHashedKeyGenParams.hpp"

using emlite::Val;
namespace webbind {

RsaHashedKeyGenParams::RsaHashedKeyGenParams(Handle h) noexcept : RsaKeyGenParams(emlite::Val::take_ownership(h)) {}
RsaHashedKeyGenParams RsaHashedKeyGenParams::take_ownership(Handle h) noexcept {
        return RsaHashedKeyGenParams(h);
    }
RsaHashedKeyGenParams::RsaHashedKeyGenParams(const emlite::Val &val) noexcept: RsaKeyGenParams(val) {}
RsaHashedKeyGenParams::RsaHashedKeyGenParams() noexcept: RsaKeyGenParams(emlite::Val::object()) {}
RsaHashedKeyGenParams RsaHashedKeyGenParams::clone() const noexcept { return *this; }

jsbind::Any RsaHashedKeyGenParams::hash() const {
    return emlite::Val::get("hash").as<jsbind::Any>();
}

void RsaHashedKeyGenParams::hash(const jsbind::Any& value) {
    emlite::Val::set("hash", value);
}


} // namespace webbind