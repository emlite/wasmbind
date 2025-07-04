#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class SchedulerPostTaskOptions;
class AbortSignal;


class SchedulerPostTaskOptions : public emlite::Val {
  explicit SchedulerPostTaskOptions(Handle h) noexcept;
public:
    static SchedulerPostTaskOptions take_ownership(Handle h) noexcept;
    explicit SchedulerPostTaskOptions(const emlite::Val &val) noexcept;
    SchedulerPostTaskOptions() noexcept;
    SchedulerPostTaskOptions clone() const noexcept;
    AbortSignal signal() const;
    void signal(const AbortSignal& value);
    TaskPriority priority() const;
    void priority(const TaskPriority& value);
    long long delay() const;
    void delay(long long value);
};

class Scheduler : public emlite::Val {
    explicit Scheduler(Handle h) noexcept;

public:
    explicit Scheduler(const emlite::Val &val) noexcept;
    static Scheduler take_ownership(Handle h) noexcept;

    Scheduler clone() const noexcept;
    jsbind::Promise postTask(const jsbind::Function& callback, const SchedulerPostTaskOptions& options);
    jsbind::Promise yield();
};

