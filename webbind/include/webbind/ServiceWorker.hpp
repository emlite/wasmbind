#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "MessagePort.hpp"
#include "enums.hpp"


class ServiceWorker : public EventTarget {
    explicit ServiceWorker(Handle h) noexcept;

public:
    explicit ServiceWorker(const emlite::Val &val) noexcept;
    static ServiceWorker take_ownership(Handle h) noexcept;

    ServiceWorker clone() const noexcept;
    jsbind::String scriptURL() const;
    ServiceWorkerState state() const;
    jsbind::Undefined postMessage(const jsbind::Any& message);
    jsbind::Undefined postMessage(const jsbind::Any& message, const StructuredSerializeOptions& options);
    jsbind::Any onstatechange() const;
    void onstatechange(const jsbind::Any& value);
    jsbind::Any onerror() const;
    void onerror(const jsbind::Any& value);
};

