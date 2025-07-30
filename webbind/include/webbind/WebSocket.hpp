#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "enums.hpp"


class WebSocket : public EventTarget {
    explicit WebSocket(Handle h) noexcept;

public:
    explicit WebSocket(const emlite::Val &val) noexcept;
    static WebSocket take_ownership(Handle h) noexcept;

    WebSocket clone() const noexcept;
    WebSocket(const jsbind::String& url);
    WebSocket(const jsbind::String& url, const jsbind::Any& protocols);
    jsbind::String url() const;
    unsigned short readyState() const;
    long long bufferedAmount() const;
    jsbind::Any onopen() const;
    void onopen(const jsbind::Any& value);
    jsbind::Any onerror() const;
    void onerror(const jsbind::Any& value);
    jsbind::Any onclose() const;
    void onclose(const jsbind::Any& value);
    jsbind::String extensions() const;
    jsbind::String protocol() const;
    jsbind::Undefined close();
    jsbind::Undefined close(unsigned short code);
    jsbind::Undefined close(unsigned short code, const jsbind::String& reason);
    jsbind::Any onmessage() const;
    void onmessage(const jsbind::Any& value);
    BinaryType binaryType() const;
    void binaryType(const BinaryType& value);
    jsbind::Undefined send(const jsbind::Any& data);
};

