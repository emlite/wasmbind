#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "GPURequestAdapterOptions.hpp"
#include "enums.hpp"

namespace webbind {

class GPUAdapter;
class WGSLLanguageFeatures;

/// Interface GPU
/// [`GPU`](https://developer.mozilla.org/en-US/docs/Web/API/GPU)
class GPU : public emlite::Val {
    explicit GPU(Handle h) noexcept;
public:
    explicit GPU(const emlite::Val &val) noexcept;
    static GPU take_ownership(Handle h) noexcept;
    [[nodiscard]] GPU clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The requestAdapter method.
    /// [`GPU.requestAdapter`](https://developer.mozilla.org/en-US/docs/Web/API/GPU/requestAdapter)
    jsbind::Promise<GPUAdapter> requestAdapter();
    /// The requestAdapter method.
    /// [`GPU.requestAdapter`](https://developer.mozilla.org/en-US/docs/Web/API/GPU/requestAdapter)
    jsbind::Promise<GPUAdapter> requestAdapter(const GPURequestAdapterOptions& options);
    /// The getPreferredCanvasFormat method.
    /// [`GPU.getPreferredCanvasFormat`](https://developer.mozilla.org/en-US/docs/Web/API/GPU/getPreferredCanvasFormat)
    GPUTextureFormat getPreferredCanvasFormat();
    /// Getter of the `wgslLanguageFeatures` attribute.
    /// [`GPU.wgslLanguageFeatures`](https://developer.mozilla.org/en-US/docs/Web/API/GPU/wgslLanguageFeatures)
    [[nodiscard]] WGSLLanguageFeatures wgslLanguageFeatures() const;
};

} // namespace webbind