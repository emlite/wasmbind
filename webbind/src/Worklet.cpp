#include <webbind/Worklet.hpp>


WorkletOptions::WorkletOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
WorkletOptions WorkletOptions::take_ownership(Handle h) noexcept {
        return WorkletOptions(h);
    }
WorkletOptions::WorkletOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
WorkletOptions::WorkletOptions() noexcept: emlite::Val(emlite::Val::object()) {}
WorkletOptions WorkletOptions::clone() const noexcept { return *this; }

RequestCredentials WorkletOptions::credentials() const {
    return emlite::Val::get("credentials").as<RequestCredentials>();
}

void WorkletOptions::credentials(const RequestCredentials& value) {
    emlite::Val::set("credentials", value);
}

Worklet Worklet::take_ownership(Handle h) noexcept {
        return Worklet(h);
    }
Worklet Worklet::clone() const noexcept { return *this; }
Worklet::Worklet(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
Worklet::Worklet(const emlite::Val &val) noexcept: emlite::Val(val) {}


jsbind::Promise<jsbind::Undefined> Worklet::addModule(const jsbind::USVString& moduleURL) {
    return emlite::Val::call("addModule", moduleURL).as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Promise<jsbind::Undefined> Worklet::addModule(const jsbind::USVString& moduleURL, const WorkletOptions& options) {
    return emlite::Val::call("addModule", moduleURL, options).as<jsbind::Promise<jsbind::Undefined>>();
}

