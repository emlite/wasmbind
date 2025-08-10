#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventTarget.hpp"
#include "enums.hpp"

namespace webbind {

/// Interface WebSocket
/// [`WebSocket`](https://developer.mozilla.org/en-US/docs/Web/API/WebSocket)
class WebSocket : public EventTarget {
    explicit WebSocket(Handle h) noexcept;
public:
    explicit WebSocket(const emlite::Val &val) noexcept;
    static WebSocket take_ownership(Handle h) noexcept;
    [[nodiscard]] WebSocket clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new WebSocket(..)` constructor, creating a new WebSocket instance
    WebSocket(const jsbind::String& url);
    /// The `new WebSocket(..)` constructor, creating a new WebSocket instance
    WebSocket(const jsbind::String& url, const jsbind::Any& protocols);
    /// [`WebSocket.url`](https://developer.mozilla.org/en-US/docs/Web/API/WebSocket/url)
    /// [`WebSocket.url`](https://developer.mozilla.org/en-US/docs/Web/API/WebSocket/url)
    [[nodiscard]] jsbind::String url() const;
    /// [`WebSocket.readyState`](https://developer.mozilla.org/en-US/docs/Web/API/WebSocket/readyState)
    /// [`WebSocket.readyState`](https://developer.mozilla.org/en-US/docs/Web/API/WebSocket/readyState)
    [[nodiscard]] unsigned short readyState() const;
    /// [`WebSocket.bufferedAmount`](https://developer.mozilla.org/en-US/docs/Web/API/WebSocket/bufferedAmount)
    /// [`WebSocket.bufferedAmount`](https://developer.mozilla.org/en-US/docs/Web/API/WebSocket/bufferedAmount)
    [[nodiscard]] long long bufferedAmount() const;
    /// [`WebSocket.onopen`](https://developer.mozilla.org/en-US/docs/Web/API/WebSocket/onopen)
    /// [`WebSocket.onopen`](https://developer.mozilla.org/en-US/docs/Web/API/WebSocket/onopen)
    [[nodiscard]] jsbind::Any onopen() const;
    /// Setter of the `onopen` attribute.
    /// [`WebSocket.onopen`](https://developer.mozilla.org/en-US/docs/Web/API/WebSocket/onopen)
    void onopen(const jsbind::Any& value);
    /// [`WebSocket.onerror`](https://developer.mozilla.org/en-US/docs/Web/API/WebSocket/onerror)
    /// [`WebSocket.onerror`](https://developer.mozilla.org/en-US/docs/Web/API/WebSocket/onerror)
    [[nodiscard]] jsbind::Any onerror() const;
    /// Setter of the `onerror` attribute.
    /// [`WebSocket.onerror`](https://developer.mozilla.org/en-US/docs/Web/API/WebSocket/onerror)
    void onerror(const jsbind::Any& value);
    /// [`WebSocket.onclose`](https://developer.mozilla.org/en-US/docs/Web/API/WebSocket/onclose)
    /// [`WebSocket.onclose`](https://developer.mozilla.org/en-US/docs/Web/API/WebSocket/onclose)
    [[nodiscard]] jsbind::Any onclose() const;
    /// Setter of the `onclose` attribute.
    /// [`WebSocket.onclose`](https://developer.mozilla.org/en-US/docs/Web/API/WebSocket/onclose)
    void onclose(const jsbind::Any& value);
    /// [`WebSocket.extensions`](https://developer.mozilla.org/en-US/docs/Web/API/WebSocket/extensions)
    /// [`WebSocket.extensions`](https://developer.mozilla.org/en-US/docs/Web/API/WebSocket/extensions)
    [[nodiscard]] jsbind::String extensions() const;
    /// [`WebSocket.protocol`](https://developer.mozilla.org/en-US/docs/Web/API/WebSocket/protocol)
    /// [`WebSocket.protocol`](https://developer.mozilla.org/en-US/docs/Web/API/WebSocket/protocol)
    [[nodiscard]] jsbind::String protocol() const;
    /// The close method.
    /// [`WebSocket.close`](https://developer.mozilla.org/en-US/docs/Web/API/WebSocket/close)
    jsbind::Undefined close();
    /// The close method.
    /// [`WebSocket.close`](https://developer.mozilla.org/en-US/docs/Web/API/WebSocket/close)
    jsbind::Undefined close(unsigned short code);
    /// The close method.
    /// [`WebSocket.close`](https://developer.mozilla.org/en-US/docs/Web/API/WebSocket/close)
    jsbind::Undefined close(unsigned short code, const jsbind::String& reason);
    /// [`WebSocket.onmessage`](https://developer.mozilla.org/en-US/docs/Web/API/WebSocket/onmessage)
    /// [`WebSocket.onmessage`](https://developer.mozilla.org/en-US/docs/Web/API/WebSocket/onmessage)
    [[nodiscard]] jsbind::Any onmessage() const;
    /// Setter of the `onmessage` attribute.
    /// [`WebSocket.onmessage`](https://developer.mozilla.org/en-US/docs/Web/API/WebSocket/onmessage)
    void onmessage(const jsbind::Any& value);
    /// [`WebSocket.binaryType`](https://developer.mozilla.org/en-US/docs/Web/API/WebSocket/binaryType)
    /// [`WebSocket.binaryType`](https://developer.mozilla.org/en-US/docs/Web/API/WebSocket/binaryType)
    [[nodiscard]] BinaryType binaryType() const;
    /// Setter of the `binaryType` attribute.
    /// [`WebSocket.binaryType`](https://developer.mozilla.org/en-US/docs/Web/API/WebSocket/binaryType)
    void binaryType(const BinaryType& value);
    /// The send method.
    /// [`WebSocket.send`](https://developer.mozilla.org/en-US/docs/Web/API/WebSocket/send)
    jsbind::Undefined send(const jsbind::Any& data);
};

} // namespace webbind