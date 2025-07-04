#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Event.hpp"
#include "enums.hpp"


class BeforeUnloadEvent : public Event {
    explicit BeforeUnloadEvent(Handle h) noexcept;

public:
    explicit BeforeUnloadEvent(const emlite::Val &val) noexcept;
    static BeforeUnloadEvent take_ownership(Handle h) noexcept;

    BeforeUnloadEvent clone() const noexcept;
    jsbind::DOMString returnValue() const;
    void returnValue(const jsbind::DOMString& value);
};

