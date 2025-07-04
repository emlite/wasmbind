#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Event.hpp"
#include "enums.hpp"


class CaptureActionEvent : public Event {
    explicit CaptureActionEvent(Handle h) noexcept;

public:
    explicit CaptureActionEvent(const emlite::Val &val) noexcept;
    static CaptureActionEvent take_ownership(Handle h) noexcept;

    CaptureActionEvent clone() const noexcept;
    CaptureActionEvent(const jsbind::Any& init);
    CaptureAction action() const;
};

