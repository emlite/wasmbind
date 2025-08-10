#include <webbind/CreateMonitor.hpp>

namespace webbind {

CreateMonitor CreateMonitor::take_ownership(Handle h) noexcept {
    return CreateMonitor(h);
}

CreateMonitor CreateMonitor::clone() const noexcept { return *this; }

emlite::Val CreateMonitor::instance() noexcept { return emlite::Val::global("CreateMonitor"); }

CreateMonitor::CreateMonitor(Handle h) noexcept : EventTarget(emlite::Val::take_ownership(h)) {}

CreateMonitor::CreateMonitor(const emlite::Val &val) noexcept: EventTarget(val) {}

jsbind::Any CreateMonitor::ondownloadprogress() const {
    return EventTarget::get("ondownloadprogress").as<jsbind::Any>();
}

void CreateMonitor::ondownloadprogress(const jsbind::Any& value) {
    EventTarget::set("ondownloadprogress", value);
}


} // namespace webbind