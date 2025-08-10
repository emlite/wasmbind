#include "webbind/PressureRecord.hpp"

namespace webbind {

PressureRecord PressureRecord::take_ownership(Handle h) noexcept {
        return PressureRecord(h);
    }
PressureRecord PressureRecord::clone() const noexcept { return *this; }
emlite::Val PressureRecord::instance() noexcept { return emlite::Val::global("PressureRecord"); }
PressureRecord::PressureRecord(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
PressureRecord::PressureRecord(const emlite::Val &val) noexcept: emlite::Val(val) {}

PressureSource PressureRecord::source() const {
    return emlite::Val::get("source").as<PressureSource>();
}

PressureState PressureRecord::state() const {
    return emlite::Val::get("state").as<PressureState>();
}

jsbind::Any PressureRecord::time() const {
    return emlite::Val::get("time").as<jsbind::Any>();
}

jsbind::Object PressureRecord::toJSON() {
    return emlite::Val::call("toJSON").as<jsbind::Object>();
}


} // namespace webbind