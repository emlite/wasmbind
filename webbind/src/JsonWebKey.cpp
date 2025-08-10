#include <webbind/JsonWebKey.hpp>
#include <webbind/RsaOtherPrimesInfo.hpp>

using emlite::Val;
namespace webbind {

JsonWebKey::JsonWebKey(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
JsonWebKey JsonWebKey::take_ownership(Handle h) noexcept {
        return JsonWebKey(h);
    }
JsonWebKey::JsonWebKey(const emlite::Val &val) noexcept: emlite::Val(val) {}
JsonWebKey::JsonWebKey() noexcept: emlite::Val(emlite::Val::object()) {}
JsonWebKey JsonWebKey::clone() const noexcept { return *this; }

jsbind::String JsonWebKey::kty() const {
    return emlite::Val::get("kty").as<jsbind::String>();
}

void JsonWebKey::kty(const jsbind::String& value) {
    emlite::Val::set("kty", value);
}

jsbind::String JsonWebKey::use() const {
    return emlite::Val::get("use").as<jsbind::String>();
}

void JsonWebKey::use(const jsbind::String& value) {
    emlite::Val::set("use", value);
}

jsbind::TypedArray<jsbind::String> JsonWebKey::key_ops() const {
    return emlite::Val::get("key_ops").as<jsbind::TypedArray<jsbind::String>>();
}

void JsonWebKey::key_ops(const jsbind::TypedArray<jsbind::String>& value) {
    emlite::Val::set("key_ops", value);
}

jsbind::String JsonWebKey::alg() const {
    return emlite::Val::get("alg").as<jsbind::String>();
}

void JsonWebKey::alg(const jsbind::String& value) {
    emlite::Val::set("alg", value);
}

bool JsonWebKey::ext() const {
    return emlite::Val::get("ext").as<bool>();
}

void JsonWebKey::ext(bool value) {
    emlite::Val::set("ext", value);
}

jsbind::String JsonWebKey::crv() const {
    return emlite::Val::get("crv").as<jsbind::String>();
}

void JsonWebKey::crv(const jsbind::String& value) {
    emlite::Val::set("crv", value);
}

jsbind::String JsonWebKey::x() const {
    return emlite::Val::get("x").as<jsbind::String>();
}

void JsonWebKey::x(const jsbind::String& value) {
    emlite::Val::set("x", value);
}

jsbind::String JsonWebKey::y() const {
    return emlite::Val::get("y").as<jsbind::String>();
}

void JsonWebKey::y(const jsbind::String& value) {
    emlite::Val::set("y", value);
}

jsbind::String JsonWebKey::d() const {
    return emlite::Val::get("d").as<jsbind::String>();
}

void JsonWebKey::d(const jsbind::String& value) {
    emlite::Val::set("d", value);
}

jsbind::String JsonWebKey::n() const {
    return emlite::Val::get("n").as<jsbind::String>();
}

void JsonWebKey::n(const jsbind::String& value) {
    emlite::Val::set("n", value);
}

jsbind::String JsonWebKey::e() const {
    return emlite::Val::get("e").as<jsbind::String>();
}

void JsonWebKey::e(const jsbind::String& value) {
    emlite::Val::set("e", value);
}

jsbind::String JsonWebKey::p() const {
    return emlite::Val::get("p").as<jsbind::String>();
}

void JsonWebKey::p(const jsbind::String& value) {
    emlite::Val::set("p", value);
}

jsbind::String JsonWebKey::q() const {
    return emlite::Val::get("q").as<jsbind::String>();
}

void JsonWebKey::q(const jsbind::String& value) {
    emlite::Val::set("q", value);
}

jsbind::String JsonWebKey::dp() const {
    return emlite::Val::get("dp").as<jsbind::String>();
}

void JsonWebKey::dp(const jsbind::String& value) {
    emlite::Val::set("dp", value);
}

jsbind::String JsonWebKey::dq() const {
    return emlite::Val::get("dq").as<jsbind::String>();
}

void JsonWebKey::dq(const jsbind::String& value) {
    emlite::Val::set("dq", value);
}

jsbind::String JsonWebKey::qi() const {
    return emlite::Val::get("qi").as<jsbind::String>();
}

void JsonWebKey::qi(const jsbind::String& value) {
    emlite::Val::set("qi", value);
}

jsbind::TypedArray<RsaOtherPrimesInfo> JsonWebKey::oth() const {
    return emlite::Val::get("oth").as<jsbind::TypedArray<RsaOtherPrimesInfo>>();
}

void JsonWebKey::oth(const jsbind::TypedArray<RsaOtherPrimesInfo>& value) {
    emlite::Val::set("oth", value);
}

jsbind::String JsonWebKey::k() const {
    return emlite::Val::get("k").as<jsbind::String>();
}

void JsonWebKey::k(const jsbind::String& value) {
    emlite::Val::set("k", value);
}


} // namespace webbind