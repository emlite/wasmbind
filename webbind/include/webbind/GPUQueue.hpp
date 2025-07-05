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
    GPUTexelCopyBufferLayout clone() const noexcept;
    jsbind::Any offset() const;
    void offset(const jsbind::Any& value);
    jsbind::Any bytesPerRow() const;
    void bytesPerRow(const jsbind::Any& value);
    jsbind::Any rowsPerImage() const;
    void rowsPerImage(const jsbind::Any& value);
};

class GPUCopyExternalImageSourceInfo : public emlite::Val {
  explicit GPUCopyExternalImageSourceInfo(Handle h) noexcept;
public:
    static GPUCopyExternalImageSourceInfo take_ownership(Handle h) noexcept;
    explicit GPUCopyExternalImageSourceInfo(const emlite::Val &val) noexcept;
    GPUCopyExternalImageSourceInfo() noexcept;
    GPUCopyExternalImageSourceInfo clone() const noexcept;
    jsbind::Any source() const;
    void source(const jsbind::Any& value);
    jsbind::Any origin() const;
    void origin(const jsbind::Any& value);
    bool flipY() const;
    void flipY(bool value);
};

class GPUCopyExternalImageDestInfo : public emlite::Val {
  explicit GPUCopyExternalImageDestInfo(Handle h) noexcept;
public:
    static GPUCopyExternalImageDestInfo take_ownership(Handle h) noexcept;
    explicit GPUCopyExternalImageDestInfo(const emlite::Val &val) noexcept;
    GPUCopyExternalImageDestInfo() noexcept;
    GPUCopyExternalImageDestInfo clone() const noexcept;
    PredefinedColorSpace colorSpace() const;
    void colorSpace(const PredefinedColorSpace& value);
    bool premultipliedAlpha() const;
    void premultipliedAlpha(bool value);
};

class GPUQueue : public emlite::Val {
    explicit GPUQueue(Handle h) noexcept;

public:
    explicit GPUQueue(const emlite::Val &val) noexcept;
    static GPUQueue take_ownership(Handle h) noexcept;

    GPUQueue clone() const noexcept;
    jsbind::Undefined submit(const jsbind::Sequence<GPUCommandBuffer>& commandBuffers);
    jsbind::Promise onSubmittedWorkDone();
    jsbind::Undefined writeBuffer(const GPUBuffer& buffer, const jsbind::Any& bufferOffset, const jsbind::Any& data);
    jsbind::Undefined writeBuffer(const GPUBuffer& buffer, const jsbind::Any& bufferOffset, const jsbind::Any& data, const jsbind::Any& dataOffset);
    jsbind::Undefined writeBuffer(const GPUBuffer& buffer, const jsbind::Any& bufferOffset, const jsbind::Any& data, const jsbind::Any& dataOffset, const jsbind::Any& size);
    jsbind::Undefined writeTexture(const GPUTexelCopyTextureInfo& destination, const jsbind::Any& data, const GPUTexelCopyBufferLayout& dataLayout, const jsbind::Any& size);
    jsbind::Undefined copyExternalImageToTexture(const GPUCopyExternalImageSourceInfo& source, const GPUCopyExternalImageDestInfo& destination, const jsbind::Any& copySize);
    jsbind::USVString label() const;
    void label(const jsbind::USVString& value);
};

