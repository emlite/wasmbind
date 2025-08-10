#include <webbind/MLContextLostInfo.hpp>

namespace webbind {

MLContextLostInfo::MLContextLostInfo(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
MLContextLostInfo MLContextLostInfo::take_ownership(Handle h) noexcept {
    return MLContextLostInfo(h);
}

MLContextLostInfo::MLContextLostInfo(const emlite::Val &val) noexcept: emlite::Val(val) {}

MLContextLostInfo::MLContextLostInfo() noexcept: emlite::Val(emlite::Val::object()) {}

MLContextLostInfo MLContextLostInfo::clone() const noexcept { return *this; }

jsbind::String MLContextLostInfo::message() const {
    return emlite::Val::get("message").as<jsbind::String>();
}

void MLContextLostInfo::message(const jsbind::String& value) {
    emlite::Val::set("message", value);
}


} // namespace webbind