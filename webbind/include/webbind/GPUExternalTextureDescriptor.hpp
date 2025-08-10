#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "GPUObjectDescriptorBase.hpp"

namespace webbind {

/// Dictionary type GPUExternalTextureDescriptor
/// [`GPUExternalTextureDescriptor`](https://developer.mozilla.org/en-US/docs/Web/API/GPUExternalTextureDescriptor)
class GPUExternalTextureDescriptor : public GPUObjectDescriptorBase {
  explicit GPUExternalTextureDescriptor(Handle h) noexcept;
public:
    static GPUExternalTextureDescriptor take_ownership(Handle h) noexcept;
    explicit GPUExternalTextureDescriptor(const emlite::Val &val) noexcept;
    GPUExternalTextureDescriptor() noexcept;
    [[nodiscard]] GPUExternalTextureDescriptor clone() const noexcept;
    [[nodiscard]] jsbind::Any source() const;
    void source(const jsbind::Any& value);
    [[nodiscard]] PredefinedColorSpace colorSpace() const;
    void colorSpace(const PredefinedColorSpace& value);
};

} // namespace webbind