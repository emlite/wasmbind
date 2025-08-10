#include <webbind/LaunchQueue.hpp>

namespace webbind {

LaunchQueue LaunchQueue::take_ownership(Handle h) noexcept {
    return LaunchQueue(h);
}

LaunchQueue LaunchQueue::clone() const noexcept { return *this; }

emlite::Val LaunchQueue::instance() noexcept { return emlite::Val::global("LaunchQueue"); }

LaunchQueue::LaunchQueue(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}

LaunchQueue::LaunchQueue(const emlite::Val &val) noexcept: emlite::Val(val) {}

jsbind::Undefined LaunchQueue::setConsumer(const jsbind::Function& consumer) {
    return emlite::Val::call("setConsumer", consumer).as<jsbind::Undefined>();
}


} // namespace webbind