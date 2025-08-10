#include <webbind/HevcEncoderConfig.hpp>

namespace webbind {

HevcEncoderConfig::HevcEncoderConfig(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
HevcEncoderConfig HevcEncoderConfig::take_ownership(Handle h) noexcept {
    return HevcEncoderConfig(h);
}

HevcEncoderConfig::HevcEncoderConfig(const emlite::Val &val) noexcept: emlite::Val(val) {}

HevcEncoderConfig::HevcEncoderConfig() noexcept: emlite::Val(emlite::Val::object()) {}

HevcEncoderConfig HevcEncoderConfig::clone() const noexcept { return *this; }

HevcBitstreamFormat HevcEncoderConfig::format() const {
    return emlite::Val::get("format").as<HevcBitstreamFormat>();
}

void HevcEncoderConfig::format(const HevcBitstreamFormat& value) {
    emlite::Val::set("format", value);
}


} // namespace webbind