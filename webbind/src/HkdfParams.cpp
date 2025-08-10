#include "webbind/HkdfParams.hpp"

using emlite::Val;
namespace webbind {

HkdfParams::HkdfParams(Handle h) noexcept : Algorithm(emlite::Val::take_ownership(h)) {}
HkdfParams HkdfParams::take_ownership(Handle h) noexcept {
        return HkdfParams(h);
    }
HkdfParams::HkdfParams(const emlite::Val &val) noexcept: Algorithm(val) {}
HkdfParams::HkdfParams() noexcept: Algorithm(emlite::Val::object()) {}
HkdfParams HkdfParams::clone() const noexcept { return *this; }

jsbind::Any HkdfParams::hash() const {
    return emlite::Val::get("hash").as<jsbind::Any>();
}

void HkdfParams::hash(const jsbind::Any& value) {
    emlite::Val::set("hash", value);
}

jsbind::Any HkdfParams::salt() const {
    return emlite::Val::get("salt").as<jsbind::Any>();
}

void HkdfParams::salt(const jsbind::Any& value) {
    emlite::Val::set("salt", value);
}

jsbind::Any HkdfParams::info() const {
    return emlite::Val::get("info").as<jsbind::Any>();
}

void HkdfParams::info(const jsbind::Any& value) {
    emlite::Val::set("info", value);
}


} // namespace webbind