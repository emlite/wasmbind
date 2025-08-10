#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type GPUStencilFaceState
/// [`GPUStencilFaceState`](https://developer.mozilla.org/en-US/docs/Web/API/GPUStencilFaceState)
class GPUStencilFaceState : public emlite::Val {
  explicit GPUStencilFaceState(Handle h) noexcept;
public:
    static GPUStencilFaceState take_ownership(Handle h) noexcept;
    explicit GPUStencilFaceState(const emlite::Val &val) noexcept;
    GPUStencilFaceState() noexcept;
    [[nodiscard]] GPUStencilFaceState clone() const noexcept;
    [[nodiscard]] GPUCompareFunction compare() const;
    void compare(const GPUCompareFunction& value);
    [[nodiscard]] GPUStencilOperation failOp() const;
    void failOp(const GPUStencilOperation& value);
    [[nodiscard]] GPUStencilOperation depthFailOp() const;
    void depthFailOp(const GPUStencilOperation& value);
    [[nodiscard]] GPUStencilOperation passOp() const;
    void passOp(const GPUStencilOperation& value);
};

} // namespace webbind