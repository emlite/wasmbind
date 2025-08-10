#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "SchedulerPostTaskOptions.hpp"

namespace webbind {

/// Interface Scheduler
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

} // namespace webbind