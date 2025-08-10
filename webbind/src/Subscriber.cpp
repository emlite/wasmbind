#include "webbind/Subscriber.hpp"
#include "webbind/AbortSignal.hpp"

namespace webbind {

Subscriber Subscriber::take_ownership(Handle h) noexcept {
        return Subscriber(h);
    }
Subscriber Subscriber::clone() const noexcept { return *this; }
emlite::Val Subscriber::instance() noexcept { return emlite::Val::global("Subscriber"); }
Subscriber::Subscriber(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
Subscriber::Subscriber(const emlite::Val &val) noexcept: emlite::Val(val) {}

jsbind::Undefined Subscriber::next(const jsbind::Any& value) {
    return emlite::Val::call("next", value).as<jsbind::Undefined>();
}

jsbind::Undefined Subscriber::error(const jsbind::Any& error) {
    return emlite::Val::call("error", error).as<jsbind::Undefined>();
}

jsbind::Undefined Subscriber::complete() {
    return emlite::Val::call("complete").as<jsbind::Undefined>();
}

jsbind::Undefined Subscriber::addTeardown(const jsbind::Function& teardown) {
    return emlite::Val::call("addTeardown", teardown).as<jsbind::Undefined>();
}

bool Subscriber::active() const {
    return emlite::Val::get("active").as<bool>();
}

AbortSignal Subscriber::signal() const {
    return emlite::Val::get("signal").as<AbortSignal>();
}


} // namespace webbind