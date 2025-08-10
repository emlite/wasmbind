#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class GPUCanvasConfiguration;
class GPUTexture;

/// Interface GPUCanvasContext
/// [`GPUCanvasContext`](https://developer.mozilla.org/en-US/docs/Web/API/GPUCanvasContext)
class GPUCanvasContext : public emlite::Val {
    explicit GPUCanvasContext(Handle h) noexcept;
public:
    explicit GPUCanvasContext(const emlite::Val &val) noexcept;
    static GPUCanvasContext take_ownership(Handle h) noexcept;
    [[nodiscard]] GPUCanvasContext clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`GPUCanvasContext.canvas`](https://developer.mozilla.org/en-US/docs/Web/API/GPUCanvasContext/canvas)
    /// [`GPUCanvasContext.canvas`](https://developer.mozilla.org/en-US/docs/Web/API/GPUCanvasContext/canvas)
    [[nodiscard]] jsbind::Any canvas() const;
    /// The configure method.
    /// [`GPUCanvasContext.configure`](https://developer.mozilla.org/en-US/docs/Web/API/GPUCanvasContext/configure)
    jsbind::Undefined configure(const GPUCanvasConfiguration& configuration);
    /// The unconfigure method.
    /// [`GPUCanvasContext.unconfigure`](https://developer.mozilla.org/en-US/docs/Web/API/GPUCanvasContext/unconfigure)
    jsbind::Undefined unconfigure();
    /// The getConfiguration method.
    /// [`GPUCanvasContext.getConfiguration`](https://developer.mozilla.org/en-US/docs/Web/API/GPUCanvasContext/getConfiguration)
    GPUCanvasConfiguration getConfiguration();
    /// The getCurrentTexture method.
    /// [`GPUCanvasContext.getCurrentTexture`](https://developer.mozilla.org/en-US/docs/Web/API/GPUCanvasContext/getCurrentTexture)
    GPUTexture getCurrentTexture();
};

} // namespace webbind