#include <webbind/OpusEncoderConfig.hpp>

using emlite::Val;
namespace webbind {

OpusEncoderConfig::OpusEncoderConfig(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
OpusEncoderConfig OpusEncoderConfig::take_ownership(Handle h) noexcept {
        return OpusEncoderConfig(h);
    }
OpusEncoderConfig::OpusEncoderConfig(const emlite::Val &val) noexcept: emlite::Val(val) {}
OpusEncoderConfig::OpusEncoderConfig() noexcept: emlite::Val(emlite::Val::object()) {}
OpusEncoderConfig OpusEncoderConfig::clone() const noexcept { return *this; }

OpusBitstreamFormat OpusEncoderConfig::format() const {
    return emlite::Val::get("format").as<OpusBitstreamFormat>();
}

void OpusEncoderConfig::format(const OpusBitstreamFormat& value) {
    emlite::Val::set("format", value);
}

OpusSignal OpusEncoderConfig::signal() const {
    return emlite::Val::get("signal").as<OpusSignal>();
}

void OpusEncoderConfig::signal(const OpusSignal& value) {
    emlite::Val::set("signal", value);
}

OpusApplication OpusEncoderConfig::application() const {
    return emlite::Val::get("application").as<OpusApplication>();
}

void OpusEncoderConfig::application(const OpusApplication& value) {
    emlite::Val::set("application", value);
}

long long OpusEncoderConfig::frameDuration() const {
    return emlite::Val::get("frameDuration").as<long long>();
}

void OpusEncoderConfig::frameDuration(long long value) {
    emlite::Val::set("frameDuration", value);
}

unsigned long OpusEncoderConfig::complexity() const {
    return emlite::Val::get("complexity").as<unsigned long>();
}

void OpusEncoderConfig::complexity(unsigned long value) {
    emlite::Val::set("complexity", value);
}

unsigned long OpusEncoderConfig::packetlossperc() const {
    return emlite::Val::get("packetlossperc").as<unsigned long>();
}

void OpusEncoderConfig::packetlossperc(unsigned long value) {
    emlite::Val::set("packetlossperc", value);
}

bool OpusEncoderConfig::useinbandfec() const {
    return emlite::Val::get("useinbandfec").as<bool>();
}

void OpusEncoderConfig::useinbandfec(bool value) {
    emlite::Val::set("useinbandfec", value);
}

bool OpusEncoderConfig::usedtx() const {
    return emlite::Val::get("usedtx").as<bool>();
}

void OpusEncoderConfig::usedtx(bool value) {
    emlite::Val::set("usedtx", value);
}


} // namespace webbind