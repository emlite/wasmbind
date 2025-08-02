#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "GPUCommandEncoder.hpp"
#include "enums.hpp"

class GPUCommandBuffer;
class GPUBuffer;
class GPUTexelCopyBufferLayout;
class GPUCopyExternalImageSourceInfo;
class GPUCopyExternalImageDestInfo;


class GPUTexelCopyBufferLayout : public emlite::Val {
  explicit GPUTexelCopyBufferLayout(Handle h) noexcept;
public:
    static GPUTexelCopyBufferLayout take_ownership(Handle h) noexcept;
    explicit GPUTexelCopyBufferLayout(const emlite::Val &val) noexcept;
    GPUTexelCopyBufferLayout() noexcept;
    [[nodiscard]] GPUTexelCopyBufferLayout clone() const noexcept;
    [[nodiscard]] jsbind::Any offset() const;
    void offset(const jsbind::Any& value);
    [[nodiscard]] jsbind::Any bytesPerRow() const;
    void bytesPerRow(const jsbind::Any& value);
    [[nodiscard]] jsbind::Any rowsPerImage() const;
    void rowsPerImage(const jsbind::Any& value);
};

class GPUCopyExternalImageSourceInfo : public emlite::Val {
  explicit GPUCopyExternalImageSourceInfo(Handle h) noexcept;
public:
    static GPUCopyExternalImageSourceInfo take_ownership(Handle h) noexcept;
    explicit GPUCopyExternalImageSourceInfo(const emlite::Val &val) noexcept;
    GPUCopyExternalImageSourceInfo() noexcept;
    [[nodiscard]] GPUCopyExternalImageSourceInfo clone() const noexcept;
    [[nodiscard]] jsbind::Any source() const;
    void source(const jsbind::Any& value);
    [[nodiscard]] jsbind::Any origin() const;
    void origin(const jsbind::Any& value);
    [[nodiscard]] bool flipY() const;
    void flipY(bool value);
};

class GPUCopyExternalImageDestInfo : public emlite::Val {
  explicit GPUCopyExternalImageDestInfo(Handle h) noexcept;
public:
    static GPUCopyExternalImageDestInfo take_ownership(Handle h) noexcept;
    explicit GPUCopyExternalImageDestInfo(const emlite::Val &val) noexcept;
    GPUCopyExternalImageDestInfo() noexcept;
    [[nodiscard]] GPUCopyExternalImageDestInfo clone() const noexcept;
    [[nodiscard]] PredefinedColorSpace colorSpace() const;
    void colorSpace(const PredefinedColorSpace& value);
    [[nodiscard]] bool premultipliedAlpha() const;
    void premultipliedAlpha(bool value);
};

/// The GPUQueue class.
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
    /// Getter of the `label` attribute.
    /// [`GPUQueue.label`](https://developer.mozilla.org/en-US/docs/Web/API/GPUQueue/label)
    [[nodiscard]] jsbind::String label() const;
    /// Setter of the `label` attribute.
    /// [`GPUQueue.label`](https://developer.mozilla.org/en-US/docs/Web/API/GPUQueue/label)
    void label(const jsbind::String& value);
};

