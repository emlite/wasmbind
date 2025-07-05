#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Event.hpp"
#include "enums.hpp"


class ValueEvent : public Event {
    explicit ValueEvent(Handle h) noexcept;

public:
    explicit ValueEvent(const emlite::Val &val) noexcept;
    static ValueEvent take_ownership(Handle h) noexcept;

    ValueEvent clone() const noexcept;
    ValueEvent(const jsbind::DOMString& type);
    ValueEvent(const jsbind::DOMString& type, const jsbind::Any& initDict);
    jsbind::Any value() const;
};

