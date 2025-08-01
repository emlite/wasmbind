#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Event.hpp"
#include "enums.hpp"


/// The WebGLContextEvent class.
/// [`WebGLContextEvent`](https://developer.mozilla.org/en-US/docs/Web/API/WebGLContextEvent)
class WebGLContextEvent : public Event {
    explicit WebGLContextEvent(Handle h) noexcept;

public:
    explicit WebGLContextEvent(const emlite::Val &val) noexcept;
    static WebGLContextEvent take_ownership(Handle h) noexcept;

    [[nodiscard]] WebGLContextEvent clone() const noexcept;
    /// The `new WebGLContextEvent(..)` constructor, creating a new WebGLContextEvent instance
    WebGLContextEvent(const jsbind::String& type);
    /// The `new WebGLContextEvent(..)` constructor, creating a new WebGLContextEvent instance
    WebGLContextEvent(const jsbind::String& type, const jsbind::Any& eventInit);
    /// Getter of the `statusMessage` attribute.
    /// [`WebGLContextEvent.statusMessage`](https://developer.mozilla.org/en-US/docs/Web/API/WebGLContextEvent/statusMessage)
    [[nodiscard]] jsbind::String statusMessage() const;
};

