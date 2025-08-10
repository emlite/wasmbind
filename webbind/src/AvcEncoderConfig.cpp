#include "webbind/AvcEncoderConfig.hpp"

using emlite::Val;
namespace webbind {

AvcEncoderConfig::AvcEncoderConfig(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
AvcEncoderConfig AvcEncoderConfig::take_ownership(Handle h) noexcept {
        return AvcEncoderConfig(h);
    }
AvcEncoderConfig::AvcEncoderConfig(const emlite::Val &val) noexcept: emlite::Val(val) {}
AvcEncoderConfig::AvcEncoderConfig() noexcept: emlite::Val(emlite::Val::object()) {}
AvcEncoderConfig AvcEncoderConfig::clone() const noexcept { return *this; }

AvcBitstreamFormat AvcEncoderConfig::format() const {
    return emlite::Val::get("format").as<AvcBitstreamFormat>();
}

void AvcEncoderConfig::format(const AvcBitstreamFormat& value) {
    emlite::Val::set("format", value);
}


} // namespace webbind