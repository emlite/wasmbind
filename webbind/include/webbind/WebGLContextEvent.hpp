#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Event.hpp"
#include "enums.hpp"


class WebGLContextEvent : public Event {
    explicit WebGLContextEvent(Handle h) noexcept;

public:
    explicit WebGLContextEvent(const emlite::Val &val) noexcept;
    static WebGLContextEvent take_ownership(Handle h) noexcept;

    WebGLContextEvent clone() const noexcept;
    WebGLContextEvent(const jsbind::String& type);
    WebGLContextEvent(const jsbind::String& type, const jsbind::Any& eventInit);
    jsbind::String statusMessage() const;
};

