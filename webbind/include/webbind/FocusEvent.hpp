#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "UIEvent.hpp"
#include "enums.hpp"

class EventTarget;


class FocusEvent : public UIEvent {
    explicit FocusEvent(Handle h) noexcept;

public:
    explicit FocusEvent(const emlite::Val &val) noexcept;
    static FocusEvent take_ownership(Handle h) noexcept;

    FocusEvent clone() const noexcept;
    FocusEvent(const jsbind::DOMString& type, const jsbind::Any& eventInitDict);
    EventTarget relatedTarget() const;
};

