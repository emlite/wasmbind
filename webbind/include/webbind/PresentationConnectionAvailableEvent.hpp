#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Event.hpp"
#include "enums.hpp"

class PresentationConnection;


class PresentationConnectionAvailableEvent : public Event {
    explicit PresentationConnectionAvailableEvent(Handle h) noexcept;

public:
    explicit PresentationConnectionAvailableEvent(const emlite::Val &val) noexcept;
    static PresentationConnectionAvailableEvent take_ownership(Handle h) noexcept;

    PresentationConnectionAvailableEvent clone() const noexcept;
    PresentationConnectionAvailableEvent(const jsbind::String& type, const jsbind::Any& eventInitDict);
    PresentationConnection connection() const;
};

