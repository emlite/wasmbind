#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class Response;
class Headers;
class ReadableStream;
class Blob;
class FormData;


class Response : public emlite::Val {
    explicit Response(Handle h) noexcept;

public:
    explicit Response(const emlite::Val &val) noexcept;
    static Response take_ownership(Handle h) noexcept;

    Response clone() const noexcept;
    Response();
    Response(const jsbind::Any& body);
    Response(const jsbind::Any& body, const jsbind::Any& init);
    static Response error();
    static Response redirect(const jsbind::String& url);
    static Response redirect(const jsbind::String& url, unsigned short status);
    jsbind::Promise<jsbind::Any> json();
    ResponseType type() const;
    jsbind::String url() const;
    bool redirected() const;
    unsigned short status() const;
    bool ok() const;
    jsbind::String statusText() const;
    Headers headers() const;
    Response clone();
    ReadableStream body() const;
    bool bodyUsed() const;
    jsbind::Promise<jsbind::ArrayBuffer> arrayBuffer();
    jsbind::Promise<Blob> blob();
    jsbind::Promise<jsbind::Uint8Array> bytes();
    jsbind::Promise<FormData> formData();
    jsbind::Promise<jsbind::String> text();
};

