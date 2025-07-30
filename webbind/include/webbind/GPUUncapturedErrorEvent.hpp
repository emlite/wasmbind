#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Event.hpp"
#include "enums.hpp"

class GPUError;


class GPUUncapturedErrorEvent : public Event {
    explicit GPUUncapturedErrorEvent(Handle h) noexcept;

public:
    explicit GPUUncapturedErrorEvent(const emlite::Val &val) noexcept;
    static GPUUncapturedErrorEvent take_ownership(Handle h) noexcept;

    GPUUncapturedErrorEvent clone() const noexcept;
    GPUUncapturedErrorEvent(const jsbind::String& type, const jsbind::Any& gpuUncapturedErrorEventInitDict);
    GPUError error() const;
};

