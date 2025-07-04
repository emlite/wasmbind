#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Event.hpp"
#include "enums.hpp"


class CharacterBoundsUpdateEvent : public Event {
    explicit CharacterBoundsUpdateEvent(Handle h) noexcept;

public:
    explicit CharacterBoundsUpdateEvent(const emlite::Val &val) noexcept;
    static CharacterBoundsUpdateEvent take_ownership(Handle h) noexcept;

    CharacterBoundsUpdateEvent clone() const noexcept;
    CharacterBoundsUpdateEvent(const jsbind::DOMString& type, const jsbind::Any& options);
    unsigned long rangeStart() const;
    unsigned long rangeEnd() const;
};

