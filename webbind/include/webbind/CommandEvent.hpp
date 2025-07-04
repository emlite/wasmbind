#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Event.hpp"
#include "enums.hpp"

class Element;


class CommandEvent : public Event {
    explicit CommandEvent(Handle h) noexcept;

public:
    explicit CommandEvent(const emlite::Val &val) noexcept;
    static CommandEvent take_ownership(Handle h) noexcept;

    CommandEvent clone() const noexcept;
    CommandEvent(const jsbind::DOMString& type, const jsbind::Any& eventInitDict);
    Element source() const;
    jsbind::DOMString command() const;
};

