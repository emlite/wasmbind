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
    TaskSignalAnyInit clone() const noexcept;
    jsbind::Any priority() const;
    void priority(const jsbind::Any& value);
};

class TaskSignal : public AbortSignal {
    explicit TaskSignal(Handle h) noexcept;

public:
    explicit TaskSignal(const emlite::Val &val) noexcept;
    static TaskSignal take_ownership(Handle h) noexcept;

    TaskSignal clone() const noexcept;
    static TaskSignal any(const jsbind::Sequence<AbortSignal>& signals);
    static TaskSignal any(const jsbind::Sequence<AbortSignal>& signals, const TaskSignalAnyInit& init);
    TaskPriority priority() const;
    jsbind::Any onprioritychange() const;
    void onprioritychange(const jsbind::Any& value);
};

