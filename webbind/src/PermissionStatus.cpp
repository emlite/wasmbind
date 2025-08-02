#include <webbind/PermissionStatus.hpp>


PermissionStatus PermissionStatus::take_ownership(Handle h) noexcept {
        return PermissionStatus(h);
    }
PermissionStatus PermissionStatus::clone() const noexcept { return *this; }
emlite::Val PermissionStatus::instance() noexcept { return emlite::Val::global("PermissionStatus"); }
PermissionStatus::PermissionStatus(Handle h) noexcept : EventTarget(emlite::Val::take_ownership(h)) {}
PermissionStatus::PermissionStatus(const emlite::Val &val) noexcept: EventTarget(val) {}


PermissionState PermissionStatus::state() const {
    return EventTarget::get("state").as<PermissionState>();
}

jsbind::String PermissionStatus::name() const {
    return EventTarget::get("name").as<jsbind::String>();
}

jsbind::Any PermissionStatus::onchange() const {
    return EventTarget::get("onchange").as<jsbind::Any>();
}

void PermissionStatus::onchange(const jsbind::Any& value) {
    EventTarget::set("onchange", value);
}

