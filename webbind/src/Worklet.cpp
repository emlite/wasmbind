#include <webbind/Worklet.hpp>
#include <webbind/WorkletOptions.hpp>

namespace webbind {

Worklet Worklet::take_ownership(Handle h) noexcept {
    return Worklet(h);
}

Worklet Worklet::clone() const noexcept { return *this; }

emlite::Val Worklet::instance() noexcept { return emlite::Val::global("Worklet"); }

Worklet::Worklet(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}

Worklet::Worklet(const emlite::Val &val) noexcept: emlite::Val(val) {}

jsbind::Promise<jsbind::Undefined> Worklet::addModule(const jsbind::String& moduleURL) {
    return emlite::Val::call("addModule", moduleURL).as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Promise<jsbind::Undefined> Worklet::addModule(const jsbind::String& moduleURL, const WorkletOptions& options) {
    return emlite::Val::call("addModule", moduleURL, options).as<jsbind::Promise<jsbind::Undefined>>();
}


} // namespace webbind