#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class Headers;
class AbortSignal;
class Request;
class ReadableStream;
class Blob;
class FormData;


/// The Request class.
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
    Request(const jsbind::Any& input, const jsbind::Any& init);
    /// Getter of the `method` attribute.
    /// [`Request.method`](https://developer.mozilla.org/en-US/docs/Web/API/Request/method)
    [[nodiscard]] jsbind::String method() const;
    /// Getter of the `url` attribute.
    /// [`Request.url`](https://developer.mozilla.org/en-US/docs/Web/API/Request/url)
    [[nodiscard]] jsbind::String url() const;
    /// Getter of the `headers` attribute.
    /// [`Request.headers`](https://developer.mozilla.org/en-US/docs/Web/API/Request/headers)
    [[nodiscard]] Headers headers() const;
    /// Getter of the `destination` attribute.
    /// [`Request.destination`](https://developer.mozilla.org/en-US/docs/Web/API/Request/destination)
    [[nodiscard]] RequestDestination destination() const;
    /// Getter of the `referrer` attribute.
    /// [`Request.referrer`](https://developer.mozilla.org/en-US/docs/Web/API/Request/referrer)
    [[nodiscard]] jsbind::String referrer() const;
    /// Getter of the `referrerPolicy` attribute.
    /// [`Request.referrerPolicy`](https://developer.mozilla.org/en-US/docs/Web/API/Request/referrerPolicy)
    [[nodiscard]] ReferrerPolicy referrerPolicy() const;
    /// Getter of the `mode` attribute.
    /// [`Request.mode`](https://developer.mozilla.org/en-US/docs/Web/API/Request/mode)
    [[nodiscard]] RequestMode mode() const;
    /// Getter of the `credentials` attribute.
    /// [`Request.credentials`](https://developer.mozilla.org/en-US/docs/Web/API/Request/credentials)
    [[nodiscard]] RequestCredentials credentials() const;
    /// Getter of the `cache` attribute.
    /// [`Request.cache`](https://developer.mozilla.org/en-US/docs/Web/API/Request/cache)
    [[nodiscard]] RequestCache cache() const;
    /// Getter of the `redirect` attribute.
    /// [`Request.redirect`](https://developer.mozilla.org/en-US/docs/Web/API/Request/redirect)
    [[nodiscard]] RequestRedirect redirect() const;
    /// Getter of the `integrity` attribute.
    /// [`Request.integrity`](https://developer.mozilla.org/en-US/docs/Web/API/Request/integrity)
    [[nodiscard]] jsbind::String integrity() const;
    /// Getter of the `keepalive` attribute.
    /// [`Request.keepalive`](https://developer.mozilla.org/en-US/docs/Web/API/Request/keepalive)
    [[nodiscard]] bool keepalive() const;
    /// Getter of the `isReloadNavigation` attribute.
    /// [`Request.isReloadNavigation`](https://developer.mozilla.org/en-US/docs/Web/API/Request/isReloadNavigation)
    [[nodiscard]] bool isReloadNavigation() const;
    /// Getter of the `isHistoryNavigation` attribute.
    /// [`Request.isHistoryNavigation`](https://developer.mozilla.org/en-US/docs/Web/API/Request/isHistoryNavigation)
    [[nodiscard]] bool isHistoryNavigation() const;
    /// Getter of the `signal` attribute.
    /// [`Request.signal`](https://developer.mozilla.org/en-US/docs/Web/API/Request/signal)
    [[nodiscard]] AbortSignal signal() const;
    /// Getter of the `duplex` attribute.
    /// [`Request.duplex`](https://developer.mozilla.org/en-US/docs/Web/API/Request/duplex)
    [[nodiscard]] RequestDuplex duplex() const;
    /// The clone method.
    /// [`Request.clone`](https://developer.mozilla.org/en-US/docs/Web/API/Request/clone)
    Request clone();
    /// Getter of the `targetAddressSpace` attribute.
    /// [`Request.targetAddressSpace`](https://developer.mozilla.org/en-US/docs/Web/API/Request/targetAddressSpace)
    [[nodiscard]] IPAddressSpace targetAddressSpace() const;
    /// Getter of the `body` attribute.
    /// [`Request.body`](https://developer.mozilla.org/en-US/docs/Web/API/Request/body)
    [[nodiscard]] ReadableStream body() const;
    /// Getter of the `bodyUsed` attribute.
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

