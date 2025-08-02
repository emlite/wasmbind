#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Event.hpp"
#include "enums.hpp"

class GPUError;


/// The GPUUncapturedErrorEvent class.
/// [`GPUUncapturedErrorEvent`](https://developer.mozilla.org/en-US/docs/Web/API/GPUUncapturedErrorEvent)
class GPUUncapturedErrorEvent : public Event {
    explicit GPUUncapturedErrorEvent(Handle h) noexcept;

public:
    explicit GPUUncapturedErrorEvent(const emlite::Val &val) noexcept;
    static GPUUncapturedErrorEvent take_ownership(Handle h) noexcept;

    [[nodiscard]] GPUUncapturedErrorEvent clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new GPUUncapturedErrorEvent(..)` constructor, creating a new GPUUncapturedErrorEvent instance
    GPUUncapturedErrorEvent(const jsbind::String& type, const jsbind::Any& gpuUncapturedErrorEventInitDict);
    /// Getter of the `error` attribute.
    /// [`GPUUncapturedErrorEvent.error`](https://developer.mozilla.org/en-US/docs/Web/API/GPUUncapturedErrorEvent/error)
    [[nodiscard]] GPUError error() const;
};

