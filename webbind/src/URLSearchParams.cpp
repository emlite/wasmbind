#include <webbind/URLSearchParams.hpp>

namespace webbind {

URLSearchParams URLSearchParams::take_ownership(Handle h) noexcept {
    return URLSearchParams(h);
}

URLSearchParams URLSearchParams::clone() const noexcept { return *this; }

emlite::Val URLSearchParams::instance() noexcept { return emlite::Val::global("URLSearchParams"); }

URLSearchParams::URLSearchParams(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}

URLSearchParams::URLSearchParams(const emlite::Val &val) noexcept: emlite::Val(val) {}

URLSearchParams::URLSearchParams() : emlite::Val(emlite::Val::global("URLSearchParams").new_()) {}

URLSearchParams::URLSearchParams(const jsbind::Any& init) : emlite::Val(emlite::Val::global("URLSearchParams").new_(init)) {}

unsigned long URLSearchParams::size() const {
    return emlite::Val::get("size").as<unsigned long>();
}

jsbind::Undefined URLSearchParams::append(const jsbind::String& name, const jsbind::String& value) {
    return emlite::Val::call("append", name, value).as<jsbind::Undefined>();
}

jsbind::Undefined URLSearchParams::delete_(const jsbind::String& name) {
    return emlite::Val::call("delete", name).as<jsbind::Undefined>();
}

jsbind::Undefined URLSearchParams::delete_(const jsbind::String& name, const jsbind::String& value) {
    return emlite::Val::call("delete", name, value).as<jsbind::Undefined>();
}

jsbind::String URLSearchParams::get(const jsbind::String& name) {
    return emlite::Val::call("get", name).as<jsbind::String>();
}

jsbind::TypedArray<jsbind::String> URLSearchParams::getAll(const jsbind::String& name) {
    return emlite::Val::call("getAll", name).as<jsbind::TypedArray<jsbind::String>>();
}

bool URLSearchParams::has(const jsbind::String& name) {
    return emlite::Val::call("has", name).as<bool>();
}

bool URLSearchParams::has(const jsbind::String& name, const jsbind::String& value) {
    return emlite::Val::call("has", name, value).as<bool>();
}

jsbind::Undefined URLSearchParams::set(const jsbind::String& name, const jsbind::String& value) {
    return emlite::Val::call("set", name, value).as<jsbind::Undefined>();
}

jsbind::Undefined URLSearchParams::sort() {
    return emlite::Val::call("sort").as<jsbind::Undefined>();
}


} // namespace webbind