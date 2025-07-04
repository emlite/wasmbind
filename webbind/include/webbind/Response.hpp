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
    Response(const jsbind::Any& body, const jsbind::Any& init);
    static Response error();
    static Response redirect(const jsbind::USVString& url, unsigned short status);
    jsbind::Promise json();
    ResponseType type() const;
    jsbind::USVString url() const;
    bool redirected() const;
    unsigned short status() const;
    bool ok() const;
    jsbind::ByteString statusText() const;
    Headers headers() const;
    Response clone();
    ReadableStream body() const;
    bool bodyUsed() const;
    jsbind::Promise arrayBuffer();
    jsbind::Promise blob();
    jsbind::Promise bytes();
    jsbind::Promise formData();
    jsbind::Promise text();
};

