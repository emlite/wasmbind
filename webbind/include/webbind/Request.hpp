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


class Request : public emlite::Val {
    explicit Request(Handle h) noexcept;

public:
    explicit Request(const emlite::Val &val) noexcept;
    static Request take_ownership(Handle h) noexcept;

    Request clone() const noexcept;
    Request(const jsbind::Any& input);
    Request(const jsbind::Any& input, const jsbind::Any& init);
    jsbind::String method() const;
    jsbind::String url() const;
    Headers headers() const;
    RequestDestination destination() const;
    jsbind::String referrer() const;
    ReferrerPolicy referrerPolicy() const;
    RequestMode mode() const;
    RequestCredentials credentials() const;
    RequestCache cache() const;
    RequestRedirect redirect() const;
    jsbind::String integrity() const;
    bool keepalive() const;
    bool isReloadNavigation() const;
    bool isHistoryNavigation() const;
    AbortSignal signal() const;
    RequestDuplex duplex() const;
    Request clone();
    IPAddressSpace targetAddressSpace() const;
    ReadableStream body() const;
    bool bodyUsed() const;
    jsbind::Promise<jsbind::ArrayBuffer> arrayBuffer();
    jsbind::Promise<Blob> blob();
    jsbind::Promise<jsbind::Uint8Array> bytes();
    jsbind::Promise<FormData> formData();
    jsbind::Promise<jsbind::Any> json();
    jsbind::Promise<jsbind::String> text();
};

