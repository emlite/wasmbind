#include <webbind/Headers.hpp>


Headers Headers::take_ownership(Handle h) noexcept {
        return Headers(h);
    }
Headers Headers::clone() const noexcept { return *this; }
Headers::Headers(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
Headers::Headers(const emlite::Val &val) noexcept: emlite::Val(val) {}


Headers::Headers() : emlite::Val(emlite::Val::global("Headers").new_()) {}

Headers::Headers(const jsbind::Any& init) : emlite::Val(emlite::Val::global("Headers").new_(init)) {}

jsbind::Undefined Headers::append(const jsbind::ByteString& name, const jsbind::ByteString& value) {
    return emlite::Val::call("append", name, value).as<jsbind::Undefined>();
}

jsbind::Undefined Headers::delete_(const jsbind::ByteString& name) {
    return emlite::Val::call("delete", name).as<jsbind::Undefined>();
}

jsbind::ByteString Headers::get(const jsbind::ByteString& name) {
    return emlite::Val::call("get", name).as<jsbind::ByteString>();
}

jsbind::Sequence<jsbind::ByteString> Headers::getSetCookie() {
    return emlite::Val::call("getSetCookie").as<jsbind::Sequence<jsbind::ByteString>>();
}

bool Headers::has(const jsbind::ByteString& name) {
    return emlite::Val::call("has", name).as<bool>();
}

jsbind::Undefined Headers::set(const jsbind::ByteString& name, const jsbind::ByteString& value) {
    return emlite::Val::call("set", name, value).as<jsbind::Undefined>();
}

