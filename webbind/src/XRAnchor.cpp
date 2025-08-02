#include <webbind/XRAnchor.hpp>
#include <webbind/XRSpace.hpp>


XRAnchor XRAnchor::take_ownership(Handle h) noexcept {
        return XRAnchor(h);
    }
XRAnchor XRAnchor::clone() const noexcept { return *this; }
emlite::Val XRAnchor::instance() noexcept { return emlite::Val::global("XRAnchor"); }
XRAnchor::XRAnchor(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
XRAnchor::XRAnchor(const emlite::Val &val) noexcept: emlite::Val(val) {}


XRSpace XRAnchor::anchorSpace() const {
    return emlite::Val::get("anchorSpace").as<XRSpace>();
}

jsbind::Promise<jsbind::String> XRAnchor::requestPersistentHandle() {
    return emlite::Val::call("requestPersistentHandle").as<jsbind::Promise<jsbind::String>>();
}

jsbind::Undefined XRAnchor::delete_() {
    return emlite::Val::call("delete").as<jsbind::Undefined>();
}

