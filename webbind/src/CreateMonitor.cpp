#include <webbind/CreateMonitor.hpp>


CreateMonitor CreateMonitor::take_ownership(Handle h) noexcept {
        return CreateMonitor(h);
    }
CreateMonitor CreateMonitor::clone() const noexcept { return *this; }
CreateMonitor::CreateMonitor(Handle h) noexcept : EventTarget(emlite::Val::take_ownership(h)) {}
CreateMonitor::CreateMonitor(const emlite::Val &val) noexcept: EventTarget(val) {}


jsbind::Any CreateMonitor::ondownloadprogress() const {
    return EventTarget::get("ondownloadprogress").as<jsbind::Any>();
}

void CreateMonitor::ondownloadprogress(const jsbind::Any& value) {
    EventTarget::set("ondownloadprogress", value);
}

