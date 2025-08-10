#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "GPUTexelCopyTextureInfo.hpp"
#include "GPUTexelCopyBufferLayout.hpp"
#include "GPUCopyExternalImageSourceInfo.hpp"
#include "GPUCopyExternalImageDestInfo.hpp"

namespace webbind {

class GPUCommandBuffer;
class GPUBuffer;

/// Interface GPUQueue
/// [`GPUQueue`](https://developer.mozilla.org/en-US/docs/Web/API/GPUQueue)
class GPUQueue : public emlite::Val {
    explicit GPUQueue(Handle h) noexcept;
public:
    explicit GPUQueue(const emlite::Val &val) noexcept;
    static GPUQueue take_ownership(Handle h) noexcept;
    [[nodiscard]] GPUQueue clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The submit method.
    /// [`GPUQueue.submit`](https://developer.mozilla.org/en-US/docs/Web/API/GPUQueue/submit)
    jsbind::Undefined submit(const jsbind::TypedArray<GPUCommandBuffer>& commandBuffers);
    /// The onSubmittedWorkDone method.
    /// [`GPUQueue.onSubmittedWorkDone`](https://developer.mozilla.org/en-US/docs/Web/API/GPUQueue/onSubmittedWorkDone)
    jsbind::Promise<jsbind::Undefined> onSubmittedWorkDone();
    /// The writeBuffer method.
    /// [`GPUQueue.writeBuffer`](https://developer.mozilla.org/en-US/docs/Web/API/GPUQueue/writeBuffer)
    jsbind::Undefined writeBuffer(const GPUBuffer& buffer, const jsbind::Any& bufferOffset, const jsbind::Any& data);
    /// The writeBuffer method.
    /// [`GPUQueue.writeBuffer`](https://developer.mozilla.org/en-US/docs/Web/API/GPUQueue/writeBuffer)
    jsbind::Undefined writeBuffer(const GPUBuffer& buffer, const jsbind::Any& bufferOffset, const jsbind::Any& data, const jsbind::Any& dataOffset);
    /// The writeBuffer method.
    /// [`GPUQueue.writeBuffer`](https://developer.mozilla.org/en-US/docs/Web/API/GPUQueue/writeBuffer)
    jsbind::Undefined writeBuffer(const GPUBuffer& buffer, const jsbind::Any& bufferOffset, const jsbind::Any& data, const jsbind::Any& dataOffset, const jsbind::Any& size);
    /// The writeTexture method.
    /// [`GPUQueue.writeTexture`](https://developer.mozilla.org/en-US/docs/Web/API/GPUQueue/writeTexture)
    jsbind::Undefined writeTexture(const GPUTexelCopyTextureInfo& destination, const jsbind::Any& data, const GPUTexelCopyBufferLayout& dataLayout, const jsbind::Any& size);
    /// The copyExternalImageToTexture method.
    /// [`GPUQueue.copyExternalImageToTexture`](https://developer.mozilla.org/en-US/docs/Web/API/GPUQueue/copyExternalImageToTexture)
    jsbind::Undefined copyExternalImageToTexture(const GPUCopyExternalImageSourceInfo& source, const GPUCopyExternalImageDestInfo& destination, const jsbind::Any& copySize);
    /// [`GPUQueue.label`](https://developer.mozilla.org/en-US/docs/Web/API/GPUQueue/label)
    /// [`GPUQueue.label`](https://developer.mozilla.org/en-US/docs/Web/API/GPUQueue/label)
    [[nodiscard]] jsbind::String label() const;
    /// Setter of the `label` attribute.
    /// [`GPUQueue.label`](https://developer.mozilla.org/en-US/docs/Web/API/GPUQueue/label)
    void label(const jsbind::String& value);
};

} // namespace webbind