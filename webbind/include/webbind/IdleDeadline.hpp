#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class IdleDeadline : public emlite::Val {
    explicit IdleDeadline(Handle h) noexcept;

public:
    explicit IdleDeadline(const emlite::Val &val) noexcept;
    static IdleDeadline take_ownership(Handle h) noexcept;

    IdleDeadline clone() const noexcept;
    jsbind::Any timeRemaining();
    bool didTimeout() const;
};

