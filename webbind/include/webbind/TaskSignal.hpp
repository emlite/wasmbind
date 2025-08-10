#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "AbortSignal.hpp"
#include "TaskSignalAnyInit.hpp"
#include "enums.hpp"

namespace webbind {

class TaskSignal;

/// Interface TaskSignal
/// [`TaskSignal`](https://developer.mozilla.org/en-US/docs/Web/API/TaskSignal)
class TaskSignal : public AbortSignal {
    explicit TaskSignal(Handle h) noexcept;
public:
    explicit TaskSignal(const emlite::Val &val) noexcept;
    static TaskSignal take_ownership(Handle h) noexcept;
    [[nodiscard]] TaskSignal clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
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

} // namespace webbind