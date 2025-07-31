#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "AbortSignal.hpp"
#include "enums.hpp"

class TaskSignal;
class TaskSignalAnyInit;


class TaskSignalAnyInit : public emlite::Val {
  explicit TaskSignalAnyInit(Handle h) noexcept;
public:
    static TaskSignalAnyInit take_ownership(Handle h) noexcept;
    explicit TaskSignalAnyInit(const emlite::Val &val) noexcept;
    TaskSignalAnyInit() noexcept;
    [[nodiscard]] TaskSignalAnyInit clone() const noexcept;
    [[nodiscard]] jsbind::Any priority() const;
    void priority(const jsbind::Any& value);
};

/// The TaskSignal class.
/// [`TaskSignal`](https://developer.mozilla.org/en-US/docs/Web/API/TaskSignal)
class TaskSignal : public AbortSignal {
    explicit TaskSignal(Handle h) noexcept;

public:
    explicit TaskSignal(const emlite::Val &val) noexcept;
    static TaskSignal take_ownership(Handle h) noexcept;

    [[nodiscard]] TaskSignal clone() const noexcept;
    /// The any method.
    /// [`TaskSignal.any`](https://developer.mozilla.org/en-US/docs/Web/API/TaskSignal/any)
    static TaskSignal any(const jsbind::TypedArray<AbortSignal>& signals);
    /// The any method.
    /// [`TaskSignal.any`](https://developer.mozilla.org/en-US/docs/Web/API/TaskSignal/any)
    static TaskSignal any(const jsbind::TypedArray<AbortSignal>& signals, const TaskSignalAnyInit& init);
    /// Getter of the `priority` attribute.
    /// [`TaskSignal.priority`](https://developer.mozilla.org/en-US/docs/Web/API/TaskSignal/priority)
    [[nodiscard]] TaskPriority priority() const;
    /// Getter of the `onprioritychange` attribute.
    /// [`TaskSignal.onprioritychange`](https://developer.mozilla.org/en-US/docs/Web/API/TaskSignal/onprioritychange)
    [[nodiscard]] jsbind::Any onprioritychange() const;
    /// Setter of the `onprioritychange` attribute.
    /// [`TaskSignal.onprioritychange`](https://developer.mozilla.org/en-US/docs/Web/API/TaskSignal/onprioritychange)
    void onprioritychange(const jsbind::Any& value);
};

