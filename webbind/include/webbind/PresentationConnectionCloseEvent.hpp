#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Event.hpp"
#include "enums.hpp"


class PresentationConnectionCloseEvent : public Event {
    explicit PresentationConnectionCloseEvent(Handle h) noexcept;

public:
    explicit PresentationConnectionCloseEvent(const emlite::Val &val) noexcept;
    static PresentationConnectionCloseEvent take_ownership(Handle h) noexcept;

    PresentationConnectionCloseEvent clone() const noexcept;
    PresentationConnectionCloseEvent(const jsbind::DOMString& type, const jsbind::Any& eventInitDict);
    PresentationConnectionCloseReason reason() const;
    jsbind::DOMString message() const;
};

