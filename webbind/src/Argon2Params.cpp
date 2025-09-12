#include <webbind/Argon2Params.hpp>

namespace webbind {

Argon2Params::Argon2Params(Handle h) noexcept : Algorithm(emlite::Val::take_ownership(h)) {}
Argon2Params Argon2Params::take_ownership(Handle h) noexcept {
    return Argon2Params(h);
}

Argon2Params::Argon2Params(const emlite::Val &val) noexcept: Algorithm(val) {}

Argon2Params::Argon2Params() noexcept: Algorithm(emlite::Val::object()) {}

Argon2Params Argon2Params::clone() const noexcept { return *this; }

jsbind::Any Argon2Params::nonce() const {
    return emlite::Val::get("nonce").as<jsbind::Any>();
}

void Argon2Params::nonce(const jsbind::Any& value) {
    emlite::Val::set("nonce", value);
}

unsigned long Argon2Params::parallelism() const {
    return emlite::Val::get("parallelism").as<unsigned long>();
}

void Argon2Params::parallelism(unsigned long value) {
    emlite::Val::set("parallelism", value);
}

unsigned long Argon2Params::memory() const {
    return emlite::Val::get("memory").as<unsigned long>();
}

void Argon2Params::memory(unsigned long value) {
    emlite::Val::set("memory", value);
}

unsigned long Argon2Params::passes() const {
    return emlite::Val::get("passes").as<unsigned long>();
}

void Argon2Params::passes(unsigned long value) {
    emlite::Val::set("passes", value);
}

unsigned char Argon2Params::version() const {
    return emlite::Val::get("version").as<unsigned char>();
}

void Argon2Params::version(unsigned char value) {
    emlite::Val::set("version", value);
}

jsbind::Any Argon2Params::secretValue() const {
    return emlite::Val::get("secretValue").as<jsbind::Any>();
}

void Argon2Params::secretValue(const jsbind::Any& value) {
    emlite::Val::set("secretValue", value);
}

jsbind::Any Argon2Params::associatedData() const {
    return emlite::Val::get("associatedData").as<jsbind::Any>();
}

void Argon2Params::associatedData(const jsbind::Any& value) {
    emlite::Val::set("associatedData", value);
}


} // namespace webbind