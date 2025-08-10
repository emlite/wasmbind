#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type GPUPrimitiveState
/// [`GPUPrimitiveState`](https://developer.mozilla.org/en-US/docs/Web/API/GPUPrimitiveState)
class GPUPrimitiveState : public emlite::Val {
  explicit GPUPrimitiveState(Handle h) noexcept;
public:
    static GPUPrimitiveState take_ownership(Handle h) noexcept;
    explicit GPUPrimitiveState(const emlite::Val &val) noexcept;
    GPUPrimitiveState() noexcept;
    [[nodiscard]] GPUPrimitiveState clone() const noexcept;
    [[nodiscard]] GPUPrimitiveTopology topology() const;
    void topology(const GPUPrimitiveTopology& value);
    [[nodiscard]] GPUIndexFormat stripIndexFormat() const;
    void stripIndexFormat(const GPUIndexFormat& value);
    [[nodiscard]] GPUFrontFace frontFace() const;
    void frontFace(const GPUFrontFace& value);
    [[nodiscard]] GPUCullMode cullMode() const;
    void cullMode(const GPUCullMode& value);
    [[nodiscard]] bool unclippedDepth() const;
    void unclippedDepth(bool value);
};

} // namespace webbind