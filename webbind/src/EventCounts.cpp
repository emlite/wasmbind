#include "webbind/EventCounts.hpp"

namespace webbind {

EventCounts EventCounts::take_ownership(Handle h) noexcept {
        return EventCounts(h);
    }
EventCounts EventCounts::clone() const noexcept { return *this; }
emlite::Val EventCounts::instance() noexcept { return emlite::Val::global("EventCounts"); }
EventCounts::EventCounts(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
EventCounts::EventCounts(const emlite::Val &val) noexcept: emlite::Val(val) {}


} // namespace webbind