#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


/// The EventCounts class.
/// [`EventCounts`](https://developer.mozilla.org/en-US/docs/Web/API/EventCounts)
class EventCounts : public emlite::Val {
    explicit EventCounts(Handle h) noexcept;

public:
    explicit EventCounts(const emlite::Val &val) noexcept;
    static EventCounts take_ownership(Handle h) noexcept;

    [[nodiscard]] EventCounts clone() const noexcept;
};

