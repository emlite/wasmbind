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
    [[nodiscard]] ProfilerTrace clone() const noexcept;
    [[nodiscard]] jsbind::TypedArray<jsbind::Any> resources() const;
    void resources(const jsbind::TypedArray<jsbind::Any>& value);
    [[nodiscard]] jsbind::TypedArray<jsbind::Any> frames() const;
    void frames(const jsbind::TypedArray<jsbind::Any>& value);
    [[nodiscard]] jsbind::TypedArray<jsbind::Any> stacks() const;
    void stacks(const jsbind::TypedArray<jsbind::Any>& value);
    [[nodiscard]] jsbind::TypedArray<jsbind::Any> samples() const;
    void samples(const jsbind::TypedArray<jsbind::Any>& value);
};

/// The Profiler class.
/// [`Profiler`](https://developer.mozilla.org/en-US/docs/Web/API/Profiler)
class Profiler : public EventTarget {
    explicit Profiler(Handle h) noexcept;

public:
    explicit Profiler(const emlite::Val &val) noexcept;
    static Profiler take_ownership(Handle h) noexcept;

    [[nodiscard]] Profiler clone() const noexcept;
    /// Getter of the `sampleInterval` attribute.
    /// [`Profiler.sampleInterval`](https://developer.mozilla.org/en-US/docs/Web/API/Profiler/sampleInterval)
    [[nodiscard]] jsbind::Any sampleInterval() const;
    /// Getter of the `stopped` attribute.
    /// [`Profiler.stopped`](https://developer.mozilla.org/en-US/docs/Web/API/Profiler/stopped)
    [[nodiscard]] bool stopped() const;
    /// The `new Profiler(..)` constructor, creating a new Profiler instance
    Profiler(const jsbind::Any& options);
    /// The stop method.
    /// [`Profiler.stop`](https://developer.mozilla.org/en-US/docs/Web/API/Profiler/stop)
    jsbind::Promise<ProfilerTrace> stop();
};

