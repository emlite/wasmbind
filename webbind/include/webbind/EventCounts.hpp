#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class EventCounts : public emlite::Val {
    explicit EventCounts(Handle h) noexcept;

public:
    explicit EventCounts(const emlite::Val &val) noexcept;
    static EventCounts take_ownership(Handle h) noexcept;

    EventCounts clone() const noexcept;
};

