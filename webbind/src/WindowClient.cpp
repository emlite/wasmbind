#include <webbind/WindowClient.hpp>
#include <webbind/WindowClient.hpp>

namespace webbind {

WindowClient WindowClient::take_ownership(Handle h) noexcept {
        return WindowClient(h);
    }
WindowClient WindowClient::clone() const noexcept { return *this; }
emlite::Val WindowClient::instance() noexcept { return emlite::Val::global("WindowClient"); }
WindowClient::WindowClient(Handle h) noexcept : Client(emlite::Val::take_ownership(h)) {}
WindowClient::WindowClient(const emlite::Val &val) noexcept: Client(val) {}

DocumentVisibilityState WindowClient::visibilityState() const {
    return Client::get("visibilityState").as<DocumentVisibilityState>();
}

bool WindowClient::focused() const {
    return Client::get("focused").as<bool>();
}

jsbind::TypedArray<jsbind::String> WindowClient::ancestorOrigins() const {
    return Client::get("ancestorOrigins").as<jsbind::TypedArray<jsbind::String>>();
}

jsbind::Promise<WindowClient> WindowClient::focus() {
    return Client::call("focus").as<jsbind::Promise<WindowClient>>();
}

jsbind::Promise<WindowClient> WindowClient::navigate(const jsbind::String& url) {
    return Client::call("navigate", url).as<jsbind::Promise<WindowClient>>();
}


} // namespace webbind