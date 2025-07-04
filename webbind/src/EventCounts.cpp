#include <webbind/EventCounts.hpp>


EventCounts EventCounts::take_ownership(Handle h) noexcept {
        return EventCounts(h);
    }
EventCounts EventCounts::clone() const noexcept { return *this; }
EventCounts::EventCounts(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
EventCounts::EventCounts(const emlite::Val &val) noexcept: emlite::Val(val) {}


