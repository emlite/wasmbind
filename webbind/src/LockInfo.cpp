#include "webbind/LockInfo.hpp"

using emlite::Val;
namespace webbind {

LockInfo::LockInfo(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
LockInfo LockInfo::take_ownership(Handle h) noexcept {
        return LockInfo(h);
    }
LockInfo::LockInfo(const emlite::Val &val) noexcept: emlite::Val(val) {}
LockInfo::LockInfo() noexcept: emlite::Val(emlite::Val::object()) {}
LockInfo LockInfo::clone() const noexcept { return *this; }

jsbind::String LockInfo::name() const {
    return emlite::Val::get("name").as<jsbind::String>();
}

void LockInfo::name(const jsbind::String& value) {
    emlite::Val::set("name", value);
}

LockMode LockInfo::mode() const {
    return emlite::Val::get("mode").as<LockMode>();
}

void LockInfo::mode(const LockMode& value) {
    emlite::Val::set("mode", value);
}

jsbind::String LockInfo::clientId() const {
    return emlite::Val::get("clientId").as<jsbind::String>();
}

void LockInfo::clientId(const jsbind::String& value) {
    emlite::Val::set("clientId", value);
}


} // namespace webbind