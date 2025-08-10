#include <webbind/Sensor.hpp>

namespace webbind {

Sensor Sensor::take_ownership(Handle h) noexcept {
    return Sensor(h);
}

Sensor Sensor::clone() const noexcept { return *this; }

emlite::Val Sensor::instance() noexcept { return emlite::Val::global("Sensor"); }

Sensor::Sensor(Handle h) noexcept : EventTarget(emlite::Val::take_ownership(h)) {}

Sensor::Sensor(const emlite::Val &val) noexcept: EventTarget(val) {}

bool Sensor::activated() const {
    return EventTarget::get("activated").as<bool>();
}

bool Sensor::hasReading() const {
    return EventTarget::get("hasReading").as<bool>();
}

jsbind::Any Sensor::timestamp() const {
    return EventTarget::get("timestamp").as<jsbind::Any>();
}

jsbind::Undefined Sensor::start() {
    return EventTarget::call("start").as<jsbind::Undefined>();
}

jsbind::Undefined Sensor::stop() {
    return EventTarget::call("stop").as<jsbind::Undefined>();
}

jsbind::Any Sensor::onreading() const {
    return EventTarget::get("onreading").as<jsbind::Any>();
}

void Sensor::onreading(const jsbind::Any& value) {
    EventTarget::set("onreading", value);
}

jsbind::Any Sensor::onactivate() const {
    return EventTarget::get("onactivate").as<jsbind::Any>();
}

void Sensor::onactivate(const jsbind::Any& value) {
    EventTarget::set("onactivate", value);
}

jsbind::Any Sensor::onerror() const {
    return EventTarget::get("onerror").as<jsbind::Any>();
}

void Sensor::onerror(const jsbind::Any& value) {
    EventTarget::set("onerror", value);
}


} // namespace webbind