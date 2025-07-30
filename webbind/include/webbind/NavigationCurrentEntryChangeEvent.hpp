#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Event.hpp"
#include "enums.hpp"

class NavigationHistoryEntry;


class NavigationCurrentEntryChangeEvent : public Event {
    explicit NavigationCurrentEntryChangeEvent(Handle h) noexcept;

public:
    explicit NavigationCurrentEntryChangeEvent(const emlite::Val &val) noexcept;
    static NavigationCurrentEntryChangeEvent take_ownership(Handle h) noexcept;

    NavigationCurrentEntryChangeEvent clone() const noexcept;
    NavigationCurrentEntryChangeEvent(const jsbind::String& type, const jsbind::Any& eventInitDict);
    NavigationType navigationType() const;
    NavigationHistoryEntry from() const;
};

