#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventInit.hpp"

namespace webbind {

/// Dictionary type TaskPriorityChangeEventInit
/// [`TaskPriorityChangeEventInit`](https://developer.mozilla.org/en-US/docs/Web/API/TaskPriorityChangeEventInit)
class TaskPriorityChangeEventInit : public EventInit {
  explicit TaskPriorityChangeEventInit(Handle h) noexcept;
public:
    static TaskPriorityChangeEventInit take_ownership(Handle h) noexcept;
    explicit TaskPriorityChangeEventInit(const emlite::Val &val) noexcept;
    TaskPriorityChangeEventInit() noexcept;
    [[nodiscard]] TaskPriorityChangeEventInit clone() const noexcept;
    [[nodiscard]] TaskPriority previousPriority() const;
    void previousPriority(const TaskPriority& value);
};

} // namespace webbind