#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "MessagePort.hpp"
#include "enums.hpp"


class Client : public emlite::Val {
    explicit Client(Handle h) noexcept;

public:
    explicit Client(const emlite::Val &val) noexcept;
    static Client take_ownership(Handle h) noexcept;

    Client clone() const noexcept;
    jsbind::USVString url() const;
    FrameType frameType() const;
    jsbind::DOMString id() const;
    ClientType type() const;
    jsbind::Undefined postMessage(const jsbind::Any& message);
    jsbind::Undefined postMessage(const jsbind::Any& message, const StructuredSerializeOptions& options);
    ClientLifecycleState lifecycleState() const;
};

