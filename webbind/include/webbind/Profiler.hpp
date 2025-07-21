#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "enums.hpp"

class ProfilerTrace;


class ProfilerTrace : public emlite::Val {
  explicit ProfilerTrace(Handle h) noexcept;
public:
    static ProfilerTrace take_ownership(Handle h) noexcept;
    explicit ProfilerTrace(const emlite::Val &val) noexcept;
    ProfilerTrace() noexcept;
    ProfilerTrace clone() const noexcept;
    jsbind::Sequence<jsbind::Any> resources() const;
    void resources(const jsbind::Sequence<jsbind::Any>& value);
    jsbind::Sequence<jsbind::Any> frames() const;
    void frames(const jsbind::Sequence<jsbind::Any>& value);
    jsbind::Sequence<jsbind::Any> stacks() const;
    void stacks(const jsbind::Sequence<jsbind::Any>& value);
    jsbind::Sequence<jsbind::Any> samples() const;
    void samples(const jsbind::Sequence<jsbind::Any>& value);
};

class Profiler : public EventTarget {
    explicit Profiler(Handle h) noexcept;

public:
    explicit Profiler(const emlite::Val &val) noexcept;
    static Profiler take_ownership(Handle h) noexcept;

    Profiler clone() const noexcept;
    jsbind::Any sampleInterval() const;
    bool stopped() const;
    Profiler(const jsbind::Any& options);
    jsbind::Promise<ProfilerTrace> stop();
};

