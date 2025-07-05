#include <webbind/URLSearchParams.hpp>


URLSearchParams URLSearchParams::take_ownership(Handle h) noexcept {
        return URLSearchParams(h);
    }
URLSearchParams URLSearchParams::clone() const noexcept { return *this; }
URLSearchParams::URLSearchParams(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
URLSearchParams::URLSearchParams(const emlite::Val &val) noexcept: emlite::Val(val) {}


URLSearchParams::URLSearchParams() : emlite::Val(emlite::Val::global("URLSearchParams").new_()) {}

URLSearchParams::URLSearchParams(const jsbind::Any& init) : emlite::Val(emlite::Val::global("URLSearchParams").new_(init)) {}

unsigned long URLSearchParams::size() const {
    return emlite::Val::get("size").as<unsigned long>();
}

jsbind::Undefined URLSearchParams::append(const jsbind::USVString& name, const jsbind::USVString& value) {
    return emlite::Val::call("append", name, value).as<jsbind::Undefined>();
}

jsbind::Undefined URLSearchParams::delete_(const jsbind::USVString& name) {
    return emlite::Val::call("delete", name).as<jsbind::Undefined>();
}

jsbind::Undefined URLSearchParams::delete_(const jsbind::USVString& name, const jsbind::USVString& value) {
    return emlite::Val::call("delete", name, value).as<jsbind::Undefined>();
}

jsbind::USVString URLSearchParams::get(const jsbind::USVString& name) {
    return emlite::Val::call("get", name).as<jsbind::USVString>();
}

jsbind::Sequence<jsbind::USVString> URLSearchParams::getAll(const jsbind::USVString& name) {
    return emlite::Val::call("getAll", name).as<jsbind::Sequence<jsbind::USVString>>();
}

bool URLSearchParams::has(const jsbind::USVString& name) {
    return emlite::Val::call("has", name).as<bool>();
}

bool URLSearchParams::has(const jsbind::USVString& name, const jsbind::USVString& value) {
    return emlite::Val::call("has", name, value).as<bool>();
}

jsbind::Undefined URLSearchParams::set(const jsbind::USVString& name, const jsbind::USVString& value) {
    return emlite::Val::call("set", name, value).as<jsbind::Undefined>();
}

jsbind::Undefined URLSearchParams::sort() {
    return emlite::Val::call("sort").as<jsbind::Undefined>();
}

