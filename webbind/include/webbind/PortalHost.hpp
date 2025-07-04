#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "MessagePort.hpp"
#include "enums.hpp"


class PortalHost : public EventTarget {
    explicit PortalHost(Handle h) noexcept;

public:
    explicit PortalHost(const emlite::Val &val) noexcept;
    static PortalHost take_ownership(Handle h) noexcept;

    PortalHost clone() const noexcept;
    jsbind::Undefined postMessage(const jsbind::Any& message, const StructuredSerializeOptions& options);
    jsbind::Any onmessage() const;
    void onmessage(const jsbind::Any& value);
    jsbind::Any onmessageerror() const;
    void onmessageerror(const jsbind::Any& value);
};

