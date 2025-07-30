#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Event.hpp"
#include "enums.hpp"


class TaskPriorityChangeEvent : public Event {
    explicit TaskPriorityChangeEvent(Handle h) noexcept;

public:
    explicit TaskPriorityChangeEvent(const emlite::Val &val) noexcept;
    static TaskPriorityChangeEvent take_ownership(Handle h) noexcept;

    TaskPriorityChangeEvent clone() const noexcept;
    TaskPriorityChangeEvent(const jsbind::String& type, const jsbind::Any& priorityChangeEventInitDict);
    TaskPriority previousPriority() const;
};

