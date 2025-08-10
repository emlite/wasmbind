#include <webbind/RsaHashedImportParams.hpp>

namespace webbind {

RsaHashedImportParams::RsaHashedImportParams(Handle h) noexcept : Algorithm(emlite::Val::take_ownership(h)) {}
RsaHashedImportParams RsaHashedImportParams::take_ownership(Handle h) noexcept {
    return RsaHashedImportParams(h);
}

RsaHashedImportParams::RsaHashedImportParams(const emlite::Val &val) noexcept: Algorithm(val) {}

RsaHashedImportParams::RsaHashedImportParams() noexcept: Algorithm(emlite::Val::object()) {}

RsaHashedImportParams RsaHashedImportParams::clone() const noexcept { return *this; }

jsbind::Any RsaHashedImportParams::hash() const {
    return emlite::Val::get("hash").as<jsbind::Any>();
}

void RsaHashedImportParams::hash(const jsbind::Any& value) {
    emlite::Val::set("hash", value);
}


} // namespace webbind