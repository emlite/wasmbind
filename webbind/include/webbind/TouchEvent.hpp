#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "UIEvent.hpp"
#include "enums.hpp"

class TouchList;


class TouchEvent : public UIEvent {
    explicit TouchEvent(Handle h) noexcept;

public:
    explicit TouchEvent(const emlite::Val &val) noexcept;
    static TouchEvent take_ownership(Handle h) noexcept;

    TouchEvent clone() const noexcept;
    TouchEvent(const jsbind::DOMString& type, const jsbind::Any& eventInitDict);
    TouchList touches() const;
    TouchList targetTouches() const;
    TouchList changedTouches() const;
    bool altKey() const;
    bool metaKey() const;
    bool ctrlKey() const;
    bool shiftKey() const;
    bool getModifierState(const jsbind::DOMString& keyArg);
};

