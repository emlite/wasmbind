#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Event.hpp"
#include "enums.hpp"


class TextUpdateEvent : public Event {
    explicit TextUpdateEvent(Handle h) noexcept;

public:
    explicit TextUpdateEvent(const emlite::Val &val) noexcept;
    static TextUpdateEvent take_ownership(Handle h) noexcept;

    TextUpdateEvent clone() const noexcept;
    TextUpdateEvent(const jsbind::DOMString& type);
    TextUpdateEvent(const jsbind::DOMString& type, const jsbind::Any& options);
    unsigned long updateRangeStart() const;
    unsigned long updateRangeEnd() const;
    jsbind::DOMString text() const;
    unsigned long selectionStart() const;
    unsigned long selectionEnd() const;
};

