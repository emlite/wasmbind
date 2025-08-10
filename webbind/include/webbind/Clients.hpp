#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class Client;
class ClientQueryOptions;
class WindowClient;

/// Interface Clients
/// [`Clients`](https://developer.mozilla.org/en-US/docs/Web/API/Clients)
class Clients : public emlite::Val {
    explicit Clients(Handle h) noexcept;
public:
    explicit Clients(const emlite::Val &val) noexcept;
    static Clients take_ownership(Handle h) noexcept;
    [[nodiscard]] Clients clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The get method.
    /// [`Clients.get`](https://developer.mozilla.org/en-US/docs/Web/API/Clients/get)
    jsbind::Promise<jsbind::Any> get(const jsbind::String& id);
    /// The matchAll method.
    /// [`Clients.matchAll`](https://developer.mozilla.org/en-US/docs/Web/API/Clients/matchAll)
    jsbind::Promise<jsbind::TypedArray<Client>> matchAll();
    /// The matchAll method.
    /// [`Clients.matchAll`](https://developer.mozilla.org/en-US/docs/Web/API/Clients/matchAll)
    jsbind::Promise<jsbind::TypedArray<Client>> matchAll(const ClientQueryOptions& options);
    /// The openWindow method.
    /// [`Clients.openWindow`](https://developer.mozilla.org/en-US/docs/Web/API/Clients/openWindow)
    jsbind::Promise<WindowClient> openWindow(const jsbind::String& url);
    /// The claim method.
    /// [`Clients.claim`](https://developer.mozilla.org/en-US/docs/Web/API/Clients/claim)
    jsbind::Promise<jsbind::Undefined> claim();
};

} // namespace webbind