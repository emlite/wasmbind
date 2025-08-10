#include <webbind/SensorErrorEventInit.hpp>
#include <webbind/DOMException.hpp>

using emlite::Val;
namespace webbind {

SensorErrorEventInit::SensorErrorEventInit(Handle h) noexcept : EventInit(emlite::Val::take_ownership(h)) {}
SensorErrorEventInit SensorErrorEventInit::take_ownership(Handle h) noexcept {
        return SensorErrorEventInit(h);
    }
SensorErrorEventInit::SensorErrorEventInit(const emlite::Val &val) noexcept: EventInit(val) {}
SensorErrorEventInit::SensorErrorEventInit() noexcept: EventInit(emlite::Val::object()) {}
SensorErrorEventInit SensorErrorEventInit::clone() const noexcept { return *this; }

DOMException SensorErrorEventInit::error() const {
    return emlite::Val::get("error").as<DOMException>();
}

void SensorErrorEventInit::error(const DOMException& value) {
    emlite::Val::set("error", value);
}


} // namespace webbind