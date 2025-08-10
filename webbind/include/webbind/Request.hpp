#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "enums.hpp"

namespace webbind {

class RequestInit;
class Headers;
class AbortSignal;
class Request;
class ReadableStream;
class Blob;
class FormData;

/// Interface Request
/// [`Request`](https://developer.mozilla.org/en-US/docs/Web/API/Request)
class Request : public emlite::Val {
    explicit Request(Handle h) noexcept;
public:
    explicit Request(const emlite::Val &val) noexcept;
    static Request take_ownership(Handle h) noexcept;
    [[nodiscard]] Request clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new Request(..)` constructor, creating a new Request instance
    Request(const jsbind::Any& input);
    /// The `new Request(..)` constructor, creating a new Request instance
    Request(const jsbind::Any& input, const RequestInit& init);
    /// [`Request.method`](https://developer.mozilla.org/en-US/docs/Web/API/Request/method)
    /// [`Request.method`](https://developer.mozilla.org/en-US/docs/Web/API/Request/method)
    [[nodiscard]] jsbind::String method() const;
    /// [`Request.url`](https://developer.mozilla.org/en-US/docs/Web/API/Request/url)
    /// [`Request.url`](https://developer.mozilla.org/en-US/docs/Web/API/Request/url)
    [[nodiscard]] jsbind::String url() const;
    /// [`Request.headers`](https://developer.mozilla.org/en-US/docs/Web/API/Request/headers)
    /// [`Request.headers`](https://developer.mozilla.org/en-US/docs/Web/API/Request/headers)
    [[nodiscard]] Headers headers() const;
    /// [`Request.destination`](https://developer.mozilla.org/en-US/docs/Web/API/Request/destination)
    /// [`Request.destination`](https://developer.mozilla.org/en-US/docs/Web/API/Request/destination)
    [[nodiscard]] RequestDestination destination() const;
    /// [`Request.referrer`](https://developer.mozilla.org/en-US/docs/Web/API/Request/referrer)
    /// [`Request.referrer`](https://developer.mozilla.org/en-US/docs/Web/API/Request/referrer)
    [[nodiscard]] jsbind::String referrer() const;
    /// [`Request.referrerPolicy`](https://developer.mozilla.org/en-US/docs/Web/API/Request/referrerPolicy)
    /// [`Request.referrerPolicy`](https://developer.mozilla.org/en-US/docs/Web/API/Request/referrerPolicy)
    [[nodiscard]] ReferrerPolicy referrerPolicy() const;
    /// [`Request.mode`](https://developer.mozilla.org/en-US/docs/Web/API/Request/mode)
    /// [`Request.mode`](https://developer.mozilla.org/en-US/docs/Web/API/Request/mode)
    [[nodiscard]] RequestMode mode() const;
    /// [`Request.credentials`](https://developer.mozilla.org/en-US/docs/Web/API/Request/credentials)
    /// [`Request.credentials`](https://developer.mozilla.org/en-US/docs/Web/API/Request/credentials)
    [[nodiscard]] RequestCredentials credentials() const;
    /// [`Request.cache`](https://developer.mozilla.org/en-US/docs/Web/API/Request/cache)
    /// [`Request.cache`](https://developer.mozilla.org/en-US/docs/Web/API/Request/cache)
    [[nodiscard]] RequestCache cache() const;
    /// [`Request.redirect`](https://developer.mozilla.org/en-US/docs/Web/API/Request/redirect)
    /// [`Request.redirect`](https://developer.mozilla.org/en-US/docs/Web/API/Request/redirect)
    [[nodiscard]] RequestRedirect redirect() const;
    /// [`Request.integrity`](https://developer.mozilla.org/en-US/docs/Web/API/Request/integrity)
    /// [`Request.integrity`](https://developer.mozilla.org/en-US/docs/Web/API/Request/integrity)
    [[nodiscard]] jsbind::String integrity() const;
    /// [`Request.keepalive`](https://developer.mozilla.org/en-US/docs/Web/API/Request/keepalive)
    /// [`Request.keepalive`](https://developer.mozilla.org/en-US/docs/Web/API/Request/keepalive)
    [[nodiscard]] bool keepalive() const;
    /// [`Request.isReloadNavigation`](https://developer.mozilla.org/en-US/docs/Web/API/Request/isReloadNavigation)
    /// [`Request.isReloadNavigation`](https://developer.mozilla.org/en-US/docs/Web/API/Request/isReloadNavigation)
    [[nodiscard]] bool isReloadNavigation() const;
    /// [`Request.isHistoryNavigation`](https://developer.mozilla.org/en-US/docs/Web/API/Request/isHistoryNavigation)
    /// [`Request.isHistoryNavigation`](https://developer.mozilla.org/en-US/docs/Web/API/Request/isHistoryNavigation)
    [[nodiscard]] bool isHistoryNavigation() const;
    /// [`Request.signal`](https://developer.mozilla.org/en-US/docs/Web/API/Request/signal)
    /// [`Request.signal`](https://developer.mozilla.org/en-US/docs/Web/API/Request/signal)
    [[nodiscard]] AbortSignal signal() const;
    /// [`Request.duplex`](https://developer.mozilla.org/en-US/docs/Web/API/Request/duplex)
    /// [`Request.duplex`](https://developer.mozilla.org/en-US/docs/Web/API/Request/duplex)
    [[nodiscard]] RequestDuplex duplex() const;
    /// The clone method.
    /// [`Request.clone`](https://developer.mozilla.org/en-US/docs/Web/API/Request/clone)
    Request clone();
    /// [`Request.targetAddressSpace`](https://developer.mozilla.org/en-US/docs/Web/API/Request/targetAddressSpace)
    /// [`Request.targetAddressSpace`](https://developer.mozilla.org/en-US/docs/Web/API/Request/targetAddressSpace)
    [[nodiscard]] IPAddressSpace targetAddressSpace() const;
    /// [`Request.body`](https://developer.mozilla.org/en-US/docs/Web/API/Request/body)
    /// [`Request.body`](https://developer.mozilla.org/en-US/docs/Web/API/Request/body)
    [[nodiscard]] ReadableStream body() const;
    /// [`Request.bodyUsed`](https://developer.mozilla.org/en-US/docs/Web/API/Request/bodyUsed)
    /// [`Request.bodyUsed`](https://developer.mozilla.org/en-US/docs/Web/API/Request/bodyUsed)
    [[nodiscard]] bool bodyUsed() const;
    /// The arrayBuffer method.
    /// [`Request.arrayBuffer`](https://developer.mozilla.org/en-US/docs/Web/API/Request/arrayBuffer)
    jsbind::Promise<jsbind::ArrayBuffer> arrayBuffer();
    /// The blob method.
    /// [`Request.blob`](https://developer.mozilla.org/en-US/docs/Web/API/Request/blob)
    jsbind::Promise<Blob> blob();
    /// The bytes method.
    /// [`Request.bytes`](https://developer.mozilla.org/en-US/docs/Web/API/Request/bytes)
    jsbind::Promise<jsbind::Uint8Array> bytes();
    /// The formData method.
    /// [`Request.formData`](https://developer.mozilla.org/en-US/docs/Web/API/Request/formData)
    jsbind::Promise<FormData> formData();
    /// The json method.
    /// [`Request.json`](https://developer.mozilla.org/en-US/docs/Web/API/Request/json)
    jsbind::Promise<jsbind::Any> json();
    /// The text method.
    /// [`Request.text`](https://developer.mozilla.org/en-US/docs/Web/API/Request/text)
    jsbind::Promise<jsbind::String> text();
};

} // namespace webbind