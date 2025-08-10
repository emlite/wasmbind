#include "webbind/RsaOaepParams.hpp"

using emlite::Val;
namespace webbind {

RsaOaepParams::RsaOaepParams(Handle h) noexcept : Algorithm(emlite::Val::take_ownership(h)) {}
RsaOaepParams RsaOaepParams::take_ownership(Handle h) noexcept {
        return RsaOaepParams(h);
    }
RsaOaepParams::RsaOaepParams(const emlite::Val &val) noexcept: Algorithm(val) {}
RsaOaepParams::RsaOaepParams() noexcept: Algorithm(emlite::Val::object()) {}
RsaOaepParams RsaOaepParams::clone() const noexcept { return *this; }

jsbind::Any RsaOaepParams::label() const {
    return emlite::Val::get("label").as<jsbind::Any>();
}

void RsaOaepParams::label(const jsbind::Any& value) {
    emlite::Val::set("label", value);
}


} // namespace webbind