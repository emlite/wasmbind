#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventInit.hpp"

namespace webbind {

/// Dictionary type TaskPriorityChangeEventInit
class TaskPriorityChangeEventInit : public EventInit {
  explicit TaskPriorityChangeEventInit(Handle h) noexcept;
public:
    static TaskPriorityChangeEventInit take_ownership(Handle h) noexcept;
    explicit TaskPriorityChangeEventInit(const emlite::Val &val) noexcept;
    TaskPriorityChangeEventInit() noexcept;
    [[nodiscard]] TaskPriorityChangeEventInit clone() const noexcept;
    /// Getter of the `previousPriority` attribute.
    [[nodiscard]] TaskPriority previousPriority() const;
    /// Setter of the `previousPriority` attribute.
    void previousPriority(const TaskPriority& value);
};

} // namespace webbind