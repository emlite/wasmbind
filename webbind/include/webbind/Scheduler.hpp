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
    [[nodiscard]] SchedulerPostTaskOptions clone() const noexcept;
    [[nodiscard]] AbortSignal signal() const;
    void signal(const AbortSignal& value);
    [[nodiscard]] TaskPriority priority() const;
    void priority(const TaskPriority& value);
    [[nodiscard]] long long delay() const;
    void delay(long long value);
};

/// The Scheduler class.
/// [`Scheduler`](https://developer.mozilla.org/en-US/docs/Web/API/Scheduler)
class Scheduler : public emlite::Val {
    explicit Scheduler(Handle h) noexcept;

public:
    explicit Scheduler(const emlite::Val &val) noexcept;
    static Scheduler take_ownership(Handle h) noexcept;

    [[nodiscard]] Scheduler clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The postTask method.
    /// [`Scheduler.postTask`](https://developer.mozilla.org/en-US/docs/Web/API/Scheduler/postTask)
    jsbind::Promise<jsbind::Any> postTask(const jsbind::Function& callback);
    /// The postTask method.
    /// [`Scheduler.postTask`](https://developer.mozilla.org/en-US/docs/Web/API/Scheduler/postTask)
    jsbind::Promise<jsbind::Any> postTask(const jsbind::Function& callback, const SchedulerPostTaskOptions& options);
    /// The yield method.
    /// [`Scheduler.yield`](https://developer.mozilla.org/en-US/docs/Web/API/Scheduler/yield)
    jsbind::Promise<jsbind::Undefined> yield();
};

