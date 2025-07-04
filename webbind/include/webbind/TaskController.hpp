#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "AbortController.hpp"
#include "enums.hpp"


class TaskController : public AbortController {
    explicit TaskController(Handle h) noexcept;

public:
    explicit TaskController(const emlite::Val &val) noexcept;
    static TaskController take_ownership(Handle h) noexcept;

    TaskController clone() const noexcept;
    TaskController(const jsbind::Any& init);
    jsbind::Undefined setPriority(const TaskPriority& priority);
};

