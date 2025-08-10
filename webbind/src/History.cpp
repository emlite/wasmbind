#include <webbind/History.hpp>

namespace webbind {

History History::take_ownership(Handle h) noexcept {
    return History(h);
}

History History::clone() const noexcept { return *this; }

emlite::Val History::instance() noexcept { return emlite::Val::global("History"); }

History::History(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}

History::History(const emlite::Val &val) noexcept: emlite::Val(val) {}

unsigned long History::length() const {
    return emlite::Val::get("length").as<unsigned long>();
}

ScrollRestoration History::scrollRestoration() const {
    return emlite::Val::get("scrollRestoration").as<ScrollRestoration>();
}

void History::scrollRestoration(const ScrollRestoration& value) {
    emlite::Val::set("scrollRestoration", value);
}

jsbind::Any History::state() const {
    return emlite::Val::get("state").as<jsbind::Any>();
}

jsbind::Undefined History::go() {
    return emlite::Val::call("go").as<jsbind::Undefined>();
}

jsbind::Undefined History::go(long delta) {
    return emlite::Val::call("go", delta).as<jsbind::Undefined>();
}

jsbind::Undefined History::back() {
    return emlite::Val::call("back").as<jsbind::Undefined>();
}

jsbind::Undefined History::forward() {
    return emlite::Val::call("forward").as<jsbind::Undefined>();
}

jsbind::Undefined History::pushState(const jsbind::Any& data, const jsbind::String& unused) {
    return emlite::Val::call("pushState", data, unused).as<jsbind::Undefined>();
}

jsbind::Undefined History::pushState(const jsbind::Any& data, const jsbind::String& unused, const jsbind::String& url) {
    return emlite::Val::call("pushState", data, unused, url).as<jsbind::Undefined>();
}

jsbind::Undefined History::replaceState(const jsbind::Any& data, const jsbind::String& unused) {
    return emlite::Val::call("replaceState", data, unused).as<jsbind::Undefined>();
}

jsbind::Undefined History::replaceState(const jsbind::Any& data, const jsbind::String& unused, const jsbind::String& url) {
    return emlite::Val::call("replaceState", data, unused, url).as<jsbind::Undefined>();
}


} // namespace webbind