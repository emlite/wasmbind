#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "MessagePort.hpp"
#include "enums.hpp"


class Worker : public EventTarget {
    explicit Worker(Handle h) noexcept;

public:
    explicit Worker(const emlite::Val &val) noexcept;
    static Worker take_ownership(Handle h) noexcept;

    Worker clone() const noexcept;
    Worker(const jsbind::Any& scriptURL, const jsbind::Any& options);
    jsbind::Undefined terminate();
    jsbind::Undefined postMessage(const jsbind::Any& message, const StructuredSerializeOptions& options);
    jsbind::Any onerror() const;
    void onerror(const jsbind::Any& value);
    jsbind::Any onmessage() const;
    void onmessage(const jsbind::Any& value);
    jsbind::Any onmessageerror() const;
    void onmessageerror(const jsbind::Any& value);
};

