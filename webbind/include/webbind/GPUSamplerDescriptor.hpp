#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "GPUObjectDescriptorBase.hpp"

namespace webbind {

/// Dictionary type GPUSamplerDescriptor
/// [`GPUSamplerDescriptor`](https://developer.mozilla.org/en-US/docs/Web/API/GPUSamplerDescriptor)
class GPUSamplerDescriptor : public GPUObjectDescriptorBase {
  explicit GPUSamplerDescriptor(Handle h) noexcept;
public:
    static GPUSamplerDescriptor take_ownership(Handle h) noexcept;
    explicit GPUSamplerDescriptor(const emlite::Val &val) noexcept;
    GPUSamplerDescriptor() noexcept;
    [[nodiscard]] GPUSamplerDescriptor clone() const noexcept;
    [[nodiscard]] GPUAddressMode addressModeU() const;
    void addressModeU(const GPUAddressMode& value);
    [[nodiscard]] GPUAddressMode addressModeV() const;
    void addressModeV(const GPUAddressMode& value);
    [[nodiscard]] GPUAddressMode addressModeW() const;
    void addressModeW(const GPUAddressMode& value);
    [[nodiscard]] GPUFilterMode magFilter() const;
    void magFilter(const GPUFilterMode& value);
    [[nodiscard]] GPUFilterMode minFilter() const;
    void minFilter(const GPUFilterMode& value);
    [[nodiscard]] GPUMipmapFilterMode mipmapFilter() const;
    void mipmapFilter(const GPUMipmapFilterMode& value);
    [[nodiscard]] float lodMinClamp() const;
    void lodMinClamp(float value);
    [[nodiscard]] float lodMaxClamp() const;
    void lodMaxClamp(float value);
    [[nodiscard]] GPUCompareFunction compare() const;
    void compare(const GPUCompareFunction& value);
    [[nodiscard]] unsigned short maxAnisotropy() const;
    void maxAnisotropy(unsigned short value);
};

} // namespace webbind