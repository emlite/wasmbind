#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "AbortController.hpp"
#include "enums.hpp"


/// The TaskController class.
/// [`TaskController`](https://developer.mozilla.org/en-US/docs/Web/API/TaskController)
class TaskController : public AbortController {
    explicit TaskController(Handle h) noexcept;

public:
    explicit TaskController(const emlite::Val &val) noexcept;
    static TaskController take_ownership(Handle h) noexcept;

    [[nodiscard]] TaskController clone() const noexcept;
    /// The `new TaskController(..)` constructor, creating a new TaskController instance
    TaskController();
    /// The `new TaskController(..)` constructor, creating a new TaskController instance
    TaskController(const jsbind::Any& init);
    /// The setPriority method.
    /// [`TaskController.setPriority`](https://developer.mozilla.org/en-US/docs/Web/API/TaskController/setPriority)
    jsbind::Undefined setPriority(const TaskPriority& priority);
};

