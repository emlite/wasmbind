#include <webbind/External.hpp>


External External::take_ownership(Handle h) noexcept {
        return External(h);
    }
External External::clone() const noexcept { return *this; }
emlite::Val External::instance() noexcept { return emlite::Val::global("External"); }
External::External(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
External::External(const emlite::Val &val) noexcept: emlite::Val(val) {}


jsbind::Undefined External::AddSearchProvider() {
    return emlite::Val::call("AddSearchProvider").as<jsbind::Undefined>();
}

jsbind::Undefined External::IsSearchProviderInstalled() {
    return emlite::Val::call("IsSearchProviderInstalled").as<jsbind::Undefined>();
}

