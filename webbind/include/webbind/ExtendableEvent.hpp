#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Event.hpp"
#include "enums.hpp"


class ExtendableEvent : public Event {
    explicit ExtendableEvent(Handle h) noexcept;

public:
    explicit ExtendableEvent(const emlite::Val &val) noexcept;
    static ExtendableEvent take_ownership(Handle h) noexcept;

    ExtendableEvent clone() const noexcept;
    ExtendableEvent(const jsbind::DOMString& type);
    ExtendableEvent(const jsbind::DOMString& type, const jsbind::Any& eventInitDict);
    jsbind::Undefined waitUntil(const jsbind::Promise& f);
};

