#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "GPUObjectDescriptorBase.hpp"

namespace webbind {

/// Dictionary type GPUSamplerDescriptor
class GPUSamplerDescriptor : public GPUObjectDescriptorBase {
  explicit GPUSamplerDescriptor(Handle h) noexcept;
public:
    static GPUSamplerDescriptor take_ownership(Handle h) noexcept;
    explicit GPUSamplerDescriptor(const emlite::Val &val) noexcept;
    GPUSamplerDescriptor() noexcept;
    [[nodiscard]] GPUSamplerDescriptor clone() const noexcept;
    /// Getter of the `addressModeU` attribute.
    [[nodiscard]] GPUAddressMode addressModeU() const;
    /// Setter of the `addressModeU` attribute.
    void addressModeU(const GPUAddressMode& value);
    /// Getter of the `addressModeV` attribute.
    [[nodiscard]] GPUAddressMode addressModeV() const;
    /// Setter of the `addressModeV` attribute.
    void addressModeV(const GPUAddressMode& value);
    /// Getter of the `addressModeW` attribute.
    [[nodiscard]] GPUAddressMode addressModeW() const;
    /// Setter of the `addressModeW` attribute.
    void addressModeW(const GPUAddressMode& value);
    /// Getter of the `magFilter` attribute.
    [[nodiscard]] GPUFilterMode magFilter() const;
    /// Setter of the `magFilter` attribute.
    void magFilter(const GPUFilterMode& value);
    /// Getter of the `minFilter` attribute.
    [[nodiscard]] GPUFilterMode minFilter() const;
    /// Setter of the `minFilter` attribute.
    void minFilter(const GPUFilterMode& value);
    /// Getter of the `mipmapFilter` attribute.
    [[nodiscard]] GPUMipmapFilterMode mipmapFilter() const;
    /// Setter of the `mipmapFilter` attribute.
    void mipmapFilter(const GPUMipmapFilterMode& value);
    /// Getter of the `lodMinClamp` attribute.
    [[nodiscard]] float lodMinClamp() const;
    /// Setter of the `lodMinClamp` attribute.
    void lodMinClamp(float value);
    /// Getter of the `lodMaxClamp` attribute.
    [[nodiscard]] float lodMaxClamp() const;
    /// Setter of the `lodMaxClamp` attribute.
    void lodMaxClamp(float value);
    /// Getter of the `compare` attribute.
    [[nodiscard]] GPUCompareFunction compare() const;
    /// Setter of the `compare` attribute.
    void compare(const GPUCompareFunction& value);
    /// Getter of the `maxAnisotropy` attribute.
    [[nodiscard]] unsigned short maxAnisotropy() const;
    /// Setter of the `maxAnisotropy` attribute.
    void maxAnisotropy(unsigned short value);
};

} // namespace webbind