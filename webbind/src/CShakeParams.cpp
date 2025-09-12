#include <webbind/CShakeParams.hpp>

namespace webbind {

CShakeParams::CShakeParams(Handle h) noexcept : Algorithm(emlite::Val::take_ownership(h)) {}
CShakeParams CShakeParams::take_ownership(Handle h) noexcept {
    return CShakeParams(h);
}

CShakeParams::CShakeParams(const emlite::Val &val) noexcept: Algorithm(val) {}

CShakeParams::CShakeParams() noexcept: Algorithm(emlite::Val::object()) {}

CShakeParams CShakeParams::clone() const noexcept { return *this; }

unsigned long CShakeParams::length() const {
    return emlite::Val::get("length").as<unsigned long>();
}

void CShakeParams::length(unsigned long value) {
    emlite::Val::set("length", value);
}

jsbind::Any CShakeParams::functionName() const {
    return emlite::Val::get("functionName").as<jsbind::Any>();
}

void CShakeParams::functionName(const jsbind::Any& value) {
    emlite::Val::set("functionName", value);
}

jsbind::Any CShakeParams::customization() const {
    return emlite::Val::get("customization").as<jsbind::Any>();
}

void CShakeParams::customization(const jsbind::Any& value) {
    emlite::Val::set("customization", value);
}


} // namespace webbind