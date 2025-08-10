#include <webbind/Headers.hpp>

namespace webbind {

Headers Headers::take_ownership(Handle h) noexcept {
        return Headers(h);
    }
Headers Headers::clone() const noexcept { return *this; }
emlite::Val Headers::instance() noexcept { return emlite::Val::global("Headers"); }
Headers::Headers(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
Headers::Headers(const emlite::Val &val) noexcept: emlite::Val(val) {}

Headers::Headers() : emlite::Val(emlite::Val::global("Headers").new_()) {}

Headers::Headers(const jsbind::Any& init) : emlite::Val(emlite::Val::global("Headers").new_(init)) {}

jsbind::Undefined Headers::append(const jsbind::String& name, const jsbind::String& value) {
    return emlite::Val::call("append", name, value).as<jsbind::Undefined>();
}

jsbind::Undefined Headers::delete_(const jsbind::String& name) {
    return emlite::Val::call("delete", name).as<jsbind::Undefined>();
}

jsbind::String Headers::get(const jsbind::String& name) {
    return emlite::Val::call("get", name).as<jsbind::String>();
}

jsbind::TypedArray<jsbind::String> Headers::getSetCookie() {
    return emlite::Val::call("getSetCookie").as<jsbind::TypedArray<jsbind::String>>();
}

bool Headers::has(const jsbind::String& name) {
    return emlite::Val::call("has", name).as<bool>();
}

jsbind::Undefined Headers::set(const jsbind::String& name, const jsbind::String& value) {
    return emlite::Val::call("set", name, value).as<jsbind::Undefined>();
}


} // namespace webbind