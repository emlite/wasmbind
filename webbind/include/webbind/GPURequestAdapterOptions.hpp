#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type GPURequestAdapterOptions
class GPURequestAdapterOptions : public emlite::Val {
  explicit GPURequestAdapterOptions(Handle h) noexcept;
public:
    static GPURequestAdapterOptions take_ownership(Handle h) noexcept;
    explicit GPURequestAdapterOptions(const emlite::Val &val) noexcept;
    GPURequestAdapterOptions() noexcept;
    [[nodiscard]] GPURequestAdapterOptions clone() const noexcept;
    /// Getter of the `featureLevel` attribute.
    [[nodiscard]] jsbind::String featureLevel() const;
    /// Setter of the `featureLevel` attribute.
    void featureLevel(const jsbind::String& value);
    /// Getter of the `powerPreference` attribute.
    [[nodiscard]] GPUPowerPreference powerPreference() const;
    /// Setter of the `powerPreference` attribute.
    void powerPreference(const GPUPowerPreference& value);
    /// Getter of the `forceFallbackAdapter` attribute.
    [[nodiscard]] bool forceFallbackAdapter() const;
    /// Setter of the `forceFallbackAdapter` attribute.
    void forceFallbackAdapter(bool value);
    /// Getter of the `xrCompatible` attribute.
    [[nodiscard]] bool xrCompatible() const;
    /// Setter of the `xrCompatible` attribute.
    void xrCompatible(bool value);
};

} // namespace webbind