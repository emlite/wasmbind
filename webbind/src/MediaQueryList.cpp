#include <webbind/MediaQueryList.hpp>


MediaQueryList MediaQueryList::take_ownership(Handle h) noexcept {
        return MediaQueryList(h);
    }
MediaQueryList MediaQueryList::clone() const noexcept { return *this; }
emlite::Val MediaQueryList::instance() noexcept { return emlite::Val::global("MediaQueryList"); }
MediaQueryList::MediaQueryList(Handle h) noexcept : EventTarget(emlite::Val::take_ownership(h)) {}
MediaQueryList::MediaQueryList(const emlite::Val &val) noexcept: EventTarget(val) {}


jsbind::String MediaQueryList::media() const {
    return EventTarget::get("media").as<jsbind::String>();
}

bool MediaQueryList::matches() const {
    return EventTarget::get("matches").as<bool>();
}

jsbind::Undefined MediaQueryList::addListener(const jsbind::Function& callback) {
    return EventTarget::call("addListener", callback).as<jsbind::Undefined>();
}

jsbind::Undefined MediaQueryList::removeListener(const jsbind::Function& callback) {
    return EventTarget::call("removeListener", callback).as<jsbind::Undefined>();
}

jsbind::Any MediaQueryList::onchange() const {
    return EventTarget::get("onchange").as<jsbind::Any>();
}

void MediaQueryList::onchange(const jsbind::Any& value) {
    EventTarget::set("onchange", value);
}

