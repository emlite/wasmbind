#include "webbind/NavigationDestination.hpp"

namespace webbind {

NavigationDestination NavigationDestination::take_ownership(Handle h) noexcept {
        return NavigationDestination(h);
    }
NavigationDestination NavigationDestination::clone() const noexcept { return *this; }
emlite::Val NavigationDestination::instance() noexcept { return emlite::Val::global("NavigationDestination"); }
NavigationDestination::NavigationDestination(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
NavigationDestination::NavigationDestination(const emlite::Val &val) noexcept: emlite::Val(val) {}

jsbind::String NavigationDestination::url() const {
    return emlite::Val::get("url").as<jsbind::String>();
}

jsbind::String NavigationDestination::key() const {
    return emlite::Val::get("key").as<jsbind::String>();
}

jsbind::String NavigationDestination::id() const {
    return emlite::Val::get("id").as<jsbind::String>();
}

long long NavigationDestination::index() const {
    return emlite::Val::get("index").as<long long>();
}

bool NavigationDestination::sameDocument() const {
    return emlite::Val::get("sameDocument").as<bool>();
}

jsbind::Any NavigationDestination::getState() {
    return emlite::Val::call("getState").as<jsbind::Any>();
}


} // namespace webbind