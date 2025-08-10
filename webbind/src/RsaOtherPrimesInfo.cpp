#include <webbind/RsaOtherPrimesInfo.hpp>

using emlite::Val;
namespace webbind {

RsaOtherPrimesInfo::RsaOtherPrimesInfo(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
RsaOtherPrimesInfo RsaOtherPrimesInfo::take_ownership(Handle h) noexcept {
        return RsaOtherPrimesInfo(h);
    }
RsaOtherPrimesInfo::RsaOtherPrimesInfo(const emlite::Val &val) noexcept: emlite::Val(val) {}
RsaOtherPrimesInfo::RsaOtherPrimesInfo() noexcept: emlite::Val(emlite::Val::object()) {}
RsaOtherPrimesInfo RsaOtherPrimesInfo::clone() const noexcept { return *this; }

jsbind::String RsaOtherPrimesInfo::r() const {
    return emlite::Val::get("r").as<jsbind::String>();
}

void RsaOtherPrimesInfo::r(const jsbind::String& value) {
    emlite::Val::set("r", value);
}

jsbind::String RsaOtherPrimesInfo::d() const {
    return emlite::Val::get("d").as<jsbind::String>();
}

void RsaOtherPrimesInfo::d(const jsbind::String& value) {
    emlite::Val::set("d", value);
}

jsbind::String RsaOtherPrimesInfo::t() const {
    return emlite::Val::get("t").as<jsbind::String>();
}

void RsaOtherPrimesInfo::t(const jsbind::String& value) {
    emlite::Val::set("t", value);
}


} // namespace webbind