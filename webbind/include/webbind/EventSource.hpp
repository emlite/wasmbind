#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "enums.hpp"


class EventSource : public EventTarget {
    explicit EventSource(Handle h) noexcept;

public:
    explicit EventSource(const emlite::Val &val) noexcept;
    static EventSource take_ownership(Handle h) noexcept;

    EventSource clone() const noexcept;
    EventSource(const jsbind::USVString& url);
    EventSource(const jsbind::USVString& url, const jsbind::Any& eventSourceInitDict);
    jsbind::USVString url() const;
    bool withCredentials() const;
    unsigned short readyState() const;
    jsbind::Any onopen() const;
    void onopen(const jsbind::Any& value);
    jsbind::Any onmessage() const;
    void onmessage(const jsbind::Any& value);
    jsbind::Any onerror() const;
    void onerror(const jsbind::Any& value);
    jsbind::Undefined close();
};

