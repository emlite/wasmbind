#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Event.hpp"
#include "enums.hpp"


class KeyFrameRequestEvent : public Event {
    explicit KeyFrameRequestEvent(Handle h) noexcept;

public:
    explicit KeyFrameRequestEvent(const emlite::Val &val) noexcept;
    static KeyFrameRequestEvent take_ownership(Handle h) noexcept;

    KeyFrameRequestEvent clone() const noexcept;
    KeyFrameRequestEvent(const jsbind::DOMString& type, const jsbind::DOMString& rid);
    jsbind::DOMString rid() const;
};

