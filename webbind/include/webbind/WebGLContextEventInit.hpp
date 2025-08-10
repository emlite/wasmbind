#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventInit.hpp"

namespace webbind {

/// Dictionary type WebGLContextEventInit
/// [`WebGLContextEventInit`](https://developer.mozilla.org/en-US/docs/Web/API/WebGLContextEventInit)
class WebGLContextEventInit : public EventInit {
  explicit WebGLContextEventInit(Handle h) noexcept;
public:
    static WebGLContextEventInit take_ownership(Handle h) noexcept;
    explicit WebGLContextEventInit(const emlite::Val &val) noexcept;
    WebGLContextEventInit() noexcept;
    [[nodiscard]] WebGLContextEventInit clone() const noexcept;
    [[nodiscard]] jsbind::String statusMessage() const;
    void statusMessage(const jsbind::String& value);
};

} // namespace webbind