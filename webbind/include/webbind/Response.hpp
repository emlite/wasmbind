#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class Response;
class Headers;
class ReadableStream;
class Blob;
class FormData;


/// The Response class.
/// [`Response`](https://developer.mozilla.org/en-US/docs/Web/API/Response)
class Response : public emlite::Val {
    explicit Response(Handle h) noexcept;

public:
    explicit Response(const emlite::Val &val) noexcept;
    static Response take_ownership(Handle h) noexcept;

    [[nodiscard]] Response clone() const noexcept;
    /// The `new Response(..)` constructor, creating a new Response instance
    Response();
    /// The `new Response(..)` constructor, creating a new Response instance
    Response(const jsbind::Any& body);
    /// The `new Response(..)` constructor, creating a new Response instance
    Response(const jsbind::Any& body, const jsbind::Any& init);
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
    jsbind::Promise<jsbind::Any> json();
    /// Getter of the `type` attribute.
    /// [`Response.type`](https://developer.mozilla.org/en-US/docs/Web/API/Response/type)
    [[nodiscard]] ResponseType type() const;
    /// Getter of the `url` attribute.
    /// [`Response.url`](https://developer.mozilla.org/en-US/docs/Web/API/Response/url)
    [[nodiscard]] jsbind::String url() const;
    /// Getter of the `redirected` attribute.
    /// [`Response.redirected`](https://developer.mozilla.org/en-US/docs/Web/API/Response/redirected)
    [[nodiscard]] bool redirected() const;
    /// Getter of the `status` attribute.
    /// [`Response.status`](https://developer.mozilla.org/en-US/docs/Web/API/Response/status)
    [[nodiscard]] unsigned short status() const;
    /// Getter of the `ok` attribute.
    /// [`Response.ok`](https://developer.mozilla.org/en-US/docs/Web/API/Response/ok)
    [[nodiscard]] bool ok() const;
    /// Getter of the `statusText` attribute.
    /// [`Response.statusText`](https://developer.mozilla.org/en-US/docs/Web/API/Response/statusText)
    [[nodiscard]] jsbind::String statusText() const;
    /// Getter of the `headers` attribute.
    /// [`Response.headers`](https://developer.mozilla.org/en-US/docs/Web/API/Response/headers)
    [[nodiscard]] Headers headers() const;
    /// The clone method.
    /// [`Response.clone`](https://developer.mozilla.org/en-US/docs/Web/API/Response/clone)
    Response clone();
    /// Getter of the `body` attribute.
    /// [`Response.body`](https://developer.mozilla.org/en-US/docs/Web/API/Response/body)
    [[nodiscard]] ReadableStream body() const;
    /// Getter of the `bodyUsed` attribute.
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
    /// The text method.
    /// [`Response.text`](https://developer.mozilla.org/en-US/docs/Web/API/Response/text)
    jsbind::Promise<jsbind::String> text();
};

