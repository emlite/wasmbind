#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type GPUStencilFaceState
class GPUStencilFaceState : public emlite::Val {
  explicit GPUStencilFaceState(Handle h) noexcept;
public:
    static GPUStencilFaceState take_ownership(Handle h) noexcept;
    explicit GPUStencilFaceState(const emlite::Val &val) noexcept;
    GPUStencilFaceState() noexcept;
    [[nodiscard]] GPUStencilFaceState clone() const noexcept;
    /// Getter of the `compare` attribute.
    [[nodiscard]] GPUCompareFunction compare() const;
    /// Setter of the `compare` attribute.
    void compare(const GPUCompareFunction& value);
    /// Getter of the `failOp` attribute.
    [[nodiscard]] GPUStencilOperation failOp() const;
    /// Setter of the `failOp` attribute.
    void failOp(const GPUStencilOperation& value);
    /// Getter of the `depthFailOp` attribute.
    [[nodiscard]] GPUStencilOperation depthFailOp() const;
    /// Setter of the `depthFailOp` attribute.
    void depthFailOp(const GPUStencilOperation& value);
    /// Getter of the `passOp` attribute.
    [[nodiscard]] GPUStencilOperation passOp() const;
    /// Setter of the `passOp` attribute.
    void passOp(const GPUStencilOperation& value);
};

} // namespace webbind