#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventTarget.hpp"
#include "ProfilerInitOptions.hpp"
#include "ProfilerTrace.hpp"

namespace webbind {

/// Interface Profiler
/// [`Profiler`](https://developer.mozilla.org/en-US/docs/Web/API/Profiler)
class Profiler : public EventTarget {
    explicit Profiler(Handle h) noexcept;
public:
    explicit Profiler(const emlite::Val &val) noexcept;
    static Profiler take_ownership(Handle h) noexcept;
    [[nodiscard]] Profiler clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`Profiler.sampleInterval`](https://developer.mozilla.org/en-US/docs/Web/API/Profiler/sampleInterval)
    /// [`Profiler.sampleInterval`](https://developer.mozilla.org/en-US/docs/Web/API/Profiler/sampleInterval)
    [[nodiscard]] jsbind::Any sampleInterval() const;
    /// [`Profiler.stopped`](https://developer.mozilla.org/en-US/docs/Web/API/Profiler/stopped)
    /// [`Profiler.stopped`](https://developer.mozilla.org/en-US/docs/Web/API/Profiler/stopped)
    [[nodiscard]] bool stopped() const;
    /// The `new Profiler(..)` constructor, creating a new Profiler instance
    Profiler(const ProfilerInitOptions& options);
    /// The stop method.
    /// [`Profiler.stop`](https://developer.mozilla.org/en-US/docs/Web/API/Profiler/stop)
    jsbind::Promise<ProfilerTrace> stop();
};

} // namespace webbind