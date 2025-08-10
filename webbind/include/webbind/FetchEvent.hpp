#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "ExtendableEvent.hpp"
#include "FetchEventInit.hpp"

namespace webbind {

class Request;
class Response;

/// Interface FetchEvent
/// [`FetchEvent`](https://developer.mozilla.org/en-US/docs/Web/API/FetchEvent)
class FetchEvent : public ExtendableEvent {
    explicit FetchEvent(Handle h) noexcept;
public:
    explicit FetchEvent(const emlite::Val &val) noexcept;
    static FetchEvent take_ownership(Handle h) noexcept;
    [[nodiscard]] FetchEvent clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new FetchEvent(..)` constructor, creating a new FetchEvent instance
    FetchEvent(const jsbind::String& type, const FetchEventInit& eventInitDict);
    /// [`FetchEvent.request`](https://developer.mozilla.org/en-US/docs/Web/API/FetchEvent/request)
    /// [`FetchEvent.request`](https://developer.mozilla.org/en-US/docs/Web/API/FetchEvent/request)
    [[nodiscard]] Request request() const;
    /// [`FetchEvent.preloadResponse`](https://developer.mozilla.org/en-US/docs/Web/API/FetchEvent/preloadResponse)
    /// [`FetchEvent.preloadResponse`](https://developer.mozilla.org/en-US/docs/Web/API/FetchEvent/preloadResponse)
    [[nodiscard]] jsbind::Promise<jsbind::Any> preloadResponse() const;
    /// [`FetchEvent.clientId`](https://developer.mozilla.org/en-US/docs/Web/API/FetchEvent/clientId)
    /// [`FetchEvent.clientId`](https://developer.mozilla.org/en-US/docs/Web/API/FetchEvent/clientId)
    [[nodiscard]] jsbind::String clientId() const;
    /// [`FetchEvent.resultingClientId`](https://developer.mozilla.org/en-US/docs/Web/API/FetchEvent/resultingClientId)
    /// [`FetchEvent.resultingClientId`](https://developer.mozilla.org/en-US/docs/Web/API/FetchEvent/resultingClientId)
    [[nodiscard]] jsbind::String resultingClientId() const;
    /// [`FetchEvent.replacesClientId`](https://developer.mozilla.org/en-US/docs/Web/API/FetchEvent/replacesClientId)
    /// [`FetchEvent.replacesClientId`](https://developer.mozilla.org/en-US/docs/Web/API/FetchEvent/replacesClientId)
    [[nodiscard]] jsbind::String replacesClientId() const;
    /// [`FetchEvent.handled`](https://developer.mozilla.org/en-US/docs/Web/API/FetchEvent/handled)
    /// [`FetchEvent.handled`](https://developer.mozilla.org/en-US/docs/Web/API/FetchEvent/handled)
    [[nodiscard]] jsbind::Promise<jsbind::Undefined> handled() const;
    /// The respondWith method.
    /// [`FetchEvent.respondWith`](https://developer.mozilla.org/en-US/docs/Web/API/FetchEvent/respondWith)
    jsbind::Undefined respondWith(const jsbind::Promise<Response>& r);
};

} // namespace webbind