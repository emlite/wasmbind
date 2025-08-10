#include "webbind/PositionOptions.hpp"

using emlite::Val;
namespace webbind {

PositionOptions::PositionOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
PositionOptions PositionOptions::take_ownership(Handle h) noexcept {
        return PositionOptions(h);
    }
PositionOptions::PositionOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
PositionOptions::PositionOptions() noexcept: emlite::Val(emlite::Val::object()) {}
PositionOptions PositionOptions::clone() const noexcept { return *this; }

bool PositionOptions::enableHighAccuracy() const {
    return emlite::Val::get("enableHighAccuracy").as<bool>();
}

void PositionOptions::enableHighAccuracy(bool value) {
    emlite::Val::set("enableHighAccuracy", value);
}

unsigned long PositionOptions::timeout() const {
    return emlite::Val::get("timeout").as<unsigned long>();
}

void PositionOptions::timeout(unsigned long value) {
    emlite::Val::set("timeout", value);
}

unsigned long PositionOptions::maximumAge() const {
    return emlite::Val::get("maximumAge").as<unsigned long>();
}

void PositionOptions::maximumAge(unsigned long value) {
    emlite::Val::set("maximumAge", value);
}


} // namespace webbind