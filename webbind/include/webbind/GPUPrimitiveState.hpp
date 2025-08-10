#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type GPUPrimitiveState
class GPUPrimitiveState : public emlite::Val {
  explicit GPUPrimitiveState(Handle h) noexcept;
public:
    static GPUPrimitiveState take_ownership(Handle h) noexcept;
    explicit GPUPrimitiveState(const emlite::Val &val) noexcept;
    GPUPrimitiveState() noexcept;
    [[nodiscard]] GPUPrimitiveState clone() const noexcept;
    /// Getter of the `topology` attribute.
    [[nodiscard]] GPUPrimitiveTopology topology() const;
    /// Setter of the `topology` attribute.
    void topology(const GPUPrimitiveTopology& value);
    /// Getter of the `stripIndexFormat` attribute.
    [[nodiscard]] GPUIndexFormat stripIndexFormat() const;
    /// Setter of the `stripIndexFormat` attribute.
    void stripIndexFormat(const GPUIndexFormat& value);
    /// Getter of the `frontFace` attribute.
    [[nodiscard]] GPUFrontFace frontFace() const;
    /// Setter of the `frontFace` attribute.
    void frontFace(const GPUFrontFace& value);
    /// Getter of the `cullMode` attribute.
    [[nodiscard]] GPUCullMode cullMode() const;
    /// Setter of the `cullMode` attribute.
    void cullMode(const GPUCullMode& value);
    /// Getter of the `unclippedDepth` attribute.
    [[nodiscard]] bool unclippedDepth() const;
    /// Setter of the `unclippedDepth` attribute.
    void unclippedDepth(bool value);
};

} // namespace webbind