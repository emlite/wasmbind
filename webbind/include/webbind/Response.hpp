#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "enums.hpp"

namespace webbind {

class ResponseInit;
class Response;
class Headers;
class ReadableStream;
class Blob;
class FormData;

/// Interface Response
/// [`Response`](https://developer.mozilla.org/en-US/docs/Web/API/Response)
class Response : public emlite::Val {
    explicit Response(Handle h) noexcept;
public:
    explicit Response(const emlite::Val &val) noexcept;
    static Response take_ownership(Handle h) noexcept;
    [[nodiscard]] Response clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new Response(..)` constructor, creating a new Response instance
    Response();
    /// The `new Response(..)` constructor, creating a new Response instance
    Response(const jsbind::Any& body);
    /// The `new Response(..)` constructor, creating a new Response instance
    Response(const jsbind::Any& body, const ResponseInit& init);
    /// The error method.
    /// [`Response.error`](https://developer.mozilla.org/en-US/docs/Web/API/Response/error)
    static Response error();
    /// The redirect method.
    /// [`Response.redirect`](https://developer.mozilla.org/en-US/docs/Web/API/Response/redirect)
    static Response redirect(const jsbind::String& url);
    /// The redirect method.
    /// [`Response.redirect`](https://developer.mozilla.org/en-US/docs/Web/API/Response/redirect)
    static Response redirect(const jsbind::String& url, unsigned short status);
    /// The json method.
    /// [`Response.json`](https://developer.mozilla.org/en-US/docs/Web/API/Response/json)
    static Response json(const jsbind::Any& data);
    /// The json method.
    /// [`Response.json`](https://developer.mozilla.org/en-US/docs/Web/API/Response/json)
    static Response json(const jsbind::Any& data, const ResponseInit& init);
    /// [`Response.type`](https://developer.mozilla.org/en-US/docs/Web/API/Response/type)
    /// [`Response.type`](https://developer.mozilla.org/en-US/docs/Web/API/Response/type)
    [[nodiscard]] ResponseType type() const;
    /// [`Response.url`](https://developer.mozilla.org/en-US/docs/Web/API/Response/url)
    /// [`Response.url`](https://developer.mozilla.org/en-US/docs/Web/API/Response/url)
    [[nodiscard]] jsbind::String url() const;
    /// [`Response.redirected`](https://developer.mozilla.org/en-US/docs/Web/API/Response/redirected)
    /// [`Response.redirected`](https://developer.mozilla.org/en-US/docs/Web/API/Response/redirected)
    [[nodiscard]] bool redirected() const;
    /// [`Response.status`](https://developer.mozilla.org/en-US/docs/Web/API/Response/status)
    /// [`Response.status`](https://developer.mozilla.org/en-US/docs/Web/API/Response/status)
    [[nodiscard]] unsigned short status() const;
    /// [`Response.ok`](https://developer.mozilla.org/en-US/docs/Web/API/Response/ok)
    /// [`Response.ok`](https://developer.mozilla.org/en-US/docs/Web/API/Response/ok)
    [[nodiscard]] bool ok() const;
    /// [`Response.statusText`](https://developer.mozilla.org/en-US/docs/Web/API/Response/statusText)
    /// [`Response.statusText`](https://developer.mozilla.org/en-US/docs/Web/API/Response/statusText)
    [[nodiscard]] jsbind::String statusText() const;
    /// [`Response.headers`](https://developer.mozilla.org/en-US/docs/Web/API/Response/headers)
    /// [`Response.headers`](https://developer.mozilla.org/en-US/docs/Web/API/Response/headers)
    [[nodiscard]] Headers headers() const;
    /// The clone method.
    /// [`Response.clone`](https://developer.mozilla.org/en-US/docs/Web/API/Response/clone)
    Response clone();
    /// [`Response.body`](https://developer.mozilla.org/en-US/docs/Web/API/Response/body)
    /// [`Response.body`](https://developer.mozilla.org/en-US/docs/Web/API/Response/body)
    [[nodiscard]] ReadableStream body() const;
    /// [`Response.bodyUsed`](https://developer.mozilla.org/en-US/docs/Web/API/Response/bodyUsed)
    /// [`Response.bodyUsed`](https://developer.mozilla.org/en-US/docs/Web/API/Response/bodyUsed)
    [[nodiscard]] bool bodyUsed() const;
    /// The arrayBuffer method.
    /// [`Response.arrayBuffer`](https://developer.mozilla.org/en-US/docs/Web/API/Response/arrayBuffer)
    jsbind::Promise<jsbind::ArrayBuffer> arrayBuffer();
    /// The blob method.
    /// [`Response.blob`](https://developer.mozilla.org/en-US/docs/Web/API/Response/blob)
    jsbind::Promise<Blob> blob();
    /// The bytes method.
    /// [`Response.bytes`](https://developer.mozilla.org/en-US/docs/Web/API/Response/bytes)
    jsbind::Promise<jsbind::Uint8Array> bytes();
    /// The formData method.
    /// [`Response.formData`](https://developer.mozilla.org/en-US/docs/Web/API/Response/formData)
    jsbind::Promise<FormData> formData();
    /// The json method.
    /// [`Response.json`](https://developer.mozilla.org/en-US/docs/Web/API/Response/json)
    jsbind::Promise<jsbind::Any> json();
    /// The text method.
    /// [`Response.text`](https://developer.mozilla.org/en-US/docs/Web/API/Response/text)
    jsbind::Promise<jsbind::String> text();
};

} // namespace webbind