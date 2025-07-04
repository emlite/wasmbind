#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "enums.hpp"


class XMLHttpRequestEventTarget : public EventTarget {
    explicit XMLHttpRequestEventTarget(Handle h) noexcept;

public:
    explicit XMLHttpRequestEventTarget(const emlite::Val &val) noexcept;
    static XMLHttpRequestEventTarget take_ownership(Handle h) noexcept;

    XMLHttpRequestEventTarget clone() const noexcept;
    jsbind::Any onloadstart() const;
    void onloadstart(const jsbind::Any& value);
    jsbind::Any onprogress() const;
    void onprogress(const jsbind::Any& value);
    jsbind::Any onabort() const;
    void onabort(const jsbind::Any& value);
    jsbind::Any onerror() const;
    void onerror(const jsbind::Any& value);
    jsbind::Any onload() const;
    void onload(const jsbind::Any& value);
    jsbind::Any ontimeout() const;
    void ontimeout(const jsbind::Any& value);
    jsbind::Any onloadend() const;
    void onloadend(const jsbind::Any& value);
};

