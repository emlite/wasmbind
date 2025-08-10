#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type TaskControllerInit
class TaskControllerInit : public emlite::Val {
  explicit TaskControllerInit(Handle h) noexcept;
public:
    static TaskControllerInit take_ownership(Handle h) noexcept;
    explicit TaskControllerInit(const emlite::Val &val) noexcept;
    TaskControllerInit() noexcept;
    [[nodiscard]] TaskControllerInit clone() const noexcept;
    /// Getter of the `priority` attribute.
    [[nodiscard]] TaskPriority priority() const;
    /// Setter of the `priority` attribute.
    void priority(const TaskPriority& value);
};

} // namespace webbind