#include <webbind/Pbkdf2Params.hpp>

namespace webbind {

Pbkdf2Params::Pbkdf2Params(Handle h) noexcept : Algorithm(emlite::Val::take_ownership(h)) {}
Pbkdf2Params Pbkdf2Params::take_ownership(Handle h) noexcept {
    return Pbkdf2Params(h);
}

Pbkdf2Params::Pbkdf2Params(const emlite::Val &val) noexcept: Algorithm(val) {}

Pbkdf2Params::Pbkdf2Params() noexcept: Algorithm(emlite::Val::object()) {}

Pbkdf2Params Pbkdf2Params::clone() const noexcept { return *this; }

jsbind::Any Pbkdf2Params::salt() const {
    return emlite::Val::get("salt").as<jsbind::Any>();
}

void Pbkdf2Params::salt(const jsbind::Any& value) {
    emlite::Val::set("salt", value);
}

unsigned long Pbkdf2Params::iterations() const {
    return emlite::Val::get("iterations").as<unsigned long>();
}

void Pbkdf2Params::iterations(unsigned long value) {
    emlite::Val::set("iterations", value);
}

jsbind::Any Pbkdf2Params::hash() const {
    return emlite::Val::get("hash").as<jsbind::Any>();
}

void Pbkdf2Params::hash(const jsbind::Any& value) {
    emlite::Val::set("hash", value);
}


} // namespace webbind