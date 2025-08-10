#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "GPUObjectDescriptorBase.hpp"

namespace webbind {

/// Dictionary type GPUExternalTextureDescriptor
class GPUExternalTextureDescriptor : public GPUObjectDescriptorBase {
  explicit GPUExternalTextureDescriptor(Handle h) noexcept;
public:
    static GPUExternalTextureDescriptor take_ownership(Handle h) noexcept;
    explicit GPUExternalTextureDescriptor(const emlite::Val &val) noexcept;
    GPUExternalTextureDescriptor() noexcept;
    [[nodiscard]] GPUExternalTextureDescriptor clone() const noexcept;
    /// Getter of the `source` attribute.
    [[nodiscard]] jsbind::Any source() const;
    /// Setter of the `source` attribute.
    void source(const jsbind::Any& value);
    /// Getter of the `colorSpace` attribute.
    [[nodiscard]] PredefinedColorSpace colorSpace() const;
    /// Setter of the `colorSpace` attribute.
    void colorSpace(const PredefinedColorSpace& value);
};

} // namespace webbind