#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type GPUExtent3DDict
class GPUExtent3DDict : public emlite::Val {
  explicit GPUExtent3DDict(Handle h) noexcept;
public:
    static GPUExtent3DDict take_ownership(Handle h) noexcept;
    explicit GPUExtent3DDict(const emlite::Val &val) noexcept;
    GPUExtent3DDict() noexcept;
    [[nodiscard]] GPUExtent3DDict clone() const noexcept;
    /// Getter of the `width` attribute.
    [[nodiscard]] jsbind::Any width() const;
    /// Setter of the `width` attribute.
    void width(const jsbind::Any& value);
    /// Getter of the `height` attribute.
    [[nodiscard]] jsbind::Any height() const;
    /// Setter of the `height` attribute.
    void height(const jsbind::Any& value);
    /// Getter of the `depthOrArrayLayers` attribute.
    [[nodiscard]] jsbind::Any depthOrArrayLayers() const;
    /// Setter of the `depthOrArrayLayers` attribute.
    void depthOrArrayLayers(const jsbind::Any& value);
};

} // namespace webbind