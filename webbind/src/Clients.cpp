#include "webbind/Clients.hpp"
#include "webbind/Client.hpp"
#include "webbind/ClientQueryOptions.hpp"
#include "webbind/WindowClient.hpp"

namespace webbind {

Clients Clients::take_ownership(Handle h) noexcept {
        return Clients(h);
    }
Clients Clients::clone() const noexcept { return *this; }
emlite::Val Clients::instance() noexcept { return emlite::Val::global("Clients"); }
Clients::Clients(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
Clients::Clients(const emlite::Val &val) noexcept: emlite::Val(val) {}

jsbind::Promise<jsbind::Any> Clients::get(const jsbind::String& id) {
    return emlite::Val::call("get", id).as<jsbind::Promise<jsbind::Any>>();
}

jsbind::Promise<jsbind::TypedArray<Client>> Clients::matchAll() {
    return emlite::Val::call("matchAll").as<jsbind::Promise<jsbind::TypedArray<Client>>>();
}

jsbind::Promise<jsbind::TypedArray<Client>> Clients::matchAll(const ClientQueryOptions& options) {
    return emlite::Val::call("matchAll", options).as<jsbind::Promise<jsbind::TypedArray<Client>>>();
}

jsbind::Promise<WindowClient> Clients::openWindow(const jsbind::String& url) {
    return emlite::Val::call("openWindow", url).as<jsbind::Promise<WindowClient>>();
}

jsbind::Promise<jsbind::Undefined> Clients::claim() {
    return emlite::Val::call("claim").as<jsbind::Promise<jsbind::Undefined>>();
}


} // namespace webbind