#include <webbind/AacEncoderConfig.hpp>

using emlite::Val;
namespace webbind {

AacEncoderConfig::AacEncoderConfig(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
AacEncoderConfig AacEncoderConfig::take_ownership(Handle h) noexcept {
        return AacEncoderConfig(h);
    }
AacEncoderConfig::AacEncoderConfig(const emlite::Val &val) noexcept: emlite::Val(val) {}
AacEncoderConfig::AacEncoderConfig() noexcept: emlite::Val(emlite::Val::object()) {}
AacEncoderConfig AacEncoderConfig::clone() const noexcept { return *this; }

AacBitstreamFormat AacEncoderConfig::format() const {
    return emlite::Val::get("format").as<AacBitstreamFormat>();
}

void AacEncoderConfig::format(const AacBitstreamFormat& value) {
    emlite::Val::set("format", value);
}


} // namespace webbind