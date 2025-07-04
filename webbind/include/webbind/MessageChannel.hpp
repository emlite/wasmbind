#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class MessagePort;


class MessageChannel : public emlite::Val {
    explicit MessageChannel(Handle h) noexcept;

public:
    explicit MessageChannel(const emlite::Val &val) noexcept;
    static MessageChannel take_ownership(Handle h) noexcept;

    MessageChannel clone() const noexcept;
    MessageChannel();
    jsbind::Any port1() const;
    jsbind::Any port2() const;
};

