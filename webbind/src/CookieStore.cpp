#include <webbind/CookieStore.hpp>
#include <webbind/CookieListItem.hpp>
#include <webbind/CookieStoreGetOptions.hpp>
#include <webbind/CookieInit.hpp>
#include <webbind/CookieStoreDeleteOptions.hpp>

namespace webbind {

CookieStore CookieStore::take_ownership(Handle h) noexcept {
    return CookieStore(h);
}

CookieStore CookieStore::clone() const noexcept { return *this; }

emlite::Val CookieStore::instance() noexcept { return emlite::Val::global("CookieStore"); }

CookieStore::CookieStore(Handle h) noexcept : EventTarget(emlite::Val::take_ownership(h)) {}

CookieStore::CookieStore(const emlite::Val &val) noexcept: EventTarget(val) {}

jsbind::Promise<CookieListItem> CookieStore::get(const jsbind::String& name) {
    return EventTarget::call("get", name).as<jsbind::Promise<CookieListItem>>();
}

jsbind::Promise<CookieListItem> CookieStore::get() {
    return EventTarget::call("get").as<jsbind::Promise<CookieListItem>>();
}

jsbind::Promise<CookieListItem> CookieStore::get(const CookieStoreGetOptions& options) {
    return EventTarget::call("get", options).as<jsbind::Promise<CookieListItem>>();
}

jsbind::Promise<jsbind::Any> CookieStore::getAll(const jsbind::String& name) {
    return EventTarget::call("getAll", name).as<jsbind::Promise<jsbind::Any>>();
}

jsbind::Promise<jsbind::Any> CookieStore::getAll() {
    return EventTarget::call("getAll").as<jsbind::Promise<jsbind::Any>>();
}

jsbind::Promise<jsbind::Any> CookieStore::getAll(const CookieStoreGetOptions& options) {
    return EventTarget::call("getAll", options).as<jsbind::Promise<jsbind::Any>>();
}

jsbind::Promise<jsbind::Undefined> CookieStore::set(const jsbind::String& name, const jsbind::String& value) {
    return EventTarget::call("set", name, value).as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Promise<jsbind::Undefined> CookieStore::set(const CookieInit& options) {
    return EventTarget::call("set", options).as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Promise<jsbind::Undefined> CookieStore::delete_(const jsbind::String& name) {
    return EventTarget::call("delete", name).as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Promise<jsbind::Undefined> CookieStore::delete_(const CookieStoreDeleteOptions& options) {
    return EventTarget::call("delete", options).as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Any CookieStore::onchange() const {
    return EventTarget::get("onchange").as<jsbind::Any>();
}

void CookieStore::onchange(const jsbind::Any& value) {
    EventTarget::set("onchange", value);
}


} // namespace webbind