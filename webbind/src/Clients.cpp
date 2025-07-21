#include <webbind/Clients.hpp>
#include <webbind/Client.hpp>
#include <webbind/WindowClient.hpp>


ClientQueryOptions::ClientQueryOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
ClientQueryOptions ClientQueryOptions::take_ownership(Handle h) noexcept {
        return ClientQueryOptions(h);
    }
ClientQueryOptions::ClientQueryOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
ClientQueryOptions::ClientQueryOptions() noexcept: emlite::Val(emlite::Val::object()) {}
ClientQueryOptions ClientQueryOptions::clone() const noexcept { return *this; }

bool ClientQueryOptions::includeUncontrolled() const {
    return emlite::Val::get("includeUncontrolled").as<bool>();
}

void ClientQueryOptions::includeUncontrolled(bool value) {
    emlite::Val::set("includeUncontrolled", value);
}

ClientType ClientQueryOptions::type() const {
    return emlite::Val::get("type").as<ClientType>();
}

void ClientQueryOptions::type(const ClientType& value) {
    emlite::Val::set("type", value);
}

Clients Clients::take_ownership(Handle h) noexcept {
        return Clients(h);
    }
Clients Clients::clone() const noexcept { return *this; }
Clients::Clients(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
Clients::Clients(const emlite::Val &val) noexcept: emlite::Val(val) {}


jsbind::Promise<jsbind::Any> Clients::get(const jsbind::DOMString& id) {
    return emlite::Val::call("get", id).as<jsbind::Promise<jsbind::Any>>();
}

jsbind::Promise<jsbind::FrozenArray<Client>> Clients::matchAll() {
    return emlite::Val::call("matchAll").as<jsbind::Promise<jsbind::FrozenArray<Client>>>();
}

jsbind::Promise<jsbind::FrozenArray<Client>> Clients::matchAll(const ClientQueryOptions& options) {
    return emlite::Val::call("matchAll", options).as<jsbind::Promise<jsbind::FrozenArray<Client>>>();
}

jsbind::Promise<WindowClient> Clients::openWindow(const jsbind::USVString& url) {
    return emlite::Val::call("openWindow", url).as<jsbind::Promise<WindowClient>>();
}

jsbind::Promise<jsbind::Undefined> Clients::claim() {
    return emlite::Val::call("claim").as<jsbind::Promise<jsbind::Undefined>>();
}

