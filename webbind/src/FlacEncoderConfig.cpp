#include <webbind/FlacEncoderConfig.hpp>

namespace webbind {

FlacEncoderConfig::FlacEncoderConfig(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
FlacEncoderConfig FlacEncoderConfig::take_ownership(Handle h) noexcept {
    return FlacEncoderConfig(h);
}

FlacEncoderConfig::FlacEncoderConfig(const emlite::Val &val) noexcept: emlite::Val(val) {}

FlacEncoderConfig::FlacEncoderConfig() noexcept: emlite::Val(emlite::Val::object()) {}

FlacEncoderConfig FlacEncoderConfig::clone() const noexcept { return *this; }

unsigned long FlacEncoderConfig::blockSize() const {
    return emlite::Val::get("blockSize").as<unsigned long>();
}

void FlacEncoderConfig::blockSize(unsigned long value) {
    emlite::Val::set("blockSize", value);
}

unsigned long FlacEncoderConfig::compressLevel() const {
    return emlite::Val::get("compressLevel").as<unsigned long>();
}

void FlacEncoderConfig::compressLevel(unsigned long value) {
    emlite::Val::set("compressLevel", value);
}


} // namespace webbind