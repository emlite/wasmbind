#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventInit.hpp"

namespace webbind {

/// Dictionary type WebGLContextEventInit
class WebGLContextEventInit : public EventInit {
  explicit WebGLContextEventInit(Handle h) noexcept;
public:
    static WebGLContextEventInit take_ownership(Handle h) noexcept;
    explicit WebGLContextEventInit(const emlite::Val &val) noexcept;
    WebGLContextEventInit() noexcept;
    [[nodiscard]] WebGLContextEventInit clone() const noexcept;
    /// Getter of the `statusMessage` attribute.
    [[nodiscard]] jsbind::String statusMessage() const;
    /// Setter of the `statusMessage` attribute.
    void statusMessage(const jsbind::String& value);
};

} // namespace webbind